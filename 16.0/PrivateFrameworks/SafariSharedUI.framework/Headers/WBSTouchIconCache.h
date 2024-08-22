// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSTOUCHICONCACHE_H
#define WBSTOUCHICONCACHE_H

@class NSMutableDictionary, NSCache, NSMutableArray, NSMutableSet, NSURL, NSString, NSDictionary;
@protocol WBSSiteMetadataImageCacheDelegate, WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider, OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSSiteMetadataImageCache.h"
#import "WBSTouchIconCacheSettingsSQLiteStore.h"

@interface WBSTouchIconCache : NSObject <WBSSiteMetadataImageCacheDelegate, WBSWebViewMetadataFetchOperationDelegate, WBSSiteMetadataProvider>

 {
    NSObject<OS_dispatch_queue> *_internalQueue;
    atomic<bool> _didLoadSettings;
    WBSSiteMetadataImageCache *_imageCache;
    NSMutableDictionary *_hostsToRequestSets;
    os_unfair_lock_s _touchIconsDataForHostsAccessLock;
    NSMutableDictionary *_touchIconsDataForHosts;
    NSCache *_requestsToResponses;
    NSMutableDictionary *_requestsToDelayedResponses;
    NSMutableArray *_pendingSaveTouchIconToDiskBlocks;
    NSMutableSet *_pendingTouchIconRequestHosts;
    WBSTouchIconCacheSettingsSQLiteStore *_cacheSettingsStore;
}


@property (readonly, nonatomic) BOOL allowFetchingOverCellularNetwork; // ivar: _allowFetchingOverCellularNetwork
@property (readonly, nonatomic) NSURL *cacheDirectoryURL; // ivar: _cacheDirectoryURL
@property (readonly, nonatomic) BOOL canFetchOutsideOfUserLoadedWebpage; // ivar: _canFetchOutsideOfUserLoadedWebpage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger fileMappingStyle; // ivar: _fileMappingStyle
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *imageDirectoryURL;
@property (readonly, nonatomic) NSInteger protectionType; // ivar: _protectionType
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly, nonatomic, getter=isReadOnly) BOOL readOnly; // ivar: _readOnly
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSDictionary *uuidStringToHost;


