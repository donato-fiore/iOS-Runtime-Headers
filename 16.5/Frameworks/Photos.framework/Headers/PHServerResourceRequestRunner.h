// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSERVERRESOURCEREQUESTRUNNER_H
#define PHSERVERRESOURCEREQUESTRUNNER_H

@class NSProgress, PLProgressFollower, NSString;
@protocol PLResourceDataStore;

#import <Foundation/Foundation.h>


@interface PHServerResourceRequestRunner : NSObject {
    NSProgress *_progress;
    os_unfair_lock_s _lock;
    PLProgressFollower *_dataStoreFollower;
    id<PLResourceDataStore> *_dataStore;
    NSInteger _state;
}


@property (readonly, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier


-(BOOL)_resourceQualifiesForCacheMetricsCollection:(id)arg0 isLivePhoto:(BOOL)arg1 ;
-(NSInteger)state;
-(id)_applyCorrectionsToAssetObjectIDURL:(id)arg0 resourceIdentity:(id)arg1 errorCodes:(id)arg2 library:(id)arg3 reply:(id)arg4 ;
-(id)_assetAndRelatedObjectsFromAssetObjectIDURL:(id)arg0 inManagedObjectContext:(id)arg1 error:(*id)arg2 ;
-(id)_avAssetProxyForOutOfBandHintsAboutAssetForResource:(id)arg0 ;
-(id)_urlByAttachingOutOfBandHintsToVideoURL:(id)arg0 assetProxy:(id)arg1 signpostId:(NSUInteger)arg2 hintsBase64String:(*id)arg3 ;
-(id)applyAssetScopeCorrectionsWithRequest:(id)arg0 errorCodes:(id)arg1 library:(id)arg2 reply:(id)arg3 ;
-(id)applyResourceScopeCorrectionsWithRequest:(id)arg0 errorCodes:(id)arg1 library:(id)arg2 reply:(id)arg3 ;
-(id)chooseVideoWithRequest:(id)arg0 library:(id)arg1 clientBundleID:(id)arg2 reply:(id)arg3 ;
-(id)initWithTaskIdentifier:(id)arg0 ;
-(id)makeResourceAvailableWithRequest:(id)arg0 library:(id)arg1 clientBundleID:(id)arg2 reply:(id)arg3 ;
-(id)mutableStreamingHintsForAVAssetProxy:(id)arg0 ;
-(id)videoResourceChoiceForAsset:(id)arg0 context:(id)arg1 loadingMode:(*NSInteger)arg2 request:(id)arg3 shouldReturnAdjustmentInfo:(*BOOL)arg4 error:(*id)arg5 ;
-(void)_cancelWithReply:(id)arg0 ;
-(void)_handleProgress:(id)arg0 ;
-(void)_replyToVideoRequestWithURL:(id)arg0 mediaItemMakerData:(id)arg1 mutableInfo:(id)arg2 internalInfo:(id)arg3 error:(id)arg4 pathForAdjustmentFileIfNeeded:(id)arg5 reply:(id)arg6 ;
-(void)_safeReply:(id)arg0 ;
-(void)dealloc;
-(void)makeResourceUnavailableWithRequest:(id)arg0 library:(id)arg1 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif