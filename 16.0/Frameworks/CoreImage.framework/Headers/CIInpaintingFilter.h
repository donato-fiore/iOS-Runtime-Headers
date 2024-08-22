// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIINPAINTINGFILTER_H
#define CIINPAINTINGFILTER_H

@class NSArray, NSNumber;


#import "CIFilter.h"
#import "InpaintingExecutionContext.h"
#import "CIImage.h"
#import "CIVector.h"

@interface CIInpaintingFilter : CIFilter

@property (readonly) InpaintingExecutionContext *executionContext; // ivar: _executionContext
@property (retain, nonatomic) NSArray *inputFaceBoundingBoxes; // ivar: inputFaceBoundingBoxes
@property (retain, nonatomic) CIImage *inputImage; // ivar: inputImage
@property (retain, nonatomic) NSNumber *inputInpaintingBlendingRadius; // ivar: inputInpaintingBlendingRadius
@property (retain, nonatomic) NSNumber *inputInpaintingMode; // ivar: inputInpaintingMode
@property (retain, nonatomic) NSArray *inputInpaintingProcessingResolutions; // ivar: inputInpaintingProcessingResolutions
@property (retain, nonatomic) CIVector *inputMaskBoundingBox; // ivar: inputMaskBoundingBox
@property (retain, nonatomic) CIImage *inputMaskImage; // ivar: inputMaskImage
@property (readonly, getter=getLastExecutionTime) CGFloat lastExecutionTime;
@property (readonly, getter=getLastProcessingResolution) int lastProcessingResolution;


+(id)customAttributes;
+(id)getEspressoResources;
-(BOOL)shouldFaceSpecificModelBeUsed;
-(id)getSelectedFacesInpaintingModelDescriptor;
-(id)getSelectedGeneralInpaintingModelDescriptor;
-(id)init;
-(id)outputImage;
-(id)performFullPipelineInpaintingWithParameters:(id)arg0 ;
-(id)performMultiresolutionInpaintingWithParameters:(id)arg0 ;
-(id)performSinglePassInpaintingWithParameters:(id)arg0 ;
-(id)performTilingPipelineInpaintingWithParameters:(id)arg0 ;
-(void)dealloc;


@end


#endif