// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIBURSTFACESTAT_H
#define CIBURSTFACESTAT_H

@class NSMutableArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CIBurstFaceStat : NSObject <NSCopying>



@property int FCRBlinkFeaturesSize; // ivar: FCRBlinkFeaturesSize
@property int FCRLeftEyeFeaturesOffset; // ivar: FCRLeftEyeFeaturesOffset
@property int FCRRightEyeFeaturesOffset; // ivar: FCRRightEyeFeaturesOffset
@property NSMutableArray *FCRSmileAndBlinkFeatures; // ivar: FCRSmileAndBlinkFeatures
@property int FCRSmileFeaturesOffset; // ivar: FCRSmileFeaturesOffset
@property int FCRSmileFeaturesSize; // ivar: FCRSmileFeaturesSize
@property int faceId; // ivar: faceId
@property CGRect faceRect; // ivar: faceRect
@property float faceScore; // ivar: faceScore
@property float focusScore; // ivar: focusScore
@property BOOL foundByFaceCore; // ivar: foundByFaceCore
@property int framesSinceLast; // ivar: framesSinceLast
@property BOOL hasLeftEye; // ivar: hasLeftEye
@property BOOL hasRightEye; // ivar: hasRightEye
@property BOOL hasRollAngle; // ivar: hasRollAngle
@property BOOL hasYawAngle; // ivar: hasYawAngle
@property int hwFaceId; // ivar: hwFaceId
@property CGRect hwFaceRect; // ivar: _hwFaceRect
@property BOOL isSyncedWithImage; // ivar: _isSyncedWithImage
@property float leftEyeBlinkScore; // ivar: leftEyeBlinkScore
@property BOOL leftEyeOpen; // ivar: leftEyeOpen
@property CGRect leftEyeRect; // ivar: leftEyeRect
@property CGRect normalizedFaceRect; // ivar: normalizedFaceRect
@property float normalizedFocusScore; // ivar: normalizedFocusScore
@property float normalizedSigma; // ivar: normalizedSigma
@property float rightEyeBlinkScore; // ivar: rightEyeBlinkScore
@property BOOL rightEyeOpen; // ivar: rightEyeOpen
@property CGRect rightEyeRect; // ivar: rightEyeRect
@property float rollAngle; // ivar: rollAngle
@property BOOL smallFace; // ivar: smallFace
@property float smileScore; // ivar: smileScore
@property BOOL smiling; // ivar: smiling
@property CGFloat timestamp; // ivar: timestamp
@property float yawAngle; // ivar: yawAngle


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithFaceStat:(id)arg0 ;
-(void)dealloc;


@end


#endif