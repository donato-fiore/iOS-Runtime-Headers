// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OADCHARACTERPROPERTIES_H
#define OADCHARACTERPROPERTIES_H

@class NSString, NSArray;
@protocol OADEffectsParent;


#import "OADProperties.h"
#import "OADHyperlink.h"
#import "OADFill.h"
#import "OADStroke.h"
#import "OADColor.h"

@interface OADCharacterProperties : OADProperties <OADEffectsParent>

 {
    NSString *mLatinFont;
    NSString *mEastAsianFont;
    NSString *mBidiFont;
    NSString *mHAnsiFont;
    NSString *mSymbolFont;
    OADHyperlink *mClickHyperlink;
    OADHyperlink *mHoverHyperlink;
    OADFill *mFill;
    OADStroke *mStroke;
    NSArray *mEffects;
    OADFill *mUnderlineFill;
    OADStroke *mUnderlineStroke;
    OADColor *mHighlight;
    float mOpacity;
    float mSize;
    float mSpacing;
    float mBaseline;
    unsigned char mUnderlineType;
    unsigned char mFormatType;
    unsigned char mFormatKerningType;
    unsigned char mStrikeThroughType;
    unsigned char mCaps;
    int mLanguage;
    BOOL mHasUnderlineFill;
    BOOL mHasUnderlineStroke;
    BOOL mHasHighlight;
    BOOL mHasOpacity;
    BOOL mHasIsBold;
    BOOL mIsBold;
    BOOL mHasIsItalic;
    BOOL mIsItalic;
    BOOL mHasUnderlineType;
    BOOL mHasFormatType;
    BOOL mHasFormatKerningType;
    BOOL mHasStrikeThroughType;
    BOOL mHasSize;
    BOOL mHasSpacing;
    BOOL mHasKerning;
    BOOL mHasIsVerticalText;
    BOOL mIsVerticalText;
    BOOL mHasIsRightToLeft;
    BOOL mIsRightToLeft;
    BOOL mHasBaseline;
    BOOL mHasIsHorizontalNormalized;
    BOOL mIsHorizontalNormalized;
    BOOL mHasCaps;
    BOOL mHasLanguage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)hasBaseline;
-(BOOL)hasBidiFont;
-(BOOL)hasCaps;
-(BOOL)hasEastAsianFont;
-(BOOL)hasEffects;
-(BOOL)hasFill;
-(BOOL)hasFormatKerningType;
-(BOOL)hasFormatType;
-(BOOL)hasHAnsiFont;
-(BOOL)hasHighlight;
-(BOOL)hasIsBold;
-(BOOL)hasIsHorizontalNormalized;
-(BOOL)hasIsItalic;
-(BOOL)hasIsRightToLeft;
-(BOOL)hasIsVerticalText;
-(BOOL)hasLanguage;
-(BOOL)hasLatinFont;
-(BOOL)hasOpacity;
-(BOOL)hasSize;
-(BOOL)hasSpacing;
-(BOOL)hasStrikeThroughType;
-(BOOL)hasStroke;
-(BOOL)hasSymbolFont;
-(BOOL)hasUnderlineFill;
-(BOOL)hasUnderlineStroke;
-(BOOL)hasUnderlineType;
-(BOOL)isAnyCharacterPropertyOverridden;
-(BOOL)isAnythingOverridden;
-(BOOL)isBold;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHorizontalNormalized;
-(BOOL)isItalic;
-(BOOL)isRightToLeft;
-(BOOL)isVerticalText;
-(float)baseline;
-(float)opacity;
-(float)size;
-(float)spacing;
-(id)bidiFont;
-(id)clickHyperlink;
-(id)eastAsianFont;
-(id)effects;
-(id)fill;
-(id)hansiFont;
-(id)highlight;
-(id)hoverHyperlink;
-(id)initWithDefaults;
-(id)latinFont;
-(id)stroke;
-(id)symbolFont;
-(id)underlineFill;
-(id)underlineStroke;
-(int)language;
-(unsigned char)caps;
-(unsigned char)formatKerningType;
-(unsigned char)formatType;
-(unsigned char)strikeThroughType;
-(unsigned char)underlineType;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)overrideWithCharacterProperties:(id)arg0 ;
-(void)overrideWithProperties:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setBaseline:(float)arg0 ;
-(void)setBidiFont:(id)arg0 ;
-(void)setCaps:(unsigned char)arg0 ;
-(void)setClickHyperlink:(id)arg0 ;
-(void)setEastAsianFont:(id)arg0 ;
-(void)setEffects:(id)arg0 ;
-(void)setFill:(id)arg0 ;
-(void)setFormatKerningType:(unsigned char)arg0 ;
-(void)setFormatType:(unsigned char)arg0 ;
-(void)setHAnsiFont:(id)arg0 ;
-(void)setHighlight:(id)arg0 ;
-(void)setHoverHyperlink:(id)arg0 ;
-(void)setIsBold:(BOOL)arg0 ;
-(void)setIsHorizontalNormalized:(BOOL)arg0 ;
-(void)setIsItalic:(BOOL)arg0 ;
-(void)setIsRightToLeft:(BOOL)arg0 ;
-(void)setIsVerticalText:(BOOL)arg0 ;
-(void)setLanguage:(int)arg0 ;
-(void)setLatinFont:(id)arg0 ;
-(void)setOpacity:(float)arg0 ;
-(void)setSize:(float)arg0 ;
-(void)setSpacing:(float)arg0 ;
-(void)setStrikeThroughType:(unsigned char)arg0 ;
-(void)setStroke:(id)arg0 ;
-(void)setSymbolFont:(id)arg0 ;
-(void)setUnderlineFill:(id)arg0 ;
-(void)setUnderlineStroke:(id)arg0 ;
-(void)setUnderlineType:(unsigned char)arg0 ;


@end


#endif