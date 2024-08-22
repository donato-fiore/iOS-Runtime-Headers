// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HPSSPATIALPROFILEANALYTICS_H
#define HPSSPATIALPROFILEANALYTICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HPSSpatialProfileAnalytics : NSObject {
    CGFloat _enrollmentStartTime;
    CGFloat _faceEnrollmentTime;
    CGFloat _faceEnrollmentStartTime;
    CGFloat _rightEarEnrollmentStartTime;
    CGFloat _rightEarEnrollmentTime;
    CGFloat _rightEarFrontAngleTime;
    CGFloat _rightEarMidAngleTime;
    CGFloat _rightEarBackAngleTime;
    CGFloat _leftEarEnrollmentStartTime;
    CGFloat _leftEarEnrollmentTime;
    CGFloat _leftEarFrontAngleTime;
    CGFloat _leftEarMidAngleTime;
    CGFloat _leftEarBackAngleTime;
    CGFloat _soundProfileCreationStartTime;
    CGFloat _soundProfileCreationTime;
    unsigned char _leftEarOcclusionDetectCount;
    unsigned char _rightEarOcclusionDetectCount;
    CGFloat _frameDetectionStartTime;
    NSUInteger _frameCount;
    NSString *_result;
    BOOL _status;
    BOOL _submitted;
    NSString *_parentBundleID;
}




+(BOOL)isRBSProcessHandleAvailable;
-(id)init;
-(void)incrementFrameCount;
-(void)incrementLeftEarOcclusionCount;
-(void)incrementRightEarOcclusionCount;
-(void)initFrameRateDetection;
-(void)submitHPSSpatialProfileEnrollAnalytics;
-(void)submitHPSSpatialProfileResetAnalytics;
-(void)updateFaceEnrollDuration;
-(void)updateFaceEnrollStart;
-(void)updateLeftEarBackAnglelDuration;
-(void)updateLeftEarEnrollDuration;
-(void)updateLeftEarEnrollStart;
-(void)updateLeftEarFrontAnglelDuration;
-(void)updateLeftEarMidAnglelDuration;
-(void)updateRightEarBackAnglelDuration;
-(void)updateRightEarEnrollDuration;
-(void)updateRightEarEnrollStart;
-(void)updateRightEarFrontAnglelDuration;
-(void)updateRightEarMidAnglelDuration;
-(void)updateSoundProfileCreationDuration;
-(void)updateSoundProfileCreationDurationStart;
-(void)updateStatus:(BOOL)arg0 EnrollmentResult:(id)arg1 ;


@end


#endif