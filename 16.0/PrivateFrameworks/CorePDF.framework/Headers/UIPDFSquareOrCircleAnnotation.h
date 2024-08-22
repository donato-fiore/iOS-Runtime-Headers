// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIPDFSQUAREORCIRCLEANNOTATION_H
#define UIPDFSQUAREORCIRCLEANNOTATION_H



#import "UIPDFAnnotation.h"

@interface UIPDFSquareOrCircleAnnotation : UIPDFAnnotation {
    CGFloat _W;
    unsigned short _S;
    *CGPDFArray _D;
    CGFloat _SE;
    CGFloat _I;
}




-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)strokePath:(struct CGContext *)arg0 inRect:(struct CGRect )arg1 ;


@end


#endif