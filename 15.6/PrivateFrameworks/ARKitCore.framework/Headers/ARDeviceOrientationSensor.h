// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARDEVICEORIENTATIONSENSOR_H
#define ARDEVICEORIENTATIONSENSOR_H

@class CMMotionManager, NSOperationQueue, NSString;
@protocol ARSensor, ARSensorDelegate;

#import <Foundation/Foundation.h>


@interface ARDeviceOrientationSensor : NSObject <ARSensor>

 {
    CMMotionManager *_motionManager;
    NSOperationQueue *_taskDeviceMotion;
    CGFloat _previousCaptureEndingTimestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ARSensorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat interval; // ivar: _interval
@property (nonatomic) NSUInteger powerUsage;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger worldAlignment; // ivar: _worldAlignment


-(CGFloat)preferredInterval;
-(NSUInteger)providedDataTypes;
-(id)initWithMotionManager:(id)arg0 alignment:(NSInteger)arg1 ;
-(void)changeReferenceFrame:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)handleDeviceMotionUpdateWithMotion:(id)arg0 error:(id)arg1 ;
-(void)start;
-(void)stop;


@end


#endif