// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTERPRESSUREMEASUREMENT_H
#define MTRBASECLUSTERPRESSUREMEASUREMENT_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterPressureMeasurement : MTRCluster

@property (readonly, nonatomic) MTRBaseDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAcceptedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMaxMeasuredValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxMeasuredValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMaxScaledValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMaxScaledValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMeasuredValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMeasuredValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMinMeasuredValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinMeasuredValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeMinScaledValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeMinScaledValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeScaleWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeScaleWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeScaledToleranceWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeScaledToleranceWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeScaledValueWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeScaledValueWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeToleranceWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeToleranceWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(void)readAttributeAcceptedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletion:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletion:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletion:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletion:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxMeasuredValueWithCompletion:(id)arg0 ;
-(void)readAttributeMaxMeasuredValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMaxScaledValueWithCompletion:(id)arg0 ;
-(void)readAttributeMaxScaledValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMeasuredValueWithCompletion:(id)arg0 ;
-(void)readAttributeMeasuredValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinMeasuredValueWithCompletion:(id)arg0 ;
-(void)readAttributeMinMeasuredValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeMinScaledValueWithCompletion:(id)arg0 ;
-(void)readAttributeMinScaledValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeScaleWithCompletion:(id)arg0 ;
-(void)readAttributeScaleWithCompletionHandler:(id)arg0 ;
-(void)readAttributeScaledToleranceWithCompletion:(id)arg0 ;
-(void)readAttributeScaledToleranceWithCompletionHandler:(id)arg0 ;
-(void)readAttributeScaledValueWithCompletion:(id)arg0 ;
-(void)readAttributeScaledValueWithCompletionHandler:(id)arg0 ;
-(void)readAttributeToleranceWithCompletion:(id)arg0 ;
-(void)readAttributeToleranceWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAcceptedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMaxMeasuredValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxMeasuredValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMaxScaledValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMaxScaledValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMeasuredValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMeasuredValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMinMeasuredValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinMeasuredValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeMinScaledValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeMinScaledValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeScaleWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeScaleWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeScaledToleranceWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeScaledToleranceWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeScaledValueWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeScaledValueWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeToleranceWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeToleranceWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;


@end


#endif