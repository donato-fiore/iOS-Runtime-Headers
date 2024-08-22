// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERWINDOWCOVERING_H
#define MTRCLUSTERWINDOWCOVERING_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterWindowCovering : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeConfigStatusWithParams:(id)arg0 ;
-(id)readAttributeCurrentPositionLiftPercent100thsWithParams:(id)arg0 ;
-(id)readAttributeCurrentPositionLiftPercentageWithParams:(id)arg0 ;
-(id)readAttributeCurrentPositionLiftWithParams:(id)arg0 ;
-(id)readAttributeCurrentPositionTiltPercent100thsWithParams:(id)arg0 ;
-(id)readAttributeCurrentPositionTiltPercentageWithParams:(id)arg0 ;
-(id)readAttributeCurrentPositionTiltWithParams:(id)arg0 ;
-(id)readAttributeEndProductTypeWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeInstalledClosedLimitLiftWithParams:(id)arg0 ;
-(id)readAttributeInstalledClosedLimitTiltWithParams:(id)arg0 ;
-(id)readAttributeInstalledOpenLimitLiftWithParams:(id)arg0 ;
-(id)readAttributeInstalledOpenLimitTiltWithParams:(id)arg0 ;
-(id)readAttributeModeWithParams:(id)arg0 ;
-(id)readAttributeNumberOfActuationsLiftWithParams:(id)arg0 ;
-(id)readAttributeNumberOfActuationsTiltWithParams:(id)arg0 ;
-(id)readAttributeOperationalStatusWithParams:(id)arg0 ;
-(id)readAttributePhysicalClosedLimitLiftWithParams:(id)arg0 ;
-(id)readAttributePhysicalClosedLimitTiltWithParams:(id)arg0 ;
-(id)readAttributeSafetyStatusWithParams:(id)arg0 ;
-(id)readAttributeTargetPositionLiftPercent100thsWithParams:(id)arg0 ;
-(id)readAttributeTargetPositionTiltPercent100thsWithParams:(id)arg0 ;
-(id)readAttributeTypeWithParams:(id)arg0 ;
-(void)downOrCloseWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)downOrCloseWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)downOrCloseWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)downOrCloseWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)goToLiftPercentageWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)goToLiftPercentageWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)goToLiftValueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)goToLiftValueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)goToTiltPercentageWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)goToTiltPercentageWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)goToTiltValueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)goToTiltValueWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopMotionWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)stopMotionWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)stopMotionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stopMotionWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)upOrOpenWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)upOrOpenWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)upOrOpenWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)upOrOpenWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeModeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif