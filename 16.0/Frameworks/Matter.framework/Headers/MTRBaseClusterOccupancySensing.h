// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRBASECLUSTEROCCUPANCYSENSING_H
#define MTRBASECLUSTEROCCUPANCYSENSING_H



#import "MTRCluster.h"

@interface MTRBaseClusterOccupancySensing : MTRCluster

@property (readonly) *void cppCluster; // ivar: _cppCluster


+(void)readAttributeAcceptedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeAttributeListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeClusterRevisionWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeFeatureMapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeGeneratedCommandListWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupancySensorTypeBitmapWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupancySensorTypeWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeOccupancyWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePirOccupiedToUnoccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePirUnoccupiedToOccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributePirUnoccupiedToOccupiedThresholdWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
+(void)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithAttributeCache:(id)arg0 endpoint:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(void)dealloc;
-(void)readAttributeAcceptedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeAttributeListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithCompletionHandler:(id)arg0 ;
-(void)readAttributeFeatureMapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeGeneratedCommandListWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupancySensorTypeBitmapWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupancySensorTypeWithCompletionHandler:(id)arg0 ;
-(void)readAttributeOccupancyWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithCompletionHandler:(id)arg0 ;
-(void)readAttributePirOccupiedToUnoccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePirUnoccupiedToOccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributePirUnoccupiedToOccupiedThresholdWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithCompletionHandler:(id)arg0 ;
-(void)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithCompletionHandler:(id)arg0 ;
// -(void)subscribeAttributeAcceptedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeAttributeListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeClusterRevisionWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeFeatureMapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeGeneratedCommandListWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupancySensorTypeBitmapWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupancySensorTypeWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeOccupancyWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalContactOccupiedToUnoccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalContactUnoccupiedToOccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePirOccupiedToUnoccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePirUnoccupiedToOccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributePirUnoccupiedToOccupiedThresholdWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicOccupiedToUnoccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicUnoccupiedToOccupiedDelayWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
// -(void)subscribeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithMinInterval:(id)arg0 maxInterval:(id)arg1 params:(id)arg2 subscriptionEstablished:(id)arg3 reportHandler:(unk)arg4  ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 params:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif