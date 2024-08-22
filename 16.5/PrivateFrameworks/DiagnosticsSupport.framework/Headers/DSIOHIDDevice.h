// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DSIOHIDDEVICE_H
#define DSIOHIDDEVICE_H


#import <Foundation/Foundation.h>


@interface DSIOHIDDevice : NSObject {
    *__IOHIDManager _manager;
    *__IOHIDDevice _device;
}




+(id)deviceWithDeviceIdentifier:(struct ? )arg0 ;
-(BOOL)reportWithID:(NSInteger)arg0 reportType:(int)arg1 object:(char *)arg2 length:(*NSInteger)arg3 ;
-(id)_sharedSerialQueue;
-(id)initWithDeviceIdentifier:(struct ? )arg0 ;
-(id)serialNumber;
-(id)stringFromHIDReport:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif