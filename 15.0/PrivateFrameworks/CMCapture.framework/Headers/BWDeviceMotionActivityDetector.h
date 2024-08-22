// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}


@property (readonly, nonatomic, getter=isStationary) BOOL stationary;


+(void)initialize;
-(id)init;
-(void)_detectIfStationary;
-(void)dealloc;
-(void)processSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif