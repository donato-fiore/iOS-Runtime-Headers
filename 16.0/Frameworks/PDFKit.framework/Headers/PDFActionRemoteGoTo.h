// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFACTIONREMOTEGOTO_H
#define PDFACTIONREMOTEGOTO_H

@class NSURL;
@protocol NSCopying;


#import "PDFAction.h"
#import "PDFActionRemoteGoToPrivateVars.h"

@interface PDFActionRemoteGoTo : PDFAction <NSCopying>

 {
    PDFActionRemoteGoToPrivateVars *_private2;
}


@property (copy, nonatomic) NSURL *URL;
@property (nonatomic) NSUInteger pageIndex;
@property (nonatomic) CGPoint point;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)initWithPageIndex:(NSUInteger)arg0 atPoint:(struct CGPoint )arg1 fileURL:(id)arg2 ;
-(id)toolTip;
-(id)toolTipNoLabel;
-(struct __CFDictionary *)createDictionaryRef;
-(void)addDestinationToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)commonInit;


@end


#endif