+(id)_generateDefaultFavoritesIcon;
+(id)_generateFavoritesIconForRequest:(id)arg0 withBackgroundColor:(id)arg1 ;
+(id)_monogramConfiguration;
+(id)defaultBackgroundColor;
+(id)defaultGlyphColor;
+(id)generateFavoritesIconForTitle:(id)arg0 url:(id)arg1 backgroundColor:(id)arg2 ;
-(BOOL)_canFetchTouchIconForURL:(id)arg0 inUserLoadedWebpage:(BOOL)arg1 ;
-(BOOL)_shouldGenerateTouchIconFromTouchIcon:(id)arg0 forRequest:(id)arg1 ;
-(BOOL)_shouldRequestTouchIconForURL:(id)arg0 inUserLoadedWebpage:(BOOL)arg1 initiatedFromBookmarkInteraction:(BOOL)arg2 ;
-(BOOL)_shouldRequestTouchIconForURL:(id)arg0 inUserLoadedWebpage:(BOOL)arg1 initiatedFromBookmarkInteraction:(BOOL)arg2 knownImageState:(NSInteger)arg3 ;
-(BOOL)_shouldRequestTouchIconForURL:(id)arg0 inUserLoadedWebpage:(BOOL)arg1 initiatedFromBookmarkInteraction:(BOOL)arg2 shouldCheckImageState:(*BOOL)arg3 ;
-(BOOL)_shouldRequestTouchIconWithTimeoutForURL:(id)arg0 inUserLoadedWebpage:(BOOL)arg1 initiatedFromBookmarkInteraction:(BOOL)arg2 ;
-(BOOL)canHandleRequest:(id)arg0 ;
-(BOOL)hasDeterminedIconAvailabilityForURL:(id)arg0 ;
-(BOOL)shouldRequestTouchIconForURL:(id)arg0 inUserLoadedWebpage:(BOOL)arg1 ;
-(BOOL)shouldRequestTouchIconForWebPageNavigationFromBookmarkInteractionForURL:(id)arg0 ;
-(CGFloat)_maximumScreenScale;
-(NSInteger)_transparencyAnalysisResultForImage:(id)arg0 ;
-(id)_blockOperationForRequest:(SEL)arg0 knownImageState:(id)arg1 ;
-(id)_didGenerateResponse:(id)arg0 forRequest:(id)arg1 ;
-(id)_imageCacheSettingsDatabaseURL;
-(id)_operationWithRequest:(id)arg0 completionHandler:(id)arg1 ;
-(id)_resizedImage:(id)arg0 forHost:(id)arg1 ;
-(id)_responseForRequest:(id)arg0 withTouchIcon:(id)arg1 ;
-(id)_responseForTouchIconRequestWithNoHost:(id)arg0 ;
-(id)_touchIconForURL:(id)arg0 getImageState:(*NSInteger)arg1 ;
-(id)init;
-(id)initWithCacheDirectoryURL:(id)arg0 ;
-(id)initWithCacheDirectoryURL:(id)arg0 isReadOnly:(BOOL)arg1 ;
-(id)initWithCacheDirectoryURL:(id)arg0 isReadOnly:(BOOL)arg1 protectionType:(NSInteger)arg2 allowFetchingOverCellularNetwork:(BOOL)arg3 fileMappingStyle:(NSInteger)arg4 canFetchOutsideOfUserLoadedWebpage:(BOOL)arg5 ;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(id)siteMetadataImageCache:(id)arg0 customFileNameForKeyString:(id)arg1 ;
-(void)_didLoadTouchIcon:(id)arg0 withCacheSettingsEntry:(id)arg1 ;
-(void)_ensureCacheDirectory;
-(void)_enumerateRequestsForHost:(id)arg0 usingBlock:(id)arg1 ;
-(void)_notifyImageWasLoaded:(id)arg0 forHost:(id)arg1 ;
-(void)_openCacheSettingsDatabaseIfNeeded;
-(void)_removeTouchIconsDataForHost:(id)arg0 ;
-(void)_removeTouchIconsDataForHost:(id)arg0 ifIconIsInCache:(BOOL)arg1 ;
-(void)_saveTouchIconToDisk:(id)arg0 forHost:(id)arg1 requestDidSucceed:(BOOL)arg2 statusCode:(NSInteger)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 ;
-(void)_saveTouchIconToDiskWithResult:(id)arg0 forRequest:(id)arg1 knownImageState:(NSInteger)arg2 ;
-(void)_setUpAndReturnDelayedResponseForRequest:(id)arg0 ;
-(void)_setUpAndReturnPreparedResponseForRequest:(id)arg0 withImage:(id)arg1 imageState:(NSInteger)arg2 didReceiveNewData:(BOOL)arg3 ;
-(void)_setUpImageCacheSettingsSQLiteStore;
-(void)_updateTouchIconsDataForHost:(id)arg0 image:(id)arg1 requestDidSucceed:(BOOL)arg2 statusCode:(NSInteger)arg3 isUserLoadedWebpageRequest:(BOOL)arg4 higherPriorityIconDownloadFailedDueToNetworkError:(BOOL)arg5 UUIDString:(id)arg6 ;
-(void)_willSaveTouchIcon:(id)arg0 withCacheSettingsEntry:(id)arg1 ;
-(void)cacheFirstAvailableTouchIcon:(id)arg0 forURL:(id)arg1 ;
-(void)dealloc;
-(void)emptyCaches;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)purgeUnneededCacheEntries;
-(void)releaseTouchIconForHost:(id)arg0 ;
-(void)releaseTouchIconForURLString:(id)arg0 ;
-(void)releaseTouchIconsForHosts:(id)arg0 ;
-(void)removeTouchIconMetadataForHosts:(id)arg0 completionHandler:(id)arg1 ;
-(void)retainTouchIconForHost:(id)arg0 ;
-(void)retainTouchIconForURLString:(id)arg0 ;
-(void)retainTouchIconsForHosts:(id)arg0 ;
-(void)savePendingChangesBeforeTermination;
-(void)saveTouchIconSettings:(id)arg0 touchIcon:(id)arg1 ;
-(void)siteMetadataImageCache:(id)arg0 didFinishLoadingImage:(id)arg1 forKeyString:(id)arg2 ;
-(void)siteMetadataImageCache:(id)arg0 didRemoveImageFromCacheForKeyString:(id)arg1 ;
-(void)siteMetadataImageCacheDidEmptyCache:(id)arg0 ;
-(void)siteMetadataImageCacheDidFinishLoadingSettings:(id)arg0 ;
-(void)stopWatchingUpdatesForRequest:(id)arg0 ;
-(void)webViewMetadataFetchOperation:(id)arg0 didFinishUsingWebView:(id)arg1 ;
-(void)webViewMetadataFetchOperation:(id)arg0 getWebViewOfSize:(struct CGSize )arg1 withConfiguration:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif