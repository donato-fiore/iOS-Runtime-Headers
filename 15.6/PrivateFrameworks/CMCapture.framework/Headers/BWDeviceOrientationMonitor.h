// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWDEVICEORIENTATIONMONITOR_H
#define BWDEVICEORIENTATIONMONITOR_H

@protocol OS_dispatch_queue, BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate;

#import <Foundation/Foundation.h>


@interface BWDeviceOrientationMonitor : NSObject {
    int _orientationDispatchToken;
    NSObject<OS_dispatch_queue> *_orientationNotificationDispatchQueue;
    unsigned int _currentOrientation;
    *OpaqueFigSimpleMutex _stateMutex;
}


@property (readonly, nonatomic) unsigned int mostRecentPortraitLandscapeOrientation; // ivar: _mostRecentPortraitLandscapeOrientation
@property (nonatomic) NSObject<BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> *portraitLandscapeUpdateDelegate; // ivar: _portraitLandscapeUpdateDelegate


+(void)initialize;
-(BOOL)start;
-(BOOL)stop;
-(id)init;
-(void)_doStart;
-(void)_doStop;
-(void)_orientationChanged;
-(void)dealloc;


@end


#endif