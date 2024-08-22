// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDEPTHEFFECTMAKEBLURMAP_H
#define CIDEPTHEFFECTMAKEBLURMAP_H

@class NSDictionary, NSNumber, AVCameraCalibrationData;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIDepthEffectMakeBlurMap : CIFilter {
    NSDictionary *tuningParameters;
    float simulatedAperture;
}


@property (copy, nonatomic) NSNumber *inputAperture; // ivar: inputAperture
@property (retain, nonatomic) id *inputAuxDataMetadata; // ivar: inputAuxDataMetadata
@property (retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // ivar: inputCalibrationData
@property (retain) CIVector *inputChinPosition; // ivar: inputChinPosition
@property (retain, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIVector *inputFaceMidPoint; // ivar: inputFaceMidPoint
@property (retain, nonatomic) CIVector *inputFocusRect; // ivar: inputFocusRect
@property (retain) CIImage *inputGainMap; // ivar: inputGainMap
@property (retain) CIImage *inputGlassesImage; // ivar: inputGlassesImage
@property (retain) CIImage *inputHairImage; // ivar: inputHairImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIVector *inputLeftEyePosition; // ivar: inputLeftEyePosition
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (retain) CIVector *inputRightEyePosition; // ivar: inputRightEyePosition
@property (copy, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain) CIImage *inputShiftmapImage; // ivar: inputShiftmapImage


+(id)customAttributes;
-(BOOL)needToRunFaceMask;
-(float)intrinsicMatrixFocalLength;
-(id)blurMapV2:(id)arg0 ;
-(id)blurMapV3:(id)arg0 shiftmap:(id)arg1 alphaImage:(id)arg2 ;
-(id)blurMapV4:(id)arg0 shiftmap:(id)arg1 alphaImage:(id)arg2 hairImage:(id)arg3 ;
-(id)calibrationData;
-(id)faceMaskApply:(id)arg0 blurMap:(id)arg1 ;
-(id)faceMaskDelta:(id)arg0 extent:(struct CGRect )arg1 parameters:(id)arg2 distanceToAdd:(*float)arg3 ;
-(id)faceMaskParams:(id)arg0 useNormalizedCoords:(BOOL)arg1 ;
-(id)lensModelApply:(id)arg0 shiftMap:(id)arg1 ;
-(id)lensModelParams:(id)arg0 ;
-(id)outputImage;
-(id)refineShiftMapV3WithMainImage:(id)arg0 shiftmap:(id)arg1 lensModel:(id)arg2 ;
-(id)smoothShiftMapV2:(id)arg0 ;
-(id)unifiedRenderingOutputImage:(struct CGImageMetadata *)arg0 ;
-(id)upsampledShiftMap:(id)arg0 ;
-(struct CGSize )originalShiftMapSize;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif