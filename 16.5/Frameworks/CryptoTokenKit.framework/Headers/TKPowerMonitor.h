// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TKPOWERMONITOR_H
#define TKPOWERMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TKPowerMonitor : NSObject {
    *IONotificationPort _portRef;
    unsigned int _handle;
    NSObject<OS_dispatch_queue> *_queue;
}


@property BOOL awaken; // ivar: _awaken
@property unsigned int kernelPort; // ivar: _kernelPort


+(id)defaultMonitor;
-(id)init;


@end


#endif