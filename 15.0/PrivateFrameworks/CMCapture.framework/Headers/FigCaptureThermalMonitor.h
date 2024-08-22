// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIGCAPTURETHERMALMONITOR_H
#define FIGCAPTURETHERMALMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigCaptureThermalMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    id *_thermalHandler;
    *OpaqueFigSimpleMutex _thermalNotificationLock;
    float _maxTorchLevel;
    int _thermalLevel;
}


@property (readonly) float maxTorchLevel;
@property (readonly) int thermalLevel;


+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setThermalHandler:(id)arg0 ;


@end


#endif