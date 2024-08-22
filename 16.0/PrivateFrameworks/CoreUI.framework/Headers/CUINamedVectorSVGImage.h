// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUINAMEDVECTORSVGIMAGE_H
#define CUINAMEDVECTORSVGIMAGE_H



#import "CUINamedVectorImage.h"

@interface CUINamedVectorSVGImage : CUINamedVectorImage

@property (readonly, nonatomic) *CGSVGDocument svgDocument;


-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 ;


@end


#endif