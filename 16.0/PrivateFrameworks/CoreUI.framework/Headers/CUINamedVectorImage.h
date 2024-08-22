// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUINAMEDVECTORIMAGE_H
#define CUINAMEDVECTORIMAGE_H



#import "CUINamedLookup.h"

@interface CUINamedVectorImage : CUINamedLookup

@property (readonly, nonatomic) *CGPDFDocument pdfDocument;
@property (readonly, nonatomic) CGFloat scale;


-(struct CGImage *)rasterizeImageUsingScaleFactor:(CGFloat)arg0 forTargetSize:(struct CGSize )arg1 ;


@end


#endif