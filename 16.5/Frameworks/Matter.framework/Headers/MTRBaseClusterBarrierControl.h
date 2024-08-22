// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERBARRIERCONTROL_H
#define MTRBASECLUSTERBARRIERCONTROL_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterBarrierControl : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierCapabilitiesWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCapabilitiesWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierCloseEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCloseEventsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierClosePeriodWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierClosePeriodWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierCommandCloseEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCommandCloseEventsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierCommandOpenEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCommandOpenEventsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierMovingStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierMovingStateWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierOpenEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierOpenEventsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierOpenPeriodWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierOpenPeriodWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierPositionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierPositionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeBarrierSafetyStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierSafetyStatusWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)barrierControlGoToPercentWithParams:(id)arg0 completion:(id)arg1 ;
-(void)barrierControlGoToPercentWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)barrierControlStopWithCompletion:(id)arg0 ;
-(void)barrierControlStopWithCompletionHandler:(id)arg0 ;
-(void)barrierControlStopWithParams:(id)arg0 completion:(id)arg1 ;
-(void)barrierControlStopWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCapabilitiesWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierCapabilitiesWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCloseEventsWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierCloseEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierClosePeriodWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierClosePeriodWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCommandCloseEventsWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierCommandCloseEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCommandOpenEventsWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierCommandOpenEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierMovingStateWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierMovingStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierOpenEventsWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierOpenEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierOpenPeriodWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierOpenPeriodWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierPositionWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierPositionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierSafetyStatusWithCompletion:(id)arg0 ;
-(void)readAttributeBarrierSafetyStatusWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierCapabilitiesWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCapabilitiesWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierCloseEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCloseEventsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierClosePeriodWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierClosePeriodWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierCommandCloseEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCommandCloseEventsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierCommandOpenEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCommandOpenEventsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierMovingStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierMovingStateWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierOpenEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierOpenEventsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierOpenPeriodWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierOpenPeriodWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierPositionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierPositionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeBarrierSafetyStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierSafetyStatusWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif