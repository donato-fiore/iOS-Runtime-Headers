// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFACTION_H
#define PDFACTION_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFActionPrivate.h"

@interface PDFAction : NSObject <NSCopying>

 {
    PDFActionPrivate *_private;
}


@property (readonly, nonatomic) NSString *type;


+(Class)_classForActionDictionary:(struct CGPDFDictionary *)arg0 ;
+(id)actionWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)baseURLForDocument:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithActionDictionary:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(id)nextActions;
-(id)toolTip;
-(id)toolTipNoLabel;
-(struct __CFDictionary *)createDictionaryRef;
-(void)_setNextAction:(struct CGPDFDictionary *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(void)_setNextActions:(id)arg0 ;
-(void)_setNextActions:(struct CGPDFArray *)arg0 forDocument:(id)arg1 forPage:(id)arg2 ;
-(void)commonInit;


@end


#endif