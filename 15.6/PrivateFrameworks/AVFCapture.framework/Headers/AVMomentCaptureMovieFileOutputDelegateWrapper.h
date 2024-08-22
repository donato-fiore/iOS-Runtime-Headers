// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVMOMENTCAPTUREMOVIEFILEOUTPUTDELEGATEWRAPPER_H
#define AVMOMENTCAPTUREMOVIEFILEOUTPUTDELEGATEWRAPPER_H

@class NSURL, NSArray, NSString;


#import "AVCaptureFileOutputDelegateWrapper.h"
#import "AVMomentCaptureMovieRecordingResolvedSettings.h"

@interface AVMomentCaptureMovieFileOutputDelegateWrapper : AVCaptureFileOutputDelegateWrapper

@property (nonatomic) BOOL didFinishWritingMovieCallbackFired; // ivar: _didFinishWritingMovieCallbackFired
@property (nonatomic) BOOL didFinishWritingSpatialOverCaptureMovieCallbackFired; // ivar: _didFinishWritingSpatialOverCaptureMovieCallbackFired
@property (retain, nonatomic) AVMomentCaptureMovieRecordingResolvedSettings *resolvedSettings; // ivar: _resolvedSettings
@property (readonly) NSURL *spatialOverCaptureMovieFileURL; // ivar: _spatialOverCaptureMovieFileURL
@property (readonly) NSArray *spatialOverCaptureMovieMetadata; // ivar: _spatialOverCaptureMovieMetadata
@property (readonly) NSString *videoCodecType; // ivar: _videoCodecType


+(id)wrapperWithSettings:(id)arg0 delegate:(id)arg1 connections:(id)arg2 ;
-(id)initWithSettings:(id)arg0 delegate:(id)arg1 connections:(id)arg2 ;
-(void)dealloc;


@end


#endif