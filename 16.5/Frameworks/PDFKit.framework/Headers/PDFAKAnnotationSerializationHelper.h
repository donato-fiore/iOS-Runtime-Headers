// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFAKANNOTATIONSERIALIZATIONHELPER_H
#define PDFAKANNOTATIONSERIALIZATIONHELPER_H


#import <Foundation/Foundation.h>


@interface PDFAKAnnotationSerializationHelper : NSObject



+(BOOL)_annotationClassHasSeniority:(id)arg0 ;
+(BOOL)_shouldUseAKAnnotation:(id)arg0 toRepresentCGPDFDictionary:(struct CGPDFDictionary *)arg1 ;
+(id)akAnnotationFromCGPDFAnnotation:(struct CGPDFAnnotation *)arg0 andDictionary:(struct CGPDFDictionary *)arg1 ;
+(void)addAKAnnotation:(id)arg0 toAnnotationDictionary:(struct __CFDictionary *)arg1 ;


@end


#endif