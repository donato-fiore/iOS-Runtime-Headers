// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKBOKEHMOTIONMANAGER_H
#define WKBOKEHMOTIONMANAGER_H

@class CMMotionManager;

#import <Foundation/Foundation.h>

#import "WKBokehInfiniteImpulseResponseFilter.h"

@interface WKBokehMotionManager : NSObject {
    CGFloat _x;
    CGFloat _y;
    CGFloat _z;
    ? _attitude;
    CGFloat _roll;
    CGFloat _pitch;
    CGFloat _yaw;
    CGFloat _coefficient;
    CGFloat _threshold;
    NSUInteger _referenceFrame;
    CMMotionManager *_motionManager;
    BOOL _motionManagerPaused;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterX;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterY;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterZ;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAX;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAY;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAZ;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterAW;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterRoll;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterPitch;
    WKBokehInfiniteImpulseResponseFilter *_motionFilterYaw;
}




-(id)init;


@end


#endif