// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HRTFENROLLMENTEARPOSESTATUS_H
#define HRTFENROLLMENTEARPOSESTATUS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HRTFEnrollmentPoseStatus.h"

@interface HRTFEnrollmentEarPoseStatus : NSObject <NSSecureCoding>



@property (readonly) CGRect earBoundingBox; // ivar: _earBoundingBox
@property (readonly) int earCaptureStatus; // ivar: _earCaptureStatus
@property (readonly) HRTFEnrollmentPoseStatus *leftStatus; // ivar: _leftStatus
@property (readonly) HRTFEnrollmentPoseStatus *rightStatus; // ivar: _rightStatus


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLeftYawAngleArray:(*CGFloat)arg0 leftTracking:(unsigned char)arg1 leftYawCapturedArray:(char *)arg2 rightYawAngleArray:(*CGFloat)arg3 rightTracking:(unsigned char)arg4 rightYawCapturedArray:(char *)arg5 yawCount:(NSUInteger)arg6 yawAngle:(CGFloat)arg7 pitchAngle:(CGFloat)arg8 leftPitchAngleArray:(*CGFloat)arg9 leftPitchCapturedArray:(char *)arg10 rightPitchAngleArray:(*CGFloat)arg11 rightPitchCapturedArray:(char *)arg12 pitchCount:(NSUInteger)arg13 earBoundingBox:(struct CGRect )arg14 earCaptureStatus:(int)arg15 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif