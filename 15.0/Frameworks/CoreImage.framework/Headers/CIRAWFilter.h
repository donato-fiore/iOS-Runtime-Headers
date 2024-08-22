// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIRAWFILTER_H
#define CIRAWFILTER_H

@class NSString, NSData, NSURL, NSDictionary, NSArray;


#import "CIFilter.h"
#import "CIRAWFilterImpl.h"
#import "CIImage.h"

@interface CIRAWFilter : CIFilter

@property float baselineExposure;
@property float boostAmount;
@property float boostShadowAmount;
@property float colorNoiseReductionAmount;
@property (readonly, getter=isColorNoiseReductionSupported) BOOL colorNoiseReductionSupported;
@property float contrastAmount;
@property (readonly, getter=isContrastSupported) BOOL contrastSupported;
@property (retain) NSString *decoderVersion;
@property float detailAmount;
@property (readonly, getter=isDetailSupported) BOOL detailSupported;
@property (getter=isDraftModeEnabled) BOOL draftModeEnabled;
@property float exposure;
@property float extendedDynamicRangeAmount;
@property (retain) CIRAWFilterImpl *filterImplementation; // ivar: filterImplementation
@property (getter=isGamutMappingEnabled) BOOL gamutMappingEnabled;
@property (readonly) NSData *imageData; // ivar: imageData
@property (readonly) NSString *imageDataHint; // ivar: imageDataHint
@property (readonly) NSURL *imageURL; // ivar: imageURL
@property (getter=isLensCorrectionEnabled) BOOL lensCorrectionEnabled; // ivar: _lensCorrectionEnabled
@property (readonly, getter=isLensCorrectionSupported) BOOL lensCorrectionSupported;
@property (retain) CIFilter *linearSpaceFilter;
@property float localToneMapAmount;
@property (readonly, getter=isLocalToneMapSupported) BOOL localToneMapSupported;
@property float luminanceNoiseReductionAmount;
@property (readonly, getter=isLuminanceNoiseReductionSupported) BOOL luminanceNoiseReductionSupported;
@property float moireReductionAmount;
@property (readonly, getter=isMoireReductionSupported) BOOL moireReductionSupported;
@property (readonly) CGSize nativeSize;
@property CGPoint neutralChromaticity;
@property CGPoint neutralLocation;
@property float neutralTemperature;
@property float neutralTint;
@property unsigned int orientation;
@property (readonly) CIImage *portraitEffectsMatte;
@property (readonly) CIImage *previewImage;
@property (readonly) NSDictionary *properties;
@property float scaleFactor; // ivar: _scaleFactor
@property (readonly) CIImage *semanticSegmentationGlassesMatte;
@property (readonly) CIImage *semanticSegmentationHairMatte;
@property (readonly) CIImage *semanticSegmentationSkinMatte;
@property (readonly) CIImage *semanticSegmentationSkyMatte;
@property (readonly) CIImage *semanticSegmentationTeethMatte;
@property float shadowBias;
@property float sharpnessAmount;
@property (readonly, getter=isSharpnessSupported) BOOL sharpnessSupported;
@property (readonly) NSArray *supportedDecoderVersions;


+(id)filterWithCVPixelBuffer:(struct __CVBuffer *)arg0 properties:(id)arg1 ;
+(id)filterWithImageData:(id)arg0 identifierHint:(id)arg1 ;
+(id)filterWithImageURL:(id)arg0 ;
+(id)supportedCameraModels;
-(BOOL)lensCorrectionEnabled;
-(id)auxImageWithKey:(id)arg0 ;
-(id)initWithCVPixelBuffer:(struct __CVBuffer *)arg0 properties:(id)arg1 ;
-(id)initWithImageData:(id)arg0 identifierHint:(id)arg1 ;
-(id)initWithImageURL:(id)arg0 ;
-(id)outputImage;
-(void)setIsEnableLensCorrection:(BOOL)arg0 ;


@end


#endif