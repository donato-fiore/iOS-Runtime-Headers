// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CMCONTINUITYCAPTURETHERMALMONITOR_H
#define CMCONTINUITYCAPTURETHERMALMONITOR_H

@protocol OS_dispatch_queue, CMContinuityCaptureThermalMonitorDelegate;

#import <Foundation/Foundation.h>


@interface CMContinuityCaptureThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    id<CMContinuityCaptureThermalMonitorDelegate> *_delegate;
    int _registrationToken;
    NSUInteger _thermalLevel;
}


@property (readonly) NSUInteger thermalLevel;


-(id)initWithQueue:(id)arg0 delegate:(id)arg1 ;
-(void)_thermalNotification:(NSUInteger)arg0 ;
-(void)dealloc;


@end


#endif