// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPEASYCONFIGDEVICE_H
#define HAPEASYCONFIGDEVICE_H

@class EasyConfigDevice;


#import "HAPAccessoryServerIP.h"

@interface HAPEasyConfigDevice : EasyConfigDevice

@property (weak, nonatomic) HAPAccessoryServerIP *server; // ivar: _server


-(id)initWithDeviceInfo:(id)arg0 server:(id)arg1 ;


@end


#endif