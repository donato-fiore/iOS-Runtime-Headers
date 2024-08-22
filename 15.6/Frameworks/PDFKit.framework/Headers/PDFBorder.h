// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFBORDER_H
#define PDFBORDER_H

@class NSDictionary, NSArray;
@protocol NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "PDFBorderPrivateVars.h"

@interface PDFBorder : NSObject <NSCopying, NSCoding>

 {
    PDFBorderPrivateVars *_private;
}


@property (readonly, copy, nonatomic) NSDictionary *borderKeyValues;
@property (copy, nonatomic) NSArray *dashPattern;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) NSInteger style;


-(BOOL)_isRectangular;
-(BOOL)setBorderCharacteristicsFromArray:(struct CGPDFArray *)arg0 ;
-(CGFloat)horizontalCornerRadius;
-(CGFloat)verticalCornerRadius;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg0 forPage:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(struct __CFDictionary *)createDictionaryRef;
-(unsigned int)dashCountRaw;
-(void)_setDashFromArray:(struct CGPDFArray *)arg0 ;
-(void)_updateDashPatternRaw;
-(void)dealloc;
-(void)drawInRect:(struct CGRect )arg0 ;
-(void)drawInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setAnnotation:(id)arg0 ;
-(void)setHorizontalCornerRadius:(CGFloat)arg0 ;
-(void)setVerticalCornerRadius:(CGFloat)arg0 ;
-(void)updateCornerBorderStyle;


@end


#endif