// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARMOTIONSENSOR_H
#define ARMOTIONSENSOR_H

@class CMMotionManager, NSString;
@protocol ARSensor, ARSensorDelegate;

#import <Foundation/Foundation.h>

#import "ARGyroscopeData.h"
#import "ARAccelerometerData.h"
#import "ARMagnetometerData.h"

@interface ARMotionSensor : NSObject <ARSensor>

 {
    CMMotionManager *_motionManager;
    ARGyroscopeData *_currentGyroData;
    ARAccelerometerData *_currentAccelerometerData;
    ARMagnetometerData *_currentMagnetometerData;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) NSUInteger powerUsage;
@property (readonly) Class superclass;


-(CGFloat)preferredInterval;
-(NSUInteger)providedDataTypes;
-(id)initWithMotionManager:(id)arg0 ;
-(void)accelerometerOutput:(struct ? *)arg0 ;
-(void)dealloc;
-(void)gyroscopeOutput:(struct ? *)arg0 ;
-(void)magnetometerOutput:(struct ? *)arg0 ;
-(void)start;
-(void)stop;


@end


#endif