// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAPTUREVIDEODATAOUTPUTINTERNAL_H
#define AVCAPTUREVIDEODATAOUTPUTINTERNAL_H

@class AVWeakReference, NSDictionary, NSArray;

#import <Foundation/Foundation.h>

#import "AVCaptureDataOutputDelegateCallbackHelper.h"

@interface AVCaptureVideoDataOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSDictionary *videoSettings;
    NSDictionary *clientVideoSettings;
    ? deprecatedMinFrameDuration;
    BOOL alwaysDiscardsLateVideoFrames;
    BOOL automaticallyConfiguresOutputBufferDimensions;
    BOOL deliversPreviewSizedOutputBuffers;
    BOOL sceneStabilityMetadataEnabled;
    BOOL videoSettingsDimensionsOverrideEnabled;
    NSArray *availableVideoCVPixelFormatTypes;
    AVCaptureDataOutputDelegateCallbackHelper *delegateCallbackHelper;
}




-(id)init;
-(void)dealloc;


@end


#endif