// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFFORMFIELD_H
#define PDFFORMFIELD_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFFormFieldPrivateVars.h"

@interface PDFFormField : NSObject <NSCopying>

 {
    PDFFormFieldPrivateVars *_private;
}




-(BOOL)_isRedacted;
-(BOOL)writeDefaultValue;
-(NSInteger)buttonType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)defaultStringValue;
-(id)description;
-(id)document;
-(id)fieldName;
-(id)initWithAnnotation:(id)arg0 ;
-(id)initWithFormDictionary:(struct CGPDFDictionary *)arg0 ;
-(id)stringValue;
-(int)fieldType;
-(struct __CFDictionary *)createDictionaryRef;
-(struct __CFDictionary *)dictionaryRef;
-(void)addFieldNameToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addFieldTypeToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNameDefaultValueToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addNameValueToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addStringDefaultValueToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)addStringValueToDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)clearDictionaryRef;
-(void)commonCreateDictionaryRef:(struct __CFDictionary *)arg0 ;
-(void)commonInit;
-(void)dealloc;
-(void)setButtonType:(NSInteger)arg0 ;
-(void)setDefaultStringValue:(id)arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setFieldName:(id)arg0 ;
-(void)setFieldType:(int)arg0 ;
-(void)setStringValue:(id)arg0 ;
-(void)setWriteDefaultValue:(BOOL)arg0 ;


@end


#endif