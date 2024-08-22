// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDEVICEHARDWAREHANDLER_H
#define ICDEVICEHARDWAREHANDLER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ICDeviceHardwareHandler : NSObject {
    NSMutableArray *_deviceContexts;
    NSMutableArray *_disabledContexts;
    os_unfair_lock_s _deviceContextsLock;
}




-(id)init;
-(void)addDeviceContext:(id)arg0 ;
-(void)removeDeviceContext:(id)arg0 ;


@end


#endif