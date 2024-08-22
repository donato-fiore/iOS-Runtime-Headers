// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWAMBIENTLIGHTSENSOR_H
#define BWAMBIENTLIGHTSENSOR_H

@class BrightnessSystemClient;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface BWAmbientLightSensor : NSObject {
    *__IOHIDEventSystemClient _hidSystemClient;
    NSObject<OS_dispatch_queue> *_alsQueue;
    NSObject<OS_dispatch_semaphore> *_exitSemaphore;
    int _luxLevel;
    float _rearLuxLevel;
    BrightnessSystemClient *_brightnessSystemClient;
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) int luxLevel;
@property (readonly, nonatomic) float rearLuxLevel;


+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)forceUpdateRearLuxLevel;


@end


#endif