// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKSACCELEROMETER_H
#define BKSACCELEROMETER_H

@class NSLock, NSThread;
@protocol BKSAccelerometerDelegate;

#import <Foundation/Foundation.h>


@interface BKSAccelerometer : NSObject {
    *__CFRunLoopSource _accelerometerEventsSource;
    *__CFRunLoop _accelerometerEventsRunLoop;
    NSLock *_lock;
    int _orientationCheckToken;
    int _orientationNotificationsToken;
    NSThread *_orientationEventsThread;
    unsigned int _orientationPort;
}


@property (nonatomic) BOOL accelerometerEventsEnabled;
@property (weak, nonatomic) NSObject<BKSAccelerometerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL orientationEventsEnabled; // ivar: _orientationEventsEnabled
@property (nonatomic) BOOL passiveOrientationEvents; // ivar: _passiveOrientationEvents
@property (nonatomic) CGFloat updateInterval; // ivar: _updateInterval
@property (nonatomic) float xThreshold; // ivar: _xThreshold
@property (nonatomic) float yThreshold; // ivar: _yThreshold
@property (nonatomic) float zThreshold; // ivar: _zThreshold


-(NSInteger)currentDeviceOrientation;
-(id)_orientationEventsThread;
-(id)init;
-(void)_checkIn;
-(void)_checkOut;
-(void)_orientationDidChange;
-(void)_serverWasRestarted;
-(void)_updateOrientationServer;
-(void)dealloc;


@end


#endif