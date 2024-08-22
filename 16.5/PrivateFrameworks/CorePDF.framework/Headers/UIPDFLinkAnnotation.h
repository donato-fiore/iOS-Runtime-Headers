// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPDFLINKANNOTATION_H
#define UIPDFLINKANNOTATION_H



#import "UIPDFMarkupAnnotation.h"

@interface UIPDFLinkAnnotation : UIPDFMarkupAnnotation



-(BOOL)quadPoints:(struct CGPDFArray *)arg0 within:(struct CGRect )arg1 ;
-(BOOL)recognizeGestures;
-(BOOL)shouldRecognizeTapOrPress:(struct CGPoint )arg0 ;
-(NSUInteger)getDestination:(struct CGPDFDictionary *)arg0 ;
-(NSUInteger)getNamedDestination:(struct CGPDFDictionary *)arg0 ;
-(NSUInteger)pageNumber;
-(id)newBaseURL;
-(id)url;
-(struct CGRect )linkRectangle;


@end


#endif