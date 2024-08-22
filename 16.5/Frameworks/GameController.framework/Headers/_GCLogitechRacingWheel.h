// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _GCLOGITECHRACINGWHEEL_H
#define _GCLOGITECHRACINGWHEEL_H

@class NSArray, NSString;
@protocol _GCGamepadEventSource, OS_dispatch_queue;


#import "GCRacingWheel.h"

@interface _GCLogitechRacingWheel : GCRacingWheel <_GCGamepadEventSource>

 {
    *__IOHIDDevice _device;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isOpen;
    int _mode;
    ? _report;
    NSArray *_eventObservers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)acquireDeviceWithError:(*id)arg0 ;
-(BOOL)isAcquired;
-(id)initWithService:(unsigned int)arg0 ;
-(id)observeGamepadEvents:(id)arg0 ;
-(void)dealloc;
-(void)relinquishDevice;


@end


#endif