// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OFTEXTCONVERSION_H
#define OFTEXTCONVERSION_H


#import <Foundation/Foundation.h>


@interface OFTextConversion : NSObject



+(NSInteger)ligatureFromString:(id)arg0 ;
+(NSInteger)textAlignmentFromString:(id)arg0 ;
+(NSUInteger)underlineStyleFromTextFormat:(id)arg0 ;
+(id)attributedStringWithCTAttributesFromStringAttributes:(id)arg0 scaleFactor:(CGFloat)arg1 ;
+(id)attributedStringWithNSAttributesFromStringAttributes:(id)arg0 scaleFactor:(CGFloat)arg1 ;
+(id)stretchForFontDisplayName:(id)arg0 andFamilyName:(id)arg1 ;
+(id)stringAttributesWithAttributedString:(id)arg0 scaleFactor:(CGFloat)arg1 ;
+(id)stringFromCGColor:(struct CGColor *)arg0 ;
+(id)stringFromLigature:(NSInteger)arg0 ;
+(id)stringFromTextAlignment:(NSInteger)arg0 ;
+(id)styleForFontDisplayName:(id)arg0 andFamilyName:(id)arg1 ;
+(id)textFormatFromUnderlineStyle:(NSUInteger)arg0 ;
+(id)textFormatWithCTAttributesForText:(id)arg0 attributes:(id)arg1 scaleFactor:(CGFloat)arg2 ;
+(id)textFormatWithNSAttributesForText:(id)arg0 attributes:(id)arg1 scaleFactor:(CGFloat)arg2 ;
+(id)weightForFontDisplayName:(id)arg0 andFamilyName:(id)arg1 ;
+(struct CGColor *)CGColorFromString:(id)arg0 ;
+(struct CGColor *)blackCGColor;
+(struct CGColorSpace *)newColorSpaceForDevice;


@end


#endif