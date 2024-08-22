// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREVISIONDATAOUTPUTINTERNAL_H
#define AVCAPTUREVISIONDATAOUTPUTINTERNAL_H

@class AVWeakReference;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureVisionDataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    ? minFrameDuration;
    ? minBurstFrameDuration;
    ? maxBurstDuration;
    NSUInteger gaussianPyramidOctavesCount;
    float gaussianPyramidBaseOctaveDownscalingFactor;
    NSUInteger maxKeypointsCount;
    BOOL featureBinningEnabled;
    BOOL featureOrientationAssignmentEnabled;
    float keypointDetectionThreshold;
}




-(id)init;
-(void)dealloc;


@end


#endif