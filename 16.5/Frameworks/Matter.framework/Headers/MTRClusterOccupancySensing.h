// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTEROCCUPANCYSENSING_H
#define MTRCLUSTEROCCUPANCYSENSING_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterOccupancySensing : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeOccupancySensorTypeBitmapWithParams:(id)arg0 ;
-(id)readAttributeOccupancySensorTypeWithParams:(id)arg0 ;
-(id)readAttributeOccupancyWithParams:(id)arg0 ;
-(id)readAttributePIROccupiedToUnoccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributePIRUnoccupiedToOccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributePIRUnoccupiedToOccupiedThresholdWithParams:(id)arg0 ;
-(id)readAttributePhysicalContactOccupiedToUnoccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributePhysicalContactUnoccupiedToOccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributePhysicalContactUnoccupiedToOccupiedThresholdWithParams:(id)arg0 ;
-(id)readAttributePirOccupiedToUnoccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributePirUnoccupiedToOccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributePirUnoccupiedToOccupiedThresholdWithParams:(id)arg0 ;
-(id)readAttributeUltrasonicOccupiedToUnoccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributeUltrasonicUnoccupiedToOccupiedDelayWithParams:(id)arg0 ;
-(id)readAttributeUltrasonicUnoccupiedToOccupiedThresholdWithParams:(id)arg0 ;
-(void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePIROccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePIRUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePIRUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePhysicalContactOccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePhysicalContactUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePirOccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePirUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePirUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUltrasonicOccupiedToUnoccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedDelayWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeUltrasonicUnoccupiedToOccupiedThresholdWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif