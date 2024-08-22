// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPANNOTATION_H
#define CPANNOTATION_H



#import "CPGraphicObject.h"

@interface CPAnnotation : CPGraphicObject

@property *CGPDFAnnotation cgAnnotation; // ivar: _cgAnnotation


-(id)initWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 ;
-(void)dealloc;


@end


#endif