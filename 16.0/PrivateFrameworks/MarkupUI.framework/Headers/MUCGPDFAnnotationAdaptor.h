// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUCGPDFANNOTATIONADAPTOR_H
#define MUCGPDFANNOTATIONADAPTOR_H


#import <Foundation/Foundation.h>


@interface MUCGPDFAnnotationAdaptor : NSObject



+(id)_concreteAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 ofPage:(struct CGPDFPage *)arg1 ;
+(id)_concreteDictionaryRepresentationOfAKAnnotation:(id)arg0 forPage:(struct CGPDFPage *)arg1 ;
+(id)newAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 ofPage:(struct CGPDFPage *)arg1 ;
+(id)newPlaceholderAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 ofPage:(struct CGPDFPage *)arg1 ;
+(id)pdfDictionaryRepresentationOfAKAnnotation:(id)arg0 forPage:(struct CGPDFPage *)arg1 ;
+(id)supportedAnnotationTypes;


@end


#endif