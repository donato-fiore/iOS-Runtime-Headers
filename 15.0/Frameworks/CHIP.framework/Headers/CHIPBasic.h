// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPBASIC_H
#define CHIPBASIC_H



#import "CHIPCluster.h"

@interface CHIPBasic : CHIPCluster

@property (readonly) BasicCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)mfgSpecificPing:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeHardwareVersionStringWithResponseHandler:(id)arg0 ;
-(void)readAttributeHardwareVersionWithResponseHandler:(id)arg0 ;
-(void)readAttributeInteractionModelVersionWithResponseHandler:(id)arg0 ;
-(void)readAttributeLocalConfigDisabledWithResponseHandler:(id)arg0 ;
-(void)readAttributeLocationWithResponseHandler:(id)arg0 ;
-(void)readAttributeManufacturingDateWithResponseHandler:(id)arg0 ;
-(void)readAttributePartNumberWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductIDWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductLabelWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductNameWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductURLWithResponseHandler:(id)arg0 ;
-(void)readAttributeSerialNumberWithResponseHandler:(id)arg0 ;
-(void)readAttributeSoftwareVersionStringWithResponseHandler:(id)arg0 ;
-(void)readAttributeSoftwareVersionWithResponseHandler:(id)arg0 ;
-(void)readAttributeUserLabelWithResponseHandler:(id)arg0 ;
-(void)readAttributeVendorIDWithResponseHandler:(id)arg0 ;
-(void)readAttributeVendorNameWithResponseHandler:(id)arg0 ;
-(void)writeAttributeLocalConfigDisabledWithValue:(unsigned char)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeLocationWithValue:(id)arg0 responseHandler:(id)arg1 ;
-(void)writeAttributeUserLabelWithValue:(id)arg0 responseHandler:(id)arg1 ;


@end


#endif