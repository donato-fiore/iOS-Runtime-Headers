// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATASSETSESSIONTASK_H
#define ATASSETSESSIONTASK_H

@class ATSessionTask, NSMutableOrderedSet, NSMutableSet, ATAssetLinkController, NSString, NSPredicate;
@protocol ATAssetLinkControllerObserver, OS_dispatch_queue, OS_dispatch_source;



@interface ATAssetSessionTask : ATSessionTask <ATAssetLinkControllerObserver>

 {
    NSMutableOrderedSet *_remainingAssets;
    NSMutableSet *_failedAssets;
    NSUInteger _recentFailedArrayIndex;
    NSMutableSet *_currentAssets;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _cancelAtStart;
    CGFloat _retryInterval;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _waitingForRetry;
}


@property (retain, nonatomic) ATAssetLinkController *assetLinkController; // ivar: _assetLinkController
@property (readonly, copy, nonatomic) NSString *dataClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger failedAssetsCount; // ivar: _failedAssetsCount
@property (copy, nonatomic) NSPredicate *filterPredicate; // ivar: _filterPredicate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL retryUntilFinished; // ivar: _retryUntilFinished
@property (copy, nonatomic) id *shouldRetryAssetBlock; // ivar: _shouldRetryAssetBlock
@property (readonly) Class superclass;


-(id)_initWithDataClass:(id)arg0 assets:(id)arg1 ;
-(id)init;
-(id)initWithAssets:(id)arg0 ;
-(id)initWithDataClass:(id)arg0 ;
-(id)remainingAssets;
-(id)sessionGroupingKey;
-(void)_finishAsset:(id)arg0 withError:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didFinishAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didUpdateAsset:(id)arg1 ;
-(void)cancel;
-(void)cancelAllAssets;
-(void)resume;
-(void)start;
-(void)suspend;


@end


#endif