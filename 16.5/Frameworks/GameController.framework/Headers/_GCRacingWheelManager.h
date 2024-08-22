// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCRACINGWHEELMANAGER_H
#define _GCRACINGWHEELMANAGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _GCRacingWheelManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    *IONotificationPort _deviceNotificationPort;
    *__CFSet _deviceNotificationIterators;
    *__CFSet _connectedWheelDeviceNotifications;
    NSMutableDictionary *_connectedWheels;
}




-(id)init;


@end


#endif