// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDOCCAMPHOTOCAPTUREDELEGATE_H
#define ICDOCCAMPHOTOCAPTUREDELEGATE_H

@class NSString, NSDictionary, AVCapturePhotoSettings;
@protocol AVCapturePhotoCaptureDelegate;

#import <Foundation/Foundation.h>


@interface ICDocCamPhotoCaptureDelegate : NSObject <AVCapturePhotoCaptureDelegate>



@property (copy, nonatomic) id *completed; // ivar: _completed
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) float highestSharpness; // ivar: _highestSharpness
@property (retain, nonatomic) NSDictionary *metaData; // ivar: _metaData
@property (nonatomic) *__CVBuffer pbRef; // ivar: _pbRef
@property (retain, nonatomic) AVCapturePhotoSettings *requestedPhotoSettings; // ivar: _requestedPhotoSettings
@property (readonly) Class superclass;
@property (copy, nonatomic) id *willCapturePhotoAnimation; // ivar: _willCapturePhotoAnimation


-(float)sharpnessForImageBuffer:(struct __CVBuffer *)arg0 ;
// -(id)initWithRequestedPhotoSettings:(id)arg0 willCapturePhotoAnimation:(id)arg1 completed:(unk)arg2  ;
-(void)captureOutput:(id)arg0 didFinishCaptureForResolvedSettings:(id)arg1 error:(id)arg2 ;
-(void)captureOutput:(id)arg0 didFinishProcessingLivePhotoToMovieFileAtURL:(id)arg1 duration:(struct ? )arg2 photoDisplayTime:(struct ? )arg3 resolvedSettings:(id)arg4 error:(id)arg5 ;
-(void)captureOutput:(id)arg0 didFinishProcessingPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 previewPhotoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 resolvedSettings:(id)arg3 bracketSettings:(id)arg4 error:(id)arg5 ;
-(void)captureOutput:(id)arg0 didFinishRecordingLivePhotoMovieForEventualFileAtURL:(id)arg1 resolvedSettings:(id)arg2 ;
-(void)captureOutput:(id)arg0 willBeginCaptureForResolvedSettings:(id)arg1 ;
-(void)captureOutput:(id)arg0 willCapturePhotoForResolvedSettings:(id)arg1 ;
-(void)dealloc;
-(void)didFinish;


@end


#endif