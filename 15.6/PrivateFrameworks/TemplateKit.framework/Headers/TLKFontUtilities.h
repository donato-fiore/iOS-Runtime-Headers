// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLKFONTUTILITIES_H
#define TLKFONTUTILITIES_H


#import <Foundation/Foundation.h>


@interface TLKFontUtilities : NSObject



+(BOOL)formattedTextItemIsColoredImage:(id)arg0 ;
+(id)attributedStringForFormattedText:(id)arg0 appearance:(id)arg1 prominence:(NSUInteger)arg2 alignment:(NSInteger)arg3 font:(id)arg4 isButton:(BOOL)arg5 ;
+(id)attributedStringForRichText:(id)arg0 appearance:(id)arg1 prominence:(NSUInteger)arg2 alignment:(NSInteger)arg3 coloredRanges:(id)arg4 nonColoredRanges:(id)arg5 rangesForNonTemplateImageAttachments:(id)arg6 rangesForTemplateImageAttachments:(id)arg7 font:(id)arg8 isButton:(BOOL)arg9 ;
+(id)attributedStringForRichText:(id)arg0 appearance:(id)arg1 prominence:(NSUInteger)arg2 alignment:(NSInteger)arg3 font:(id)arg4 isButton:(BOOL)arg5 ;
+(id)boldBodyFont;
+(id)cachedFontForKey:(id)arg0 creatorBlock:(id)arg1 ;
+(id)cachedFontForTextStyle:(id)arg0 ;
+(id)cachedFontForTextStyle:(id)arg0 isShort:(BOOL)arg1 fontWeight:(CGFloat)arg2 ;
+(id)cachedFontForTextStyle:(id)arg0 isShort:(BOOL)arg1 isBold:(BOOL)arg2 ;
+(id)cachedFontForTextStyle:(id)arg0 isShort:(BOOL)arg1 isBold:(BOOL)arg2 useCustomWeight:(BOOL)arg3 customFontWeight:(CGFloat)arg4 ;
+(id)calloutFont;
+(id)captionFont;
+(id)footnoteFont;
+(id)preferredFontDescriptorWithTextStyle:(id)arg0 addingSymbolicTraits:(unsigned int)arg1 ;
+(id)preferredFontForTextStyle:(id)arg0 ;
+(id)preferredFontForTextStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 ;
+(id)preferredFontWithTextStyle:(id)arg0 isShort:(BOOL)arg1 isBold:(BOOL)arg2 ;
+(id)preferredFontWithTextStyle:(id)arg0 isShort:(BOOL)arg1 isBold:(BOOL)arg2 useCustomWeight:(BOOL)arg3 customFontWeight:(CGFloat)arg4 ;
+(id)shortBodyFont;
+(id)shortFootnoteFont;
+(id)shortSubheadBoldFont;
+(id)shortSubheadFont;
+(id)shortTitle1Font;
+(id)shortTitle2Font;
+(id)subheadBoldFont;
+(id)subheadFont;
+(id)thinFontOfSize:(CGFloat)arg0 grade:(NSUInteger)arg1 ;


@end


#endif