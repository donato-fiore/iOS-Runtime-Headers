// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERBALLASTCONFIGURATION_H
#define MTRCLUSTERBALLASTCONFIGURATION_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterBallastConfiguration : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeBallastFactorAdjustmentWithParams:(id)arg0 ;
-(id)readAttributeBallastStatusWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeIntrinsicBalanceFactorWithParams:(id)arg0 ;
-(id)readAttributeIntrinsicBallastFactorWithParams:(id)arg0 ;
-(id)readAttributeLampAlarmModeWithParams:(id)arg0 ;
-(id)readAttributeLampBurnHoursTripPointWithParams:(id)arg0 ;
-(id)readAttributeLampBurnHoursWithParams:(id)arg0 ;
-(id)readAttributeLampManufacturerWithParams:(id)arg0 ;
-(id)readAttributeLampQuantityWithParams:(id)arg0 ;
-(id)readAttributeLampRatedHoursWithParams:(id)arg0 ;
-(id)readAttributeLampTypeWithParams:(id)arg0 ;
-(id)readAttributeMaxLevelWithParams:(id)arg0 ;
-(id)readAttributeMinLevelWithParams:(id)arg0 ;
-(id)readAttributePhysicalMaxLevelWithParams:(id)arg0 ;
-(id)readAttributePhysicalMinLevelWithParams:(id)arg0 ;
-(void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBallastFactorAdjustmentWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeIntrinsicBalanceFactorWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeIntrinsicBalanceFactorWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeIntrinsicBallastFactorWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeIntrinsicBallastFactorWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLampAlarmModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLampAlarmModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLampBurnHoursTripPointWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLampBurnHoursWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLampBurnHoursWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLampManufacturerWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLampManufacturerWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLampRatedHoursWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLampRatedHoursWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeLampTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeLampTypeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMaxLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeMinLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif