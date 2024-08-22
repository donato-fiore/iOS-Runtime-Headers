// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPFONT_H
#define CPFONT_H

@class NSString;
@protocol CPDisposable;

#import <Foundation/Foundation.h>


@interface CPFont : NSObject <CPDisposable>

 {
    *CGPDFFont cgPDFFont;
    *CGFont cgFont;
    NSString *fontName;
    BOOL exactMatch;
    ? descriptor;
    *__CFDictionary kernDictionary;
    CGFloat kernUnitsPerEm;
    BOOL isHorizontal;
    CGFloat defaultWidth;
    BOOL disposed;
}




-(BOOL)getGlyphs:(*unsigned short)arg0 forCodes:(*unsigned short)arg1 count:(unsigned int)arg2 ;
-(BOOL)isHorizontal;
-(BOOL)isSameFontAs:(id)arg0 ;
-(CGFloat)ascent;
-(CGFloat)avgWidth;
-(CGFloat)capHeight;
-(CGFloat)descent;
-(CGFloat)fontStretch;
-(CGFloat)fontWeight;
-(CGFloat)italicAngle;
-(CGFloat)kernBetweenUnicode:(unsigned short)arg0 andUnicode:(unsigned short)arg1 ;
-(CGFloat)leading;
-(CGFloat)maxWidth;
-(CGFloat)missingWidth;
-(CGFloat)spaceWidth;
-(CGFloat)stemH;
-(CGFloat)stemV;
-(CGFloat)underlinePosition;
-(CGFloat)underlineThickness;
-(CGFloat)xHeight;
-(id)fontName;
-(id)initWith:(struct CGPDFDictionary *)arg0 ;
-(id)matchingFontName;
-(struct CGFont *)cgFont;
-(struct CGPDFFont *)cgPDFFont;
-(struct CGRect )fontBBox;
-(unsigned int)flags;
-(void)dealloc;
-(void)dispose;
-(void)finalize;
-(void)getFontName;
-(void)loadEmbeddedFontInfo;
-(void)loadExternalFontInfoFor:(id)arg0 ;
-(void)uniCharsFor:(NSUInteger)arg0 count:(*NSUInteger)arg1 toArray:(*unsigned short)arg2 maxChars:(unsigned int)arg3 ;


@end


#endif