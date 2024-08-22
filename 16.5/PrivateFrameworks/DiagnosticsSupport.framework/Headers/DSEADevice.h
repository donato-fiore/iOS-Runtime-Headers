// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSEADEVICE_H
#define DSEADEVICE_H

@class EAAccessory;

#import <Foundation/Foundation.h>


@interface DSEADevice : NSObject

@property (retain, nonatomic) EAAccessory *device; // ivar: _device


+(id)deviceWithModelNumber:(id)arg0 ;
+(id)deviceWithSerialNumber:(id)arg0 ;
+(id)devicesWithModelNumbers:(id)arg0 ;
-(id)information;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithModelNumber:(id)arg0 ;
-(id)initWithSerialNumber:(id)arg0 ;


@end


#endif