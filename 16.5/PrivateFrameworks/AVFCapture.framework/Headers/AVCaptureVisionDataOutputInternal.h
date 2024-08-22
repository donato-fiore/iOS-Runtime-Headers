// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREVISIONDATAOUTPUTINTERNAL_H
#define AVCAPTUREVISIONDATAOUTPUTINTERNAL_H

@class AVWeakReference, NSData;

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
    BOOL dynamicThresholdingEnabled;
    NSUInteger keypointDetectionFlowType;
    NSUInteger subPixelThreshold;
    BOOL featureMatchingEnabled;
    NSUInteger featureMatchingDescriptorSize;
    float orientationDistanceThreshold;
    float sigmaDistanceThreshold;
    float squareDistanceDisparityFraction;
    NSUInteger hammingDistanceThreshold;
    NSData *laccConfigAndMetadata;
    float keypointDetectionThreshold;
}




-(id)init;
-(void)dealloc;


@end


#endif