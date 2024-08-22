// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRBASECLUSTEROCCUPANCYSENSING_H
#define MTRBASECLUSTEROCCUPANCYSENSING_H



#import "MTRCluster.h"
#import "MTRBaseDevice.h"

@interface MTRBaseClusterOccupancySensing : MTRCluster

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
+(void)readAttributeOccupancySensorTypeBitmapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupancySensorTypeBitmapWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOccupancySensorTypeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupancySensorTypeWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeOccupancyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupancyWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePIROccupiedToUnoccupiedDelayWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePIRUnoccupiedToOccupiedDelayWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePIRUnoccupiedToOccupiedThresholdWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributePirOccupiedToUnoccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePirUnoccupiedToOccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePirUnoccupiedToOccupiedThresholdWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
+(void)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithClusterStateCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completion:(id)arg3 ;
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
-(void)readAttributeOccupancySensorTypeBitmapWithCompletion:(id)arg0 ;
-(void)readAttributeOccupancySensorTypeBitmapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupancySensorTypeWithCompletion:(id)arg0 ;
-(void)readAttributeOccupancySensorTypeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupancyWithCompletion:(id)arg0 ;
-(void)readAttributeOccupancyWithCompletionHandler:(id)arg0 ;
-(void)readAttributePIROccupiedToUnoccupiedDelayWithCompletion:(id)arg0 ;
-(void)readAttributePIRUnoccupiedToOccupiedDelayWithCompletion:(id)arg0 ;
-(void)readAttributePIRUnoccupiedToOccupiedThresholdWithCompletion:(id)arg0 ;
-(void)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithCompletion:(id)arg0 ;
-(void)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithCompletion:(id)arg0 ;
-(void)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithCompletion:(id)arg0 ;
-(void)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithCompletionHandler:(id)arg0 ;
-(void)readAttributePirOccupiedToUnoccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePirUnoccupiedToOccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePirUnoccupiedToOccupiedThresholdWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithCompletion:(id)arg0 ;
-(void)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithCompletion:(id)arg0 ;
-(void)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithCompletion:(id)arg0 ;
-(void)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithCompletionHandler:(id)arg0 ;
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
// -(void)subscribeAttributeOccupancySensorTypeBitmapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupancySensorTypeBitmapWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOccupancySensorTypeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupancySensorTypeWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeOccupancyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupancyWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePIROccupiedToUnoccupiedDelayWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePIRUnoccupiedToOccupiedDelayWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePIRUnoccupiedToOccupiedThresholdWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePhysicalContactOccupiedToUnoccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalContactOccupiedToUnoccupiedDelayWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePhysicalContactUnoccupiedToOccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalContactUnoccupiedToOccupiedDelayWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributePirOccupiedToUnoccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePirUnoccupiedToOccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePirUnoccupiedToOccupiedThresholdWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicOccupiedToUnoccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicOccupiedToUnoccupiedDelayWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeUltrasonicUnoccupiedToOccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicUnoccupiedToOccupiedDelayWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
// -(void)subscribeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithParams:(id)arg0 subscriptionEstablished:(id)arg1 reportHandler:(unk)arg2  ;
-(void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completion:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completion:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif