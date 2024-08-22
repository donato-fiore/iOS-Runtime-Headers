// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CIDEPTHEFFECTAPPLYBLURMAP_H
#define CIDEPTHEFFECTAPPLYBLURMAP_H

@class NSNumber, NSString;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIDepthEffectApplyBlurMap : CIFilter

@property (copy, nonatomic) NSNumber *inputAperture; // ivar: inputAperture
@property (retain, nonatomic) id *inputAuxDataMetadata; // ivar: inputAuxDataMetadata
@property (retain) CIImage *inputBlurMap; // ivar: inputBlurMap
@property (retain, nonatomic) NSNumber *inputDraftMode; // ivar: inputDraftMode
@property (retain) CIImage *inputGainMap; // ivar: inputGainMap
@property (retain) CIImage *inputImage; // ivar: inputImage
@property (copy, nonatomic) NSNumber *inputLumaNoiseScale; // ivar: inputLumaNoiseScale
@property (retain) CIImage *inputMatteImage; // ivar: inputMatteImage
@property (retain, nonatomic) NSNumber *inputScale; // ivar: inputScale
@property (retain, nonatomic) NSString *inputShape; // ivar: inputShape


+(id)customAttributes;
-(id)outputImage;
-(id)unifiedRenderingOutputImage:(struct CGImageMetadata *)arg0 ;


@end


#endif