// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CUTPOWERMONITOR_H
#define _CUTPOWERMONITOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface _CUTPowerMonitor : NSObject {
    *__CFRunLoopSource _batteryRunLoopSource;
    *IONotificationPort _batteryIONotifyPort;
    unsigned int _batteryNotificationRef;
    unsigned int _pmConnection;
    *IONotificationPort _pmPort;
    unsigned int _pmNotifier;
    unsigned int _batteryEntry;
    NSHashTable *_delegates;
    CGFloat _currentLevel;
    BOOL _isExternalPowerConnected;
}






@end


#endif