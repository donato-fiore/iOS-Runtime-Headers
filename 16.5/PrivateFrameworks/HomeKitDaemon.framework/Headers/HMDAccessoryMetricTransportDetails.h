// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYMETRICTRANSPORTDETAILS_H
#define HMDACCESSORYMETRICTRANSPORTDETAILS_H

@class HMFObject, NSString;



@interface HMDAccessoryMetricTransportDetails : HMFObject

@property (copy, nonatomic) NSString *accessoryProtocol; // ivar: _accessoryProtocol
@property (nonatomic) BOOL isAccessoryBatteryPowered; // ivar: _isAccessoryBatteryPowered
@property (nonatomic) BOOL isAccessoryBridged; // ivar: _isAccessoryBridged
@property (nonatomic) BOOL isHH2Enabled; // ivar: _isHH2Enabled


-(id)attributeDescriptions;
-(id)initWithAccessory:(id)arg0 ;


@end


#endif