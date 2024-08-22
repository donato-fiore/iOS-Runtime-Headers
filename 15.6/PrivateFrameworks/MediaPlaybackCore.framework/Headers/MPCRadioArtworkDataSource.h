// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCRADIOARTWORKDATASOURCE_H
#define MPCRADIOARTWORKDATASOURCE_H

@class MPAbstractNetworkArtworkDataSource, MSVLRUDictionary;
@protocol OS_dispatch_queue;



@interface MPCRadioArtworkDataSource : MPAbstractNetworkArtworkDataSource {
    NSUInteger _backgroundCacheSize;
    NSUInteger _cacheSize;
    MSVLRUDictionary *_cachedArtworkRepresentations;
    NSObject<OS_dispatch_queue> *_cachedArtworkRepresentationsAccessQueue;
    NSInteger _resumeToForegroundCacheSize;
}




+(id)sharedRadioArtworkDataSource;
-(BOOL)areRepresentationsAvailableForCatalog:(id)arg0 ;
-(BOOL)isRepresentation:(id)arg0 bestRepresentationForArtworkCatalog:(id)arg1 ;
-(id)existingRepresentationForArtworkCatalog:(id)arg0 ;
-(id)init;
-(id)requestForCatalog:(id)arg0 size:(struct CGSize )arg1 ;
-(id)visualIdenticalityIdentifierForCatalog:(id)arg0 ;
-(void)_cacheArtworkRepresentation:(id)arg0 forKey:(id)arg1 ;
-(void)_clearCache;
-(void)_handleDidEnterBackgroundNotification:(id)arg0 ;
-(void)_handleDidReceiveMemoryWarningNotification:(id)arg0 ;
-(void)_handleWillEnterForegroundNotification:(id)arg0 ;
-(void)_setCacheSize:(NSUInteger)arg0 preserveExisting:(BOOL)arg1 ;
-(void)cancelLoadingRepresentationForArtworkCatalog:(id)arg0 ;
-(void)dealloc;
-(void)loadRepresentationForArtworkCatalog:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif