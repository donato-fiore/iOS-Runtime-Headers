// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFFORM_H
#define PDFFORM_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFFormPrivateVars.h"

@interface PDFForm : NSObject <NSCopying>

 {
    PDFFormPrivateVars *_private;
}




-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultStringValueForFieldNamed:(id)arg0 ;
-(id)description;
-(id)document;
-(id)fieldNamed:(id)arg0 ;
-(id)fieldNames;
-(id)init;
-(id)initWithDocument:(id)arg0 ;
-(id)stringValueForFieldNamed:(id)arg0 ;
-(struct CGPDFString *)defaultDAStringRef;
-(struct __CFDictionary *)createDictionaryRef;
-(void)_commonResetForm:(id)arg0 inclusive:(BOOL)arg1 ;
-(void)addFormField:(id)arg0 ;
-(void)addNeedsAppearanceToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)dealloc;
-(void)removeFormFieldWithFieldName:(id)arg0 ;
-(void)resetFormExcludingFields:(id)arg0 ;
-(void)resetFormForFields:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setStringValue:(id)arg0 forFieldNamed:(id)arg1 postFormChangeNotification:(BOOL)arg2 ;


@end


#endif