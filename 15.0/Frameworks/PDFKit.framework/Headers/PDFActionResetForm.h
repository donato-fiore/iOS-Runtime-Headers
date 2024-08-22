// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFACTIONRESETFORM_H
#define PDFACTIONRESETFORM_H

@class NSArray;
@protocol NSCopying;


#import "PDFAction.h"
#import "PDFActionResetFormPrivateVars.h"

@interface PDFActionResetForm : PDFAction <NSCopying>

 {
    PDFActionResetFormPrivateVars *_private2;
}


@property (copy, nonatomic) NSArray *fields;
@property (nonatomic) BOOL fieldsIncludedAreCleared;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)toolTip;
-(struct __CFDictionary *)createDictionaryRef;
-(void)addFieldsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFlagsToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)commonInit;


@end


#endif