// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTEMPLATEICONCACHE_H
#define WBSTEMPLATEICONCACHE_H

@class NSMutableDictionary, NSMutableSet, NSCache, NSString, NSURL;
@protocol WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider, OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSSiteMetadataImageCache.h"

@interface WBSTemplateIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSSiteMetadataProvider>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    BOOL _areSettingsLoaded;
    WBSSiteMetadataImageCache *_imageCache;
    os_unfair_lock_s _templateIconsDataForHostsAccessLock;
    NSMutableDictionary *_templateIconsDataForHosts;
    NSMutableDictionary *_hostsToRequestSets;
    NSMutableSet *_pendingTemplateIconRequestHosts;
    NSMutableSet *_pendingTemplateIconFallbackRequestHosts;
    NSMutableSet *_pendingSVGImageRenderingRequests;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSCache *_requestsToResponses;
    BOOL _historyDidFinishLoading;
    BOOL _hasPurgedUnneededItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGSize defaultIconSize; // ivar: _defaultIconSize
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;


-(BOOL)_isLocalIconRequest:(id)arg0 ;
-(BOOL)_templateIconRetainerIsReadyForCleanUp;
-(BOOL)canHandleRequest:(id)arg0 ;
-(BOOL)hasDeterminedIconAvailabilityForURL:(id)arg0 ;
-(BOOL)shouldRequestTemplateIconForURL:(id)arg0 allowRefresh:(BOOL)arg1 ;
-(id)_generateResponseForRequest:(id)arg0 ;
-(id)_imageForRequest:(id)arg0 getThemeColor:(*id)arg1 ;
-(id)_monogramForRequest:(id)arg0 themeColor:(id)arg1 ;
-(id)_templateIconForURL:(id)arg0 getThemeColor:(*id)arg1 ;
-(id)init;
-(id)initWithImageDirectoryURL:(id)arg0 ;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(void)_didAddHistoryItems:(id)arg0 ;
-(void)_didLoadHistory:(id)arg0 ;
-(void)_didRemoveHistoryItems:(id)arg0 ;
-(void)_notifyDidLoadIconForHost:(id)arg0 ;
-(void)_notifyImageWasLoaded:(id)arg0 forHost:(id)arg1 ;
-(void)_purgeUnneededTemplateIconsIfReady;
-(void)_registerRequest:(id)arg0 ;
-(void)_removeTemplateIconsDataForHost:(id)arg0 ifIconIsInCache:(BOOL)arg1 ;
-(void)_requestTemplateIconForRequest:(id)arg0 ;
-(void)_saveTemplateIcon:(id)arg0 withThemeColor:(id)arg1 forHost:(id)arg2 toDisk:(BOOL)arg3 ;
-(void)_setUpAndReturnDelayedResponseForRequest:(id)arg0 ;
-(void)_setUpAndReturnPreparedResponseForRequest:(id)arg0 ;
-(void)_updateTemplateIconsDataForHost:(id)arg0 image:(id)arg1 themeColor:(id)arg2 isSavedToDisk:(BOOL)arg3 ;
-(void)_upgradeCacheVersionIfNeeded;
-(void)addTemplateIconAtURL:(id)arg0 withThemeColor:(id)arg1 forHost:(id)arg2 toDisk:(BOOL)arg3 ;
-(void)dealloc;
-(void)emptyCaches;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)purgeUnneededCacheEntries;
-(void)releaseTemplateIconForHost:(id)arg0 ;
-(void)releaseTemplateIconForURLString:(id)arg0 ;
-(void)releaseTemplateIconsForHosts:(id)arg0 ;
-(void)retainTemplateIconForHost:(id)arg0 ;
-(void)retainTemplateIconForURLString:(id)arg0 ;
-(void)retainTemplateIconsForHosts:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;
-(void)siteMetadataImageCache:(id)arg0 didFinishLoadingImage:(id)arg1 forKeyString:(id)arg2 ;
-(void)siteMetadataImageCache:(id)arg0 didRemoveImageFromCacheForKeyString:(id)arg1 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg0 ;
-(void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg0 ;
-(void)stopWatchingUpdatesForRequest:(id)arg0 ;


@end


#endif