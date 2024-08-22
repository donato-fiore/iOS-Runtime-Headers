// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDEPTHBLUREFFECT_H
#define CIDEPTHBLUREFFECT_H

@class NSNumber, AVCameraCalibrationData, NSString;


#import "CIFilter.h"
#import "CIVector.h"
#import "CIImage.h"

@interface CIDepthBlurEffect : CIFilter

@property (retain, nonatomic) NSNumber *inputAperture; // ivar: inputAperture
@property (retain, nonatomic) id *inputAuxDataMetadata; // ivar: inputAuxDataMetadata
@property (retain, nonatomic) AVCameraCalibrationData *inputCalibrationData; // ivar: inputCalibrationData
@property (retain) CIVector *inputChinPositions; // ivar: inputChinPositions
@property (retain) CIImage *inputDisparityImage; // ivar: inputDisparityImage
@property (retain, nonatomic) CIVector *inputFocusRect; // ivar: inputFocusRect
@property (retain) CIImage *inputGainMap; // ivar: inputGainMap
@property (retain) CIImage *inputGlassesImage; // ivar: inputGlassesImage
@property (retain) CIImage *inputHairImage; // ivar: inputHairImage
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (retain) CIVector *inputLeftEyePositions; // ivar: inputLeftEyePositions
@property (retain, nonatomic) NSNumber *inputLumaNoiseScale; // ivar: inputLumaNoiseScale
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (retain) CIVector *inputNosePositions; // ivar: inputNosePositions
@property (retain) CIVector *inputRightEyePositions; // ivar: inputRightEyePositions
@property (retain, nonatomic) NSNumber *inputScaleFactor; // ivar: inputScaleFactor
@property (retain, nonatomic) NSString *inputShape; // ivar: inputShape


+(id)customAttributes;
+(id)tuningParametersFromMetadata:(struct CGImageMetadata *)arg0 ;
+(int)getDraftMode:(id)arg0 ;
+(struct CGImageMetadata *)augmentMetadataWithRenderingPropertiesForImage:(id)arg0 ;
+(struct CGImageMetadata *)metadataFromDictionary:(id)arg0 metadata:(struct CGImageMetadata *)arg1 ;
+(struct CGImageMetadata *)replaceRenderingParameters:(struct CGImageMetadata *)arg0 tuningParameters:(id)arg1 ;
-(id)_getFocusRect:(id)arg0 focusRect:(id)arg1 ;
-(id)outputImage;
-(void)prewarm:(id)arg0 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif