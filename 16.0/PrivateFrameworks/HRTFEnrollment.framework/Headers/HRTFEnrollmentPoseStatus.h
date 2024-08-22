// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRTFENROLLMENTPOSESTATUS_H
#define HRTFENROLLMENTPOSESTATUS_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HRTFEnrollmentPoseStatus : NSObject <NSSecureCoding>



@property (readonly) CGFloat currentPitchAngle; // ivar: _currentPitchAngle
@property (readonly) CGFloat currentYawAngle; // ivar: _currentYawAngle
@property (readonly) CGRect faceBoundingBox; // ivar: _faceBoundingBox
@property (readonly) unsigned char hasPitchAngle; // ivar: _hasPitchAngle
@property (readonly) unsigned char hasYawAngle; // ivar: _hasYawAngle
@property (readonly) NSArray *pitchAngles; // ivar: _pitchAngles
@property (readonly) NSArray *remainingPitchAngles;
@property (readonly) NSArray *remainingYawAngles;
@property (readonly) NSArray *yawAngles; // ivar: _yawAngles


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCurrentYawAngleArray:(*CGFloat)arg0 yawCapturedArray:(char *)arg1 yawCount:(NSUInteger)arg2 pitchAngleArray:(*CGFloat)arg3 pitchCapturedArray:(char *)arg4 pitchCount:(NSUInteger)arg5 yawAngle:(CGFloat)arg6 pitchAngle:(CGFloat)arg7 faceBoundingBox:(struct CGRect )arg8 ;
-(id)initWithYawAngleArray:(*CGFloat)arg0 yawCapturedArray:(char *)arg1 yawCount:(NSUInteger)arg2 pitchAngleArray:(*CGFloat)arg3 pitchCapturedArray:(char *)arg4 pitchCount:(NSUInteger)arg5 isEarTracking:(unsigned char)arg6 yawAngle:(CGFloat)arg7 pitchAngle:(CGFloat)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif