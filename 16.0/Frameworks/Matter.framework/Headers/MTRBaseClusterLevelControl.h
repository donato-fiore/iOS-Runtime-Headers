// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBASECLUSTERLEVELCONTROL_H
#define MTRBASECLUSTERLEVELCONTROL_H



#import "MTRCluster.h"

@interface MTRBaseClusterLevelControl : MTRCluster

@property (readonly) *void cppCluster; // ivar: _cppCluster


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDefaultMoveRateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOffTransitionTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOnLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOnOffTransitionTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOnTransitionTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOptionsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeRemainingTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStartUpCurrentLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)moveToClosestFrequencyWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveToLevelWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveToLevelWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDefaultMoveRateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOffTransitionTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOnLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOnOffTransitionTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOnTransitionTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOptionsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeRemainingTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStartUpCurrentLevelWithCompletionHandler:(id)arg0 ;
-(void)stepWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stepWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithOnOffWithCompletionHandler:(id)arg0 ;
-(void)stopWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithParams:(id)arg0 completionHandler:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDefaultMoveRateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOffTransitionTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOnLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOnOffTransitionTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOnTransitionTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOptionsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeRemainingTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStartUpCurrentLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif