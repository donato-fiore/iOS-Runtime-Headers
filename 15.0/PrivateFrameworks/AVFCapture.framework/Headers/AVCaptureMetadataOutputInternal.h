// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREMETADATAOUTPUTINTERNAL_H
#define AVCAPTUREMETADATAOUTPUTINTERNAL_H

@class AVWeakReference, NSArray;

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
    BOOL videoPreviewHistogramMetadataObjectTypesAvailable;
    BOOL appClipCodeObjectTypeAvailable;
    BOOL textRegionObjectTypeAvailable;
    BOOL headObjectTypesAvailable;
    BOOL offlineVideoStabilizationMotionMetadataObjectTypesAvailable;
}




-(id)init;
-(void)dealloc;


@end


#endif