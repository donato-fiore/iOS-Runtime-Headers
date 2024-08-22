// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSFAVICONPROVIDER_H
#define WBSFAVICONPROVIDER_H

@class NSMutableDictionary, NSCache, NSCalendar, NSArray, NSURL, NSString;
@protocol WBSSiteMetadataProvider, OS_dispatch_queue, WBSSiteMetadataProviderDelegate;

#import <Foundation/Foundation.h>

#import "WBSFaviconProviderPersistenceController.h"

@interface WBSFaviconProvider : NSObject <WBSSiteMetadataProvider>

 {
    NSMutableDictionary *_hostsToRequestsMap;
    NSCache *_responseCache;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_internalSavingQueue;
    NSMutableDictionary *_urlsToFaviconRecordsSavedDuringMigration;
    WBSFaviconProviderPersistenceController *_persistenceController;
    NSCalendar *_calendar;
    CGFloat _expirationInterval;
    NSInteger _providerState;
    NSUInteger _privateDataRetentionCount;
    CGSize _scaledPreferredIconSize;
    id *_shouldCheckIntegrityWhenOpeningDatabaseBlock;
}


@property (readonly, copy, nonatomic) NSArray *allIconScales; // ivar: _allIconScales
@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isReadOnly; // ivar: _isReadOnly
@property (readonly, nonatomic) CGFloat preferredIconScale; // ivar: _preferredIconScale
@property (readonly, nonatomic) CGSize preferredIconSize; // ivar: _preferredIconSize
@property (weak) NSObject<WBSSiteMetadataProviderDelegate> *providerDelegate; // ivar: _providerDelegate
@property (readonly, nonatomic) BOOL providesFavicons;
@property (readonly) Class superclass;


+(struct CGSize )defaultFaviconSize;
-(BOOL)_isIconDateExpired:(id)arg0 ;
-(BOOL)canHandleRequest:(id)arg0 ;
-(NSInteger)providerState;
-(id)_cachedResponseForRequest:(id)arg0 ;
-(id)_hostFromRequest:(id)arg0 ;
-(id)_hostFromURL:(id)arg0 ;
-(id)_requestsForHost:(id)arg0 ;
-(id)_responseCacheKeyForRequest:(id)arg0 ;
-(id)_responseDictionaryKeyForRequest:(id)arg0 ;
-(id)builtInIconForRequest:(id)arg0 ;
-(id)fallbackIconForRequest:(id)arg0 ;
-(id)init;
-(id)initWithPersistenceBaseURL:(id)arg0 persistenceName:(id)arg1 preferredIconSize:(struct CGSize )arg2 atScale:(CGFloat)arg3 allScales:(id)arg4 isReadOnly:(BOOL)arg5 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id)arg6 ;
-(id)initWithPersistenceBaseURL:(id)arg0 persistenceName:(id)arg1 preferredIconSize:(struct CGSize )arg2 atScale:(CGFloat)arg3 allScales:(id)arg4 shouldCheckIntegrityWhenOpeningDatabaseBlock:(id)arg5 ;
-(id)persistenceController;
-(id)responseForRequest:(id)arg0 willProvideUpdates:(*BOOL)arg1 ;
-(void)_addCachedResponse:(id)arg0 forRequest:(id)arg1 ;
-(void)_atomicallyLinkPageURLs:(id)arg0 toIconWithInfo:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)_atomicallySaveImageData:(id)arg0 iconURL:(id)arg1 pageURL:(id)arg2 originalPageURL:(id)arg3 size:(struct CGSize )arg4 isPrivate:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)_confirmImageDataShouldBeSaved:(id)arg0 size:(struct CGSize )arg1 pageURL:(id)arg2 iconURL:(id)arg3 includingPrivateData:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)_getIconForRequest:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_linkPageURL:(id)arg0 toIconWithInfo:(id)arg1 isPrivate:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_prepareAndSendResponseForRequests:(id)arg0 forceDidReceiveNewData:(BOOL)arg1 ;
-(void)_registerRequest:(id)arg0 ;
-(void)_removeCachedResponsesForRequest:(id)arg0 ;
-(void)_removeCachedResponsesForURL:(id)arg0 ;
-(void)_saveImageData:(id)arg0 iconURL:(id)arg1 pageURL:(id)arg2 originalPageURL:(id)arg3 size:(struct CGSize )arg4 isPrivate:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)_updateOutstandingRequestsAfterSuccessfulSetup;
-(void)_updateOutstandingRequestsForPageURL:(id)arg0 forceDidReceiveNewData:(BOOL)arg1 ;
-(void)cleanUpAfterPersistenceSetUpDidSucceed:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)emptyCaches;
-(void)flushPrivateDataFromMemoryWithCompletionHandler:(id)arg0 ;
-(void)imageForRequestDuringPersistenceSetUp:(id)arg0 completionHandler:(id)arg1 ;
-(void)linkIconFromPageURL:(id)arg0 toCurrentPageURL:(id)arg1 isPrivate:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)prepareResponseForRequest:(id)arg0 allowDelayedResponse:(BOOL)arg1 ;
-(void)releasePrivateData;
-(void)removeAllIconsForURLStringsNotIn:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeIconForURLString:(id)arg0 completionHandler:(id)arg1 ;
-(void)retainPrivateData;
-(void)saveFaviconImageData:(id)arg0 iconURL:(id)arg1 pageURL:(id)arg2 originalPageURL:(id)arg3 size:(struct CGSize )arg4 isPrivate:(BOOL)arg5 completionHandler:(id)arg6 ;
-(void)savePendingChangesBeforeTermination;
-(void)setUpPersistenceAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)setUpWithCompletionHandler:(id)arg0 ;
-(void)shouldIconDataBeSavedForIconWithPageURL:(id)arg0 originalPageURL:(id)arg1 iconURL:(id)arg2 size:(struct CGSize )arg3 isPrivate:(BOOL)arg4 completionHandler:(id)arg5 ;
-(void)stopWatchingUpdatesForRequest:(id)arg0 ;


@end


#endif