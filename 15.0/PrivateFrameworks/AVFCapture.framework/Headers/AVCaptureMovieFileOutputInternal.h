// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCAPTUREMOVIEFILEOUTPUTINTERNAL_H
#define AVCAPTUREMOVIEFILEOUTPUTINTERNAL_H

@class AVWeakReference, NSMutableArray, NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface AVCaptureMovieFileOutputInternal : NSObject {
    AVWeakReference *weakReference;
    NSMutableArray *recordingDelegatesArray;
    NSMutableArray *connectionsThatRecordVideoOrientationAndMirroringChangesAsMetadataTrack;
    ? movieFragmentInterval;
    NSArray *metadata;
    NSArray *availableVideoCodecs;
    NSString *videoCodec;
    NSDictionary *videoCompressionProperties;
    BOOL sendLastVideoPreviewFrame;
    BOOL recording;
    BOOL paused;
    BOOL primaryConstituentDeviceSwitchingBehaviorForRecordingEnabled;
    NSInteger primaryConstituentDeviceSwitchingBehavior;
    NSUInteger primaryConstituentDeviceRestrictedSwitchingBehaviorConditions;
    BOOL deviceSupportsConstituentDeviceSwitching;
    *ct_green_tea_logger_s greenTeaLogger;
    BOOL streamingDepthSupported;
    BOOL depthCaptureEnabled;
}




-(id)init;
-(void)dealloc;


@end


#endif