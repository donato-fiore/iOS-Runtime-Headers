// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAP2ACCESSORYDEVICEIPADDRESS_H
#define HAP2ACCESSORYDEVICEIPADDRESS_H


#import <Foundation/Foundation.h>


@interface HAP2AccessoryDeviceIPAddress : NSObject

@property (readonly, nonatomic) coap_address_t address; // ivar: _address


-(id)initWithAddress:(struct coap_address_t *)arg0 ;
-(struct coap_address_t *)getAddressPtr;


@end


#endif