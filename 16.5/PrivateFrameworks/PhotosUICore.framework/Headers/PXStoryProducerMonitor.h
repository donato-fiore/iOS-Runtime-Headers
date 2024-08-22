// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSTORYPRODUCERMONITOR_H
#define PXSTORYPRODUCERMONITOR_H

@class NSString;
@protocol PXStoryMutableProducerMonitor, PXStoryQueueParticipant, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXUpdater.h"

@interface PXStoryProducerMonitor : PXObservable <PXStoryMutableProducerMonitor, PXStoryQueueParticipant>



@property (readonly, nonatomic) CGFloat currentTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float estimatedFractionCompletedPlaybackSpeed; // ivar: _estimatedFractionCompletedPlaybackSpeed
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isLikelyToKeepUp; // ivar: _isLikelyToKeepUp
@property (readonly, nonatomic) float lastFractionCompleted; // ivar: _lastFractionCompleted
@property (readonly, nonatomic) CGFloat lastTime; // ivar: _lastTime
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *storyQueue; // ivar: _storyQueue
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


+(id)currentDateForTesting;
+(void)setCurrentDateForTesting:(id)arg0 ;
-(id)init;
-(id)initWithStoryQueue:(id)arg0 ;
-(void)_invalidateIsLikelyToKeepUp;
-(void)_setNeedsUpdate;
-(void)_updateIsLikelyToKeepUp;
-(void)didPerformChanges;
-(void)performChanges:(id)arg0 ;
-(void)producerDidProduceResult:(id)arg0 ;
-(void)reset;


@end


#endif