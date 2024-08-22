// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPTESTBRIDGEDDEVICEBASIC_H
#define CHIPTESTBRIDGEDDEVICEBASIC_H



#import "CHIPBridgedDeviceBasic.h"

@interface CHIPTestBridgedDeviceBasic : CHIPBridgedDeviceBasic {
    BridgedDeviceBasicClusterTest _cppCluster;
}


@property ? cppCluster;


-(void)writeAttributeAcceptedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeAttributeListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeClusterRevisionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeGeneratedCommandListWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeHardwareVersionStringWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeHardwareVersionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeManufacturingDateWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributePartNumberWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeProductLabelWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeProductNameWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeProductURLWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeReachableWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSerialNumberWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSoftwareVersionStringWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeSoftwareVersionWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeUniqueIDWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeVendorIDWithValue:(id)arg0 completionHandler:(id)arg1 ;
-(void)writeAttributeVendorNameWithValue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif