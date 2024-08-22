// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VGFACECAPTUREOPTIONS_H
#define VGFACECAPTUREOPTIONS_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VGFaceCaptureOptions : NSObject <NSSecureCoding>



@property (nonatomic) float bottomMarginHeadRatio; // ivar: _bottomMarginHeadRatio
@property (retain, nonatomic) NSString *cameraImageColorSpaceName; // ivar: _cameraImageColorSpaceName
@property (retain, nonatomic) NSString *debugDataPath; // ivar: _debugDataPath
@property (nonatomic) BOOL ensureAlmostNeutralExpressionOnAllPoses; // ivar: _ensureAlmostNeutralExpressionOnAllPoses
@property (nonatomic) BOOL ensureEyesForwardOnFrontPose; // ivar: _ensureEyesForwardOnFrontPose
@property (nonatomic) BOOL ensureEyesOpenOnAllPoses; // ivar: _ensureEyesOpenOnAllPoses
@property (nonatomic) BOOL ensureEyesOpenOnFrontPose; // ivar: _ensureEyesOpenOnFrontPose
@property (nonatomic) float eyesForwardPitchSensitivity; // ivar: _eyesForwardPitchSensitivity
@property (nonatomic) float eyesForwardYawSensitivity; // ivar: _eyesForwardYawSensitivity
@property (nonatomic) float eyesOpenSensitivity; // ivar: _eyesOpenSensitivity
@property (nonatomic) float leftMarginHeadRatio; // ivar: _leftMarginHeadRatio
@property (nonatomic) float neutralExpressionLowerBound; // ivar: _neutralExpressionLowerBound
@property (nonatomic) float neutralExpressionUpperBound; // ivar: _neutralExpressionUpperBound
@property (nonatomic) float pitchLimit; // ivar: _pitchLimit
@property (nonatomic) float pitchSensitivity; // ivar: _pitchSensitivity
@property (retain, nonatomic) NSArray *requiredExpressions; // ivar: _requiredExpressions
@property (nonatomic) NSUInteger requiredPitchPoses; // ivar: _requiredPitchPoses
@property (nonatomic) NSUInteger requiredYawPoses; // ivar: _requiredYawPoses
@property (nonatomic) float rightMarginHeadRatio; // ivar: _rightMarginHeadRatio
@property (nonatomic) float topMarginHeadRatio; // ivar: _topMarginHeadRatio
@property (nonatomic) BOOL useFaceTrackingDictionary; // ivar: _useFaceTrackingDictionary
@property (nonatomic) BOOL writeDebugData; // ivar: _writeDebugData
@property (nonatomic) float yawLimit; // ivar: _yawLimit
@property (nonatomic) float yawSensitivity; // ivar: _yawSensitivity


+(BOOL)supportsSecureCoding;
+(NSUInteger)defaultRequiredPitchPoses;
+(NSUInteger)defaultRequiredYawPoses;
+(float)defaultAngleSensitivity;
+(float)defaultEyesOpenSensitivity;
+(float)defaultNeutralExpressionLowerBound;
+(float)defaultNeutralExpressionUpperBound;
+(float)defaultPitchLimit;
+(float)defaultYawLimit;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSuiteName:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setDefaultsWithSuiteName:(id)arg0 ;


@end


#endif