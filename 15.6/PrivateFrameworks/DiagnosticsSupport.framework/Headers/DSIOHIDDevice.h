// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DSIOHIDDEVICE_H
#define DSIOHIDDEVICE_H


#import <Foundation/Foundation.h>


@interface DSIOHIDDevice : NSObject {
    *__IOHIDManager _manager;
    *__IOHIDDevice _device;
}




+(id)deviceWithDeviceIdentifier:(struct ? )arg0 ;
-(id)_sharedSerialQueue;
-(id)initWithDeviceIdentifier:(struct ? )arg0 ;
-(id)serialNumber;
-(id)stringFromHIDReport:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif