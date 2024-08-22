// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDEVICEMOTIONACTIVITYDETECTOR_H
#define BWDEVICEMOTIONACTIVITYDETECTOR_H


#import <Foundation/Foundation.h>

#import "BWMotionSampleRingBuffer.h"

@interface BWDeviceMotionActivityDetector : NSObject {
    BWMotionSampleRingBuffer *_motionDataRingBuffer;
    *OpaqueFigSimpleMutex _ringMutex;
    BOOL _stationary;
    BOOL _newMotionDataAvailable;
    BOOL _robustMethodEnabled;
    BOOL _motionMetadataStatusChecked;
    BOOL _directionalMotionDetectionEnabled;
    CGFloat _directionalMotionDetectionAngularRotationThreshold;
    ? _directionalMotionDetectionReferenceDirection;
}


@property (getter=isDirectionalMotionDetectionEnabled) BOOL directionalMotionDetectionEnabled;
@property (readonly, nonatomic, getter=isStationary) BOOL stationary;


+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif