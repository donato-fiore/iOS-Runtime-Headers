// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC9COREIDVUI24RGBCAPTURESESSIONMANAGER_H
#define _TTC9COREIDVUI24RGBCAPTURESESSIONMANAGER_H

@protocol CIDVRGBCaptureDelegate, CIDVRGBCaptureImageQualityDelegate;

#import <Foundation/Foundation.h>


@interface _TtC9CoreIDVUI24RGBCaptureSessionManager : NSObject <CIDVRGBCaptureDelegate, CIDVRGBCaptureImageQualityDelegate>

 {
    ? captureController;
    ? documentsRepository;
    ? encryptionQueue;
    ? lastResult;
    ? resultCount;
    ? frameCount;
    ? selfieCount;
    ? repeatCount;
    ? frameRate;
    ? delegate;
    ? proofingFlowManager;
}




-(id)init;
-(int)captureSelfieGetNewLuxValue;
-(void)captureSelfieDidContinueAfterGesture;
-(void)captureSelfieDidContinueAfterSelfie;
-(void)captureSelfieDidDetectIncorrectGesture:(id)arg0 ;
-(void)captureSelfieDidFinishGestureMonitoring:(id)arg0 ;
-(void)captureSelfieDidFinishWithSuccess;
-(void)captureSelfieDidGestureTimeout:(id)arg0 ;
-(void)captureSelfieDidObtainPicture;
-(void)captureSelfieDidRestart:(NSInteger)arg0 ;
-(void)captureSelfieDidRetakeAfterSelfie;
-(void)captureSelfieDidRetryGesture:(id)arg0 ;
-(void)captureSelfieDidSkipGesture:(id)arg0 ;
-(void)captureSelfieDidTryDifferentGestureMovement:(id)arg0 ;
-(void)captureSelfieObtainNewConfiguration:(id)arg0 ;
-(void)captureSelfieWillMonitorGesture:(id)arg0 ;
-(void)confirmSelfieViewDidAppear;
-(void)didCaptureLivenessVideoAtURL:(id)arg0 ;
-(void)didFinishAssessmentWithResults:(id)arg0 error:(id)arg1 ;
-(void)livenessUIFlowDidCompleteWithSelfie:(id)arg0 ;
-(void)takeSelfieViewDidAppear;
-(void)verifyQualityForFrame:(struct __CVBuffer *)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif