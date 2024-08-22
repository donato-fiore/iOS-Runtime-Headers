// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERLEVELCONTROL_H
#define MTRBASECLUSTERLEVELCONTROL_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterLevelControl : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeCurrentFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentFrequencyWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeCurrentLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeCurrentLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeDefaultMoveRateWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeDefaultMoveRateWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMaxFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxFrequencyWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMaxLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMinFrequencyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinFrequencyWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMinLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOffTransitionTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOffTransitionTimeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOnLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOnLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOnOffTransitionTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOnOffTransitionTimeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOnTransitionTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOnTransitionTimeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOptionsWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOptionsWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeRemainingTimeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeRemainingTimeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeStartUpCurrentLevelWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeStartUpCurrentLevelWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)moveToClosestFrequencyWithParams:(id)arg0 completion:(id)arg1 ;
-(void)moveToClosestFrequencyWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveToLevelWithOnOffWithParams:(id)arg0 completion:(id)arg1 ;
-(void)moveToLevelWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveToLevelWithParams:(id)arg0 completion:(id)arg1 ;
-(void)moveToLevelWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveWithOnOffWithParams:(id)arg0 completion:(id)arg1 ;
-(void)moveWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)moveWithParams:(id)arg0 completion:(id)arg1 ;
-(void)moveWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentFrequencyWithCompletion:(id)arg0 ;
-(void)readAttributeCurrentFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeCurrentLevelWithCompletion:(id)arg0 ;
-(void)readAttributeCurrentLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeDefaultMoveRateWithCompletion:(id)arg0 ;
-(void)readAttributeDefaultMoveRateWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxFrequencyWithCompletion:(id)arg0 ;
-(void)readAttributeMaxFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxLevelWithCompletion:(id)arg0 ;
-(void)readAttributeMaxLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinFrequencyWithCompletion:(id)arg0 ;
-(void)readAttributeMinFrequencyWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinLevelWithCompletion:(id)arg0 ;
-(void)readAttributeMinLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOffTransitionTimeWithCompletion:(id)arg0 ;
-(void)readAttributeOffTransitionTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOnLevelWithCompletion:(id)arg0 ;
-(void)readAttributeOnLevelWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOnOffTransitionTimeWithCompletion:(id)arg0 ;
-(void)readAttributeOnOffTransitionTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOnTransitionTimeWithCompletion:(id)arg0 ;
-(void)readAttributeOnTransitionTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOptionsWithCompletion:(id)arg0 ;
-(void)readAttributeOptionsWithCompletionHandler:(id)arg0 ;
-(void)readAttributeRemainingTimeWithCompletion:(id)arg0 ;
-(void)readAttributeRemainingTimeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeStartUpCurrentLevelWithCompletion:(id)arg0 ;
-(void)readAttributeStartUpCurrentLevelWithCompletionHandler:(id)arg0 ;
-(void)stepWithOnOffWithParams:(id)arg0 completion:(id)arg1 ;
-(void)stepWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stepWithParams:(id)arg0 completion:(id)arg1 ;
-(void)stepWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithOnOffWithParams:(id)arg0 completion:(id)arg1 ;
-(void)stopWithOnOffWithParams:(id)arg0 completionHandler:(id)arg1 ;
-(void)stopWithParams:(id)arg0 completion:(id)arg1 ;
-(void)stopWithParams:(id)arg0 completionHandler:(id)arg1 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeCurrentFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentFrequencyWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeCurrentLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeCurrentLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeDefaultMoveRateWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeDefaultMoveRateWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMaxFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxFrequencyWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMaxLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMinFrequencyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinFrequencyWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMinLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOffTransitionTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOffTransitionTimeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOnLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOnLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOnOffTransitionTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOnOffTransitionTimeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOnTransitionTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOnTransitionTimeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOptionsWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOptionsWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeRemainingTimeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeRemainingTimeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeStartUpCurrentLevelWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeStartUpCurrentLevelWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif