// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
-(id)applyAssetScopeCorrectionsWithRequest:(id)arg0 errorCodes:(id)arg1 library:(id)arg2 reply:(id)arg3 ;
-(id)applyResourceScopeCorrectionsWithRequest:(id)arg0 errorCodes:(id)arg1 library:(id)arg2 reply:(id)arg3 ;
-(id)chooseVideoWithRequest:(id)arg0 library:(id)arg1 clientBundleID:(id)arg2 reply:(id)arg3 ;
-(id)initWithTaskIdentifier:(id)arg0 ;
-(id)makeResourceAvailableWithRequest:(id)arg0 library:(id)arg1 clientBundleID:(id)arg2 reply:(id)arg3 ;
-(void)_cancelWithReply:(id)arg0 ;
-(void)_handleProgress:(id)arg0 ;
-(void)_replyToVideoRequestWithURL:(id)arg0 mutableInfo:(id)arg1 internalInfo:(id)arg2 error:(id)arg3 pathForAdjustmentFileIfNeeded:(id)arg4 reply:(id)arg5 ;
-(void)_safeReply:(id)arg0 ;
-(void)makeResourceUnavailableWithRequest:(id)arg0 library:(id)arg1 ;
-(void)setState:(NSInteger)arg0 ;


@end


#endif