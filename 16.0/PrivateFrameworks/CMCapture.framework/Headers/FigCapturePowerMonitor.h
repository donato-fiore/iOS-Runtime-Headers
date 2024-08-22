// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREPOWERMONITOR_H
#define FIGCAPTUREPOWERMONITOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FigCapturePowerMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQueue;
    int _registrationToken;
    id *_torchHandler;
    *OpaqueFigSimpleMutex _maxTorchLevelLock;
    float _maxTorchLevel;
}


@property (readonly) float maxTorchLevel;


+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)setPowerHandler:(id)arg0 ;


@end


#endif