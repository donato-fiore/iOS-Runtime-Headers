// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFACTIONGOTO_H
#define PDFACTIONGOTO_H

@protocol NSCopying;


#import "PDFAction.h"
#import "PDFActionGoToPrivateVars.h"
#import "PDFDestination.h"

@interface PDFActionGoTo : PDFAction <NSCopying>

 {
    PDFActionGoToPrivateVars *_private2;
}


@property (retain, nonatomic) PDFDestination *destination;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)initWithDestination:(id)arg0 ;
-(id)toolTip;
-(id)toolTipNoLabel;
-(struct __CFDictionary *)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)commonInit;


@end


#endif