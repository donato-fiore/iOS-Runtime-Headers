// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JTMOTIONDATA_H
#define JTMOTIONDATA_H

@class CMMotionManager, NSOperationQueue, CMAttitude;

#import <Foundation/Foundation.h>


@interface JTMotionData : NSObject

@property (nonatomic) ? currentAttitude; // ivar: _currentAttitude
@property (retain, nonatomic) CMMotionManager *motionManager; // ivar: _motionManager
@property (retain, nonatomic) NSOperationQueue *motionQueue; // ivar: _motionQueue
@property (nonatomic) CGFloat pitchRadians; // ivar: _pitchRadians
@property (retain, nonatomic) CMAttitude *refAttitude; // ivar: _refAttitude
@property (nonatomic) CGFloat rollRadians; // ivar: _rollRadians
@property BOOL started; // ivar: _started
@property (nonatomic) CGFloat yawRadians; // ivar: _yawRadians


+(id)sharedInstance;
-(id)init;
-(struct ? )currentOrientation;
-(struct ? )getOrientation:(struct ? )arg0 ;
-(struct ? )syntheticOrientation;
-(void)startMotion;
-(void)stopMotion;


@end


#endif