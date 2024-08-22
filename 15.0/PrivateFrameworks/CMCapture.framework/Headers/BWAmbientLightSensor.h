// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWAMBIENTLIGHTSENSOR_H
#define BWAMBIENTLIGHTSENSOR_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BWAmbientLightSensor : NSObject {
    *__IOHIDEventSystemClient _hidSystemClient;
    NSObject<OS_dispatch_queue> *_alsQueue;
    int _luxLevel;
}


@property (readonly, nonatomic) int luxLevel;


-(id)init;
-(void)dealloc;


@end


#endif