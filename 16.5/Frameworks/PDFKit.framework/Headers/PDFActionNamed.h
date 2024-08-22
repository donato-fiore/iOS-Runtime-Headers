// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFACTIONNAMED_H
#define PDFACTIONNAMED_H

@protocol NSCopying;


#import "PDFAction.h"
#import "PDFActionNamedPrivateVars.h"

@interface PDFActionNamed : PDFAction <NSCopying>

 {
    PDFActionNamedPrivateVars *_private2;
}


@property (nonatomic) NSInteger name;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)initWithName:(NSInteger)arg0 ;
-(id)toolTip;
-(struct __CFDictionary *)createDictionaryRef;
-(void)addNameToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)commonInit;


@end


#endif