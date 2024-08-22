// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFAPPEARANCECHARACTERISTICS_H
#define PDFAPPEARANCECHARACTERISTICS_H

@class NSDictionary, UIColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "PDFAppearanceCharacteristicsPrivate.h"

@interface PDFAppearanceCharacteristics : NSObject <NSCopying>

 {
    PDFAppearanceCharacteristicsPrivate *_private;
}


@property (readonly, copy, nonatomic) NSDictionary *appearanceCharacteristicsKeyValues;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) UIColor *borderColor;
@property (copy, nonatomic) NSString *caption;
@property (nonatomic) NSInteger controlType;
@property (copy, nonatomic) NSString *downCaption;
@property (copy, nonatomic) NSString *rolloverCaption;
@property (nonatomic) NSInteger rotation;


-(BOOL)scaleProportional;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 forControlType:(NSInteger)arg1 ;
-(struct CGPDFForm *)icon;
-(struct __CFDictionary *)createDictionaryRef;
-(void)addColor:(id)arg0 forKey:(struct __CFString *)arg1 toDictionaryRef:(struct __CFDictionary *)arg2 ;
-(void)dealloc;


@end


#endif