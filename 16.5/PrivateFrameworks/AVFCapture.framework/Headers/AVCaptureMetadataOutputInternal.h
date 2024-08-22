// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCAPTUREMETADATAOUTPUTINTERNAL_H
#define AVCAPTUREMETADATAOUTPUTINTERNAL_H

@class AVWeakReference, NSArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
    AVWeakReference *weakReference;
    NSArray *metadataObjectTypes;
    CGRect rectOfInterest;
    BOOL faceTrackingMetadataObjectTypesAvailable;
    NSInteger faceTrackingMaxFaces;
    BOOL faceTrackingUsesFaceRecognition;
    BOOL faceTrackingPlusEnabled;
    float faceTrackingNetworkFailureThresholdMultiplier;
    BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
    BOOL appClipCodeObjectTypeAvailable;
    BOOL textRegionObjectTypeAvailable;
    BOOL headObjectTypesAvailable;
    BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
    NSMutableDictionary *previousTwoCMTimesByDetectorType;
}




-(id)init;
-(void)dealloc;


@end


#endif