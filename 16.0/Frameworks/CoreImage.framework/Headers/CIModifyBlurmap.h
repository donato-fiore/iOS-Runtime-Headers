// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIMODIFYBLURMAP_H
#define CIMODIFYBLURMAP_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIModifyBlurmap : CIFilter

@property (retain) NSNumber *inputApertureScaling; // ivar: inputApertureScaling
@property (retain) NSNumber *inputDistanceAdd; // ivar: inputDistanceAdd
@property (retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMax; // ivar: inputEyeProtectionFaceWeightsSmoothStepMax
@property (retain) NSNumber *inputEyeProtectionFaceWeightsSmoothStepMin; // ivar: inputEyeProtectionFaceWeightsSmoothStepMin
@property (retain) NSNumber *inputEyeProtectionMaxFaces; // ivar: inputEyeProtectionMaxFaces
@property (retain) NSNumber *inputEyeProtectionOvalDimsDistanceOffset; // ivar: inputEyeProtectionOvalDimsDistanceOffset
@property (retain) NSNumber *inputEyeProtectionOvalDimsDistanceScale; // ivar: inputEyeProtectionOvalDimsDistanceScale
@property (retain) NSNumber *inputEyeProtectionOvalDimsRadiusHorizontal; // ivar: inputEyeProtectionOvalDimsRadiusHorizontal
@property (retain) NSNumber *inputEyeProtectionOvalDimsRadiusVertical; // ivar: inputEyeProtectionOvalDimsRadiusVertical
@property (retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMax; // ivar: inputEyeProtectionOvalFallOffSmoothStepMax
@property (retain) NSNumber *inputEyeProtectionOvalFallOffSmoothStepMin; // ivar: inputEyeProtectionOvalFallOffSmoothStepMin
@property (retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMax; // ivar: inputEyeProtectionPersonMaskSmoothStepMax
@property (retain) NSNumber *inputEyeProtectionPersonMaskSmoothStepMin; // ivar: inputEyeProtectionPersonMaskSmoothStepMin
@property (retain) NSNumber *inputEyeProtectionPreventStrength; // ivar: inputEyeProtectionPreventStrength
@property (retain) NSNumber *inputEyeProtectionSubtractiveApertureScaling; // ivar: inputEyeProtectionSubtractiveApertureScaling
@property (retain) NSNumber *inputEyeProtectionSubtractiveMaxBlur; // ivar: inputEyeProtectionSubtractiveMaxBlur
@property (retain) CIImage *inputFaceMaskDeltaImage; // ivar: inputFaceMaskDeltaImage
@property (retain) CIVector *inputFaceMidPointX; // ivar: inputFaceMidPointX
@property (retain) CIVector *inputFaceMidPointY; // ivar: inputFaceMidPointY
@property (retain) CIVector *inputHairAdditive; // ivar: inputHairAdditive
@property (retain) CIImage *inputHairAlpha; // ivar: inputHairAlpha
@property (retain) NSNumber *inputHairDistance; // ivar: inputHairDistance
@property (retain) NSNumber *inputHairMaxBlur; // ivar: inputHairMaxBlur
@property (retain) CIVector *inputHairSubtractive; // ivar: inputHairSubtractive
@property (retain) NSNumber *inputHairThreshold; // ivar: inputHairThreshold
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIVector *inputLeftEyeX; // ivar: inputLeftEyeX
@property (retain) CIVector *inputLeftEyeY; // ivar: inputLeftEyeY
@property (retain) NSNumber *inputMaxBlur; // ivar: inputMaxBlur
@property (retain) CIVector *inputPersonAdditive; // ivar: inputPersonAdditive
@property (retain) CIImage *inputPersonAlpha; // ivar: inputPersonAlpha
@property (retain) NSNumber *inputPersonDistance; // ivar: inputPersonDistance
@property (retain) NSNumber *inputPersonMaxBlur; // ivar: inputPersonMaxBlur
@property (retain) CIVector *inputPersonSubtractive; // ivar: inputPersonSubtractive
@property (retain) NSNumber *inputPersonThreshold; // ivar: inputPersonThreshold
@property (retain) NSNumber *inputProtectBodyStrength; // ivar: inputProtectBodyStrength
@property (retain) NSNumber *inputRelativeApertureScalingStrength; // ivar: inputRelativeApertureScalingStrength
@property (retain) CIVector *inputRightEyeX; // ivar: inputRightEyeX
@property (retain) CIVector *inputRightEyeY; // ivar: inputRightEyeY
@property (retain) NSNumber *inputScale; // ivar: inputScale
@property (retain) NSNumber *inputSmoothstepMax; // ivar: inputSmoothstepMax
@property (retain) NSNumber *inputSmoothstepMin; // ivar: inputSmoothstepMin


+(id)customAttributes;
-(id)outputImage;


@end


#endif