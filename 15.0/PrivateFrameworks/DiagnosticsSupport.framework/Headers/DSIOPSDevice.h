// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DSIOPSDEVICE_H
#define DSIOPSDEVICE_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface DSIOPSDevice : NSObject

@property (retain, nonatomic) NSDictionary *info; // ivar: _info


+(id)deviceWithDeviceIdentifier:(struct ? )arg0 ;
-(id)initWithDeviceIdentifier:(struct ? )arg0 ;
-(id)serialNumber;


@end


#endif