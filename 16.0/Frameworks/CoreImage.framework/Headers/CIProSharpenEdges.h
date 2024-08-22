// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIPROSHARPENEDGES_H
#define CIPROSHARPENEDGES_H

@class NSNumber;


#import "CIFilter.h"
#import "CIImage.h"

@interface CIProSharpenEdges : CIFilter {
    CIImage *inputImage;
    NSNumber *inputFalloff;
    NSNumber *inputSharpness;
    NSNumber *inputEdgeScale;
}




+(id)customAttributes;
-(id)_CIBlur1;
-(id)_CIBlur2;
-(id)_CIBlur4;
-(id)_CIConvertRGBtoY;
-(id)_CIEdgesPrep;
-(id)_CIFindEdges;
-(id)_CISharpenCombineEdges;
-(id)outputImage;


@end


#endif