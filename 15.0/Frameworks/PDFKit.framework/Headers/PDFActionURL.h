// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFACTIONURL_H
#define PDFACTIONURL_H

@class NSURL;
@protocol NSCopying;


#import "PDFAction.h"
#import "PDFActionURLPrivateVars.h"

@interface PDFActionURL : PDFAction <NSCopying>

 {
    PDFActionURLPrivateVars *_private2;
}


@property (copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isSuspiciousURL) BOOL suspiciousURL;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)initWithURL:(id)arg0 ;
-(id)toolTip;
-(struct __CFDictionary *)createDictionaryRef;
-(void)commonInit;


@end


#endif