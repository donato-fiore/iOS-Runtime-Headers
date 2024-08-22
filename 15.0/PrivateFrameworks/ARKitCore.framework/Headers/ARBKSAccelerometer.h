// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ARBKSACCELEROMETER_H
#define ARBKSACCELEROMETER_H

@class BKSAccelerometer;

#import <Foundation/Foundation.h>


@interface ARBKSAccelerometer : NSObject {
    BKSAccelerometer *_accelerometer;
}




+(id)sharedAccelerometerHandle;
+(id)sharedWeakAccelerometerHandle;
-(NSInteger)currentOrientation;
-(NSInteger)rawOrientation;
-(id)initPrivate;
-(void)dealloc;


@end


#endif