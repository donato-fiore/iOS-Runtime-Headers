// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARIOMOTIONSENSOR_H
#define ARIOMOTIONSENSOR_H

@class NSString;
@protocol ARSensor, OS_dispatch_queue, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARGyroscopeData.h"
#import "ARAccelerometerData.h"

@interface ARIOMotionSensor : NSObject <ARSensor>

 {
    NSString *_location;
    *__IOHIDEventSystemClient _accelerometerSystemClient;
    *__IOHIDServiceClient _accelerometerService;
    *__IOHIDEventSystemClient _gyroSystemClient;
    *__IOHIDServiceClient _gyroService;
    NSObject<OS_dispatch_queue> *_imuDataQueue;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger powerUsage;
@property (readonly) Class superclass;


-(NSInteger)preferredSampleRate;
-(NSUInteger)providedDataTypes;
-(id)init;
-(void)accelerometerDidOutputEvent:(struct __IOHIDEvent *)arg0 timestamp:(CGFloat)arg1 ;
-(void)dealloc;
-(void)gyroscopeDidOutputEvent:(struct __IOHIDEvent *)arg0 timestamp:(CGFloat)arg1 ;
-(void)start;
-(void)stop;
-(void)waitForOutstandingCallbacks;


@end


#endif