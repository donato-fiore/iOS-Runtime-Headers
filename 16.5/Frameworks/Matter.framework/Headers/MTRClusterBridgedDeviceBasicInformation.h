// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERBRIDGEDDEVICEBASICINFORMATION_H
#define MTRCLUSTERBRIDGEDDEVICEBASICINFORMATION_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterBridgedDeviceBasicInformation : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeHardwareVersionStringWithParams:(id)arg0 ;
-(id)readAttributeHardwareVersionWithParams:(id)arg0 ;
-(id)readAttributeManufacturingDateWithParams:(id)arg0 ;
-(id)readAttributeNodeLabelWithParams:(id)arg0 ;
-(id)readAttributePartNumberWithParams:(id)arg0 ;
-(id)readAttributeProductLabelWithParams:(id)arg0 ;
-(id)readAttributeProductNameWithParams:(id)arg0 ;
-(id)readAttributeProductURLWithParams:(id)arg0 ;
-(id)readAttributeReachableWithParams:(id)arg0 ;
-(id)readAttributeSerialNumberWithParams:(id)arg0 ;
-(id)readAttributeSoftwareVersionStringWithParams:(id)arg0 ;
-(id)readAttributeSoftwareVersionWithParams:(id)arg0 ;
-(id)readAttributeUniqueIDWithParams:(id)arg0 ;
-(id)readAttributeVendorIDWithParams:(id)arg0 ;
-(id)readAttributeVendorNameWithParams:(id)arg0 ;
-(void)writeAttributeNodeLabelWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeNodeLabelWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif