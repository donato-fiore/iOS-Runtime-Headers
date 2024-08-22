// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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
}




-(id)init;
-(void)captureSelfieDidContinueAfterSelfie;
-(void)captureSelfieDidDetectIncorrectGesture:(NSInteger)arg0 ;
-(void)captureSelfieDidGestureTimeout:(NSInteger)arg0 ;
-(void)captureSelfieDidObtainPicture;
-(void)captureSelfieDidRetakeAfterSelfie;
-(void)captureSelfieDidRetryGesture:(NSInteger)arg0 ;
-(void)captureSelfieDidSkipGesture:(NSInteger)arg0 ;
-(void)captureSelfieDidTryDifferentGestureMovement:(NSInteger)arg0 ;
-(void)captureSelfieWillMonitorGesture:(NSInteger)arg0 ;
-(void)didCaptureLivenessVideoAtURL:(id)arg0 ;
-(void)didFinishAssessmentWithResults:(id)arg0 error:(id)arg1 ;
-(void)livenessUIFlowDidCompleteWithSelfie:(id)arg0 ;
-(void)verifyQualityForFrame:(struct __CVBuffer *)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif