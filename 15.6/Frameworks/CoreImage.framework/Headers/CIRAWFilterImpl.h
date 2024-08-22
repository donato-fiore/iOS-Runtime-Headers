// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIRAWFILTERIMPL_H
#define CIRAWFILTERIMPL_H

@class NSArray, NSString, NSDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "CIFilter.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIRAWFilterImpl : CIFilter {
    *CGImageSource _inputImageSource;
    NSArray *_inputImageAndProperties;
    CIImage *_inputImage;
    CGSize _nativeSize;
    BOOL _isRawSource;
    BOOL _calledDealloc;
    NSString *_matteOption;
    NSDictionary *_baseImageProperties;
    NSDictionary *_rawDictionary;
    NSDictionary *_rawReconstructionDefaultsDictionary;
    NSArray *_supportedSushiModes;
    NSArray *_supportedDecoderVersions;
    NSArray *_filters;
    NSObject *_typeIdentifierHint;
    NSNumber *_defaultOrientation;
    NSString *inputRequestedSushiMode;
    NSNumber *inputNeutralChromaticityX;
    NSNumber *inputNeutralChromaticityY;
    NSNumber *inputNeutralTemperature;
    NSNumber *inputNeutralTint;
    CIVector *inputNeutralLocation;
    NSNumber *inputEV;
    NSNumber *inputBoost;
    NSNumber *inputDraftMode;
    NSNumber *inputScaleFactor;
    NSNumber *inputIgnoreOrientation;
    NSNumber *inputImageOrientation;
    NSNumber *inputEnableSharpening;
    NSNumber *inputEnableNoiseTracking;
    NSNumber *inputEnableVendorLensCorrection;
    NSNumber *inputNoiseReductionAmount;
    NSNumber *inputLuminanceNoiseReductionAmount;
    NSNumber *inputColorNoiseReductionAmount;
    NSNumber *inputNoiseReductionSharpnessAmount;
    NSNumber *inputNoiseReductionContrastAmount;
    NSNumber *inputNoiseReductionDetailAmount;
    NSNumber *inputMoireAmount;
    NSString *inputDecoderVersion;
    NSNumber *inputBoostShadowAmount;
    NSNumber *inputBias;
    NSNumber *inputBaselineExposure;
    NSNumber *inputDisableGamutMap;
    NSNumber *inputHueMagMR;
    NSNumber *inputHueMagRY;
    NSNumber *inputHueMagYG;
    NSNumber *inputHueMagGC;
    NSNumber *inputHueMagCB;
    NSNumber *inputHueMagBM;
    CIFilter *inputLinearSpaceFilter;
    NSNumber *inputEnableEDRMode;
    NSNumber *inputLocalToneMapAmount;
    NSNumber *inputReturnDemosaiced;
}


@property (readonly, retain) NSArray *filters;
@property (readonly) BOOL isRawSource;
@property (readonly) CGSize nativeSize;
@property (readonly, retain) NSDictionary *rawDictionary;
@property (readonly) int rawMajorVersion;
@property (readonly, retain) NSDictionary *rawReconstructionDefaultsDictionary;
@property (readonly) int subsampling;
@property (readonly, retain) NSNumber *sushiMode;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)applyMatrix:(*CGFloat)arg0 toCIImage:(id)arg1 ;
+(id)customAttributes;
+(id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg0 properties:(id)arg1 options:(id)arg2 ;
+(id)filterWithImageData:(id)arg0 options:(id)arg1 ;
+(id)filterWithImageURL:(id)arg0 options:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg0 ;
+(id)matteOptionNameFromOptions:(id)arg0 ;
+(id)optionKeys;
+(id)supportedRawCameraModels;
+(void)convertNeutralTemperature:(id)arg0 tint:(id)arg1 toX:(*id)arg2 y:(*id)arg3 ;
+(void)convertNeutralX:(id)arg0 y:(id)arg1 toTemperature:(*id)arg2 tint:(*id)arg3 ;
-(id)RAWFiltersValueForKeyPath:(id)arg0 ;
-(id)activeKeys;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultBoostShadowAmount;
-(id)defaultDecoderVersion;
-(id)defaultImageOrientation;
-(id)defaultInputBaselineExposureAmount;
-(id)defaultInputBiasAmount;
-(id)defaultInputColorNoiseReductionAmount;
-(id)defaultInputEnableEDRMode;
-(id)defaultInputEnableVendorLensCorrection;
-(id)defaultInputHueMagBMAmount;
-(id)defaultInputHueMagCBAmount;
-(id)defaultInputHueMagGCAmount;
-(id)defaultInputHueMagMRAmount;
-(id)defaultInputHueMagRYAmount;
-(id)defaultInputHueMagYGAmount;
-(id)defaultInputLocalToneMapAmount;
-(id)defaultInputLuminanceNoiseReductionAmount;
-(id)defaultInputMoireAmount;
-(id)defaultInputNoiseReductionContrastAmount;
-(id)defaultInputNoiseReductionDetailAmount;
-(id)defaultInputNoiseReductionSharpnessAmount;
-(id)defaultInputReturnDemosaiced;
-(id)defaultNeutralChromaticityX;
-(id)defaultNeutralChromaticityY;
-(id)defaultNeutralTemperature;
-(id)defaultNeutralTint;
-(id)init;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 properties:(id)arg1 options:(id)arg2 ;
-(id)initWithImageSource:(struct CGImageSource *)arg0 options:(id)arg1 ;
-(id)inputBaselineExposure;
-(id)inputBias;
-(id)inputDisableGamutMap;
-(id)inputHueMagBM;
-(id)inputHueMagCB;
-(id)inputHueMagGC;
-(id)inputHueMagMR;
-(id)inputHueMagRY;
-(id)inputHueMagYG;
-(id)inputImage;
-(id)inputLinearSpaceFilter;
-(id)inputNeutralChromaticityX;
-(id)inputNeutralChromaticityY;
-(id)inputNeutralLocation;
-(id)inputNeutralTemperature;
-(id)inputNeutralTint;
-(id)outputImage;
-(id)outputKeys;
-(id)outputNativeSize;
-(id)properties;
-(id)rawOptions;
-(id)rawOptionsWithSubsampling:(BOOL)arg0 ;
-(id)supportedDecoderVersions;
-(id)supportedSushiModes;
-(id)transformedImageIgnoringOrientation:(BOOL)arg0 ;
-(id)whitePoint;
-(id)whitePointArray;
-(struct CGAffineTransform )getOrientationTransform:(id)arg0 ;
-(struct CGAffineTransform )getScaleTransform:(id)arg0 ;
-(void)dealloc;
-(void)getWhitePointVectorsR:(*id)arg0 g:(*id)arg1 b:(*id)arg2 ;
-(void)invalidateFilters;
-(void)invalidateInputImage;
-(void)setDefaults;
-(void)setInputBaselineExposure:(id)arg0 ;
-(void)setInputBias:(id)arg0 ;
-(void)setInputBoost:(id)arg0 ;
-(void)setInputBoostShadowAmount:(id)arg0 ;
-(void)setInputColorNoiseReductionAmount:(id)arg0 ;
-(void)setInputDecoderVersion:(id)arg0 ;
-(void)setInputDisableGamutMap:(id)arg0 ;
-(void)setInputDraftMode:(id)arg0 ;
-(void)setInputEV:(id)arg0 ;
-(void)setInputEnableEDRMode:(id)arg0 ;
-(void)setInputEnableNoiseTracking:(id)arg0 ;
-(void)setInputEnableSharpening:(id)arg0 ;
-(void)setInputEnableVendorLensCorrection:(id)arg0 ;
-(void)setInputHueMagBM:(id)arg0 ;
-(void)setInputHueMagCB:(id)arg0 ;
-(void)setInputHueMagGC:(id)arg0 ;
-(void)setInputHueMagMR:(id)arg0 ;
-(void)setInputHueMagRY:(id)arg0 ;
-(void)setInputHueMagYG:(id)arg0 ;
-(void)setInputIgnoreOrientation:(id)arg0 ;
-(void)setInputImage:(id)arg0 ;
-(void)setInputImageOrientation:(id)arg0 ;
-(void)setInputLinearSpaceFilter:(id)arg0 ;
-(void)setInputLocalToneMapAmount:(id)arg0 ;
-(void)setInputLuminanceNoiseReductionAmount:(id)arg0 ;
-(void)setInputMoireAmount:(id)arg0 ;
-(void)setInputNeutralChromaticityX:(id)arg0 ;
-(void)setInputNeutralChromaticityY:(id)arg0 ;
-(void)setInputNeutralLocation:(id)arg0 ;
-(void)setInputNeutralTemperature:(id)arg0 ;
-(void)setInputNeutralTint:(id)arg0 ;
-(void)setInputNoiseReductionAmount:(id)arg0 ;
-(void)setInputNoiseReductionContrastAmount:(id)arg0 ;
-(void)setInputNoiseReductionDetailAmount:(id)arg0 ;
-(void)setInputNoiseReductionSharpnessAmount:(id)arg0 ;
-(void)setInputRequestedSushiMode:(id)arg0 ;
-(void)setInputReturnDemosaiced:(id)arg0 ;
-(void)setInputScaleFactor:(id)arg0 ;
-(void)setTempTintAtPoint:(struct CGPoint )arg0 ;
-(void)updateChomaticityXAndY;
-(void)updateTemperatureAndTint;


@end


#endif