// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPBRIDGEDDEVICEBASIC_H
#define CHIPBRIDGEDDEVICEBASIC_H



#import "CHIPCluster.h"

@interface CHIPBridgedDeviceBasic : CHIPCluster

@property (readonly) BridgedDeviceBasicCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeHardwareVersionStringWithResponseHandler:(id)arg0 ;
-(void)readAttributeHardwareVersionWithResponseHandler:(id)arg0 ;
-(void)readAttributeManufacturingDateWithResponseHandler:(id)arg0 ;
-(void)readAttributePartNumberWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductLabelWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductNameWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductURLWithResponseHandler:(id)arg0 ;
-(void)readAttributeReachableWithResponseHandler:(id)arg0 ;
-(void)readAttributeSerialNumberWithResponseHandler:(id)arg0 ;
-(void)readAttributeSoftwareVersionStringWithResponseHandler:(id)arg0 ;
-(void)readAttributeSoftwareVersionWithResponseHandler:(id)arg0 ;
-(void)readAttributeUserLabelWithResponseHandler:(id)arg0 ;
-(void)readAttributeVendorIDWithResponseHandler:(id)arg0 ;
-(void)readAttributeVendorNameWithResponseHandler:(id)arg0 ;
-(void)writeAttributeUserLabelWithValue:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif