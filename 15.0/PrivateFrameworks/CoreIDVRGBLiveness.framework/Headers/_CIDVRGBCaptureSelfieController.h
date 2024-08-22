// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CIDVRGBCAPTURESELFIECONTROLLER_H
#define _CIDVRGBCAPTURESELFIECONTROLLER_H

@class PADFrame, NSURL;
@protocol CIDVRGBCaptureSelfieController, CIDVRGBAVSessionManagerDelegate, OS_dispatch_queue, CIDVRGBAVSessionManager, PADFrameQualityMonitor, PADClassifier, CIDVRGBCaptureSelfieControllerDelegate;

#import <Foundation/Foundation.h>

#import "CIDVRGBCaptureUIConfig.h"
#import "CIDVRGBCameraPreview.h"

@interface _CIDVRGBCaptureSelfieController : NSObject <CIDVRGBCaptureSelfieController, CIDVRGBAVSessionManagerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_encryptionQueue;
    CIDVRGBCaptureUIConfig *_config;
    id<CIDVRGBAVSessionManager> *_avSession;
    id<PADFrameQualityMonitor> *_quality;
    id<PADClassifier> *_classifier;
    CGRect _regionOfInterest;
    PADFrame *_selfie;
    NSURL *_videoURL;
    CGFloat _selfieStart;
}


@property (copy, nonatomic) id *completionHandler; // ivar: completionHandler
@property (weak, nonatomic) NSObject<CIDVRGBCaptureSelfieControllerDelegate> *delegate; // ivar: delegate
@property (retain, nonatomic) CIDVRGBCameraPreview *preview; // ivar: _preview
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)_shouldPresentErrorAlertForError:(id)arg0 ;
-(BOOL)isLowDiskSpaceError:(id)arg0 ;
-(id)_compressSelfie:(id)arg0 skipCompression:(BOOL)arg1 ;
-(id)_selfieBufferToImage:(id)arg0 ;
-(id)initWithConfig:(id)arg0 ;
-(void)_assertCurrentState:(NSInteger)arg0 ;
-(void)_finishLiveness;
-(void)_performDebugAnalysisForFrame:(id)arg0 ;
-(void)_performImageQualityAnalysisForFrame:(id)arg0 ;
-(void)_performLivenessAnalysisForFrame:(id)arg0 ;
-(void)_startLiveness;
-(void)_stopRecordingLivenessVideo;
-(void)_updateRegionOfInterestForFrame:(id)arg0 ;
-(void)bootstrap;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)captureSelfieUsingFlash:(BOOL)arg0 ;
-(void)didCaptureFrame:(id)arg0 ;
-(void)didCapturePhoto:(id)arg0 error:(id)arg1 ;
-(void)didCaptureVideoAtURL:(id)arg0 error:(id)arg1 ;
-(void)pauseLivenessGesture;
-(void)restartSelfieCapture;
-(void)resumeLivenessGesture;
-(void)skipLivenessGesture:(BOOL)arg0 ;
-(void)startLiveness;
-(void)submitSelfie;


@end


#endif