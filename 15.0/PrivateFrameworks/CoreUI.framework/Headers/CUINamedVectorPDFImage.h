// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUINAMEDVECTORPDFIMAGE_H
#define CUINAMEDVECTORPDFIMAGE_H



#import "CUINamedVectorImage.h"

@interface CUINamedVectorPDFImage : CUINamedVectorImage

@property (readonly, nonatomic) *CGPDFDocument pdfDocument;


-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 ;


@end


#endif