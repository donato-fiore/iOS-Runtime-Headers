// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBASECLUSTERBARRIERCONTROL_H
#define MTRBASECLUSTERBARRIERCONTROL_H



#import "MTRCluster.h"

@interface MTRBaseClusterBarrierControl : MTRCluster

@property (readonly) *void cppCluster; // ivar: _cppCluster


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCapabilitiesWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCloseEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierClosePeriodWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCommandCloseEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierCommandOpenEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierMovingStateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierOpenEventsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierOpenPeriodWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierPositionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeBarrierSafetyStatusWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(void)barrierControlGoToPercentWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)barrierControlStopWithCompletionHandler:(id)arg0 ;
-(void)barrierControlStopWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCapabilitiesWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCloseEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierClosePeriodWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCommandCloseEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierCommandOpenEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierMovingStateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierOpenEventsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierOpenPeriodWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierPositionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeBarrierSafetyStatusWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCapabilitiesWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCloseEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierClosePeriodWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCommandCloseEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierCommandOpenEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierMovingStateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierOpenEventsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierOpenPeriodWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierPositionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeBarrierSafetyStatusWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif