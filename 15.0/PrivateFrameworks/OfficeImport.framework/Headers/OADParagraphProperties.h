// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADPARAGRAPHPROPERTIES_H
#define OADPARAGRAPHPROPERTIES_H

@class NSArray;


#import "OADCharacterProperties.h"
#import "OADBulletSize.h"
#import "OADBulletColor.h"
#import "OADBulletFont.h"
#import "OADBulletProperties.h"
#import "OADTextSpacing.h"

@interface OADParagraphProperties : OADCharacterProperties {
    int mLevel;
    OADBulletSize *mBulletSize;
    OADBulletColor *mBulletColor;
    OADBulletFont *mBulletFont;
    OADBulletProperties *mBulletProperties;
    OADTextSpacing *mLineSpacing;
    OADTextSpacing *mBeforeSpacing;
    OADTextSpacing *mAfterSpacing;
    NSArray *mTabStops;
    float mLeftMargin;
    float mRightMargin;
    float mIndent;
    float mDefaultTab;
    int mBulletCharSet;
    unsigned char mAlign;
    unsigned char mWrap;
    unsigned char mFontAlign;
    BOOL mIsLatinLineBreak;
    BOOL mIsHangingPunctuation;
    BOOL mHasLevel;
    BOOL mHasLeftMargin;
    BOOL mHasRightMargin;
    BOOL mHasIndent;
    BOOL mHasDefaultTab;
    BOOL mHasBulletCharSet;
    BOOL mHasAlign;
    BOOL mHasWrap;
    BOOL mHasFontAlign;
    BOOL mHasIsLatinLineBreak;
    BOOL mHasIsHangingPunctuation;
}




+(id)defaultProperties;
-(BOOL)hasAfterSpacing;
-(BOOL)hasAlign;
-(BOOL)hasBeforeSpacing;
-(BOOL)hasBulletCharSet;
-(BOOL)hasBulletColor;
-(BOOL)hasBulletFont;
-(BOOL)hasBulletProperties;
-(BOOL)hasBulletSize;
-(BOOL)hasDefaultTab;
-(BOOL)hasFontAlign;
-(BOOL)hasIndent;
-(BOOL)hasIsHangingPunctuation;
-(BOOL)hasIsLatinLineBreak;
-(BOOL)hasLeftMargin;
-(BOOL)hasLevel;
-(BOOL)hasLineSpacing;
-(BOOL)hasRightMargin;
-(BOOL)hasTabStops;
-(BOOL)hasWrap;
-(BOOL)isAnythingOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isHangingPunctuation;
-(BOOL)isLatinLineBreak;
-(CGFloat)nonOveridenLeftMargin;
-(NSUInteger)hash;
-(float)defaultTab;
-(float)indent;
-(float)leftMargin;
-(float)rightMargin;
-(id)afterSpacing;
-(id)beforeSpacing;
-(id)bulletColor;
-(id)bulletFont;
-(id)bulletProperties;
-(id)bulletSize;
-(id)description;
-(id)init;
-(id)initWithDefaults;
-(id)lineSpacing;
-(id)tabStops;
-(int)bulletCharSet;
-(int)level;
-(unsigned char)align;
-(unsigned char)fontAlign;
-(unsigned char)wrap;
-(void)fixPropertiesForChangingParentPreservingEffectiveValues:(id)arg0 ;
-(void)overrideWithProperties:(id)arg0 ;
-(void)removeUnnecessaryOverrides;
-(void)setAfterSpacing:(id)arg0 ;
-(void)setAlign:(unsigned char)arg0 ;
-(void)setBeforeSpacing:(id)arg0 ;
-(void)setBulletCharSet:(int)arg0 ;
-(void)setBulletColor:(id)arg0 ;
-(void)setBulletFont:(id)arg0 ;
-(void)setBulletProperties:(id)arg0 ;
-(void)setBulletSize:(id)arg0 ;
-(void)setDefaultTab:(float)arg0 ;
-(void)setFontAlign:(unsigned char)arg0 ;
-(void)setIndent:(float)arg0 ;
-(void)setIsHangingPunctuation:(BOOL)arg0 ;
-(void)setIsLatinLineBreak:(BOOL)arg0 ;
-(void)setLeftMargin:(float)arg0 ;
-(void)setLevel:(int)arg0 ;
-(void)setLineSpacing:(id)arg0 ;
-(void)setRightMargin:(float)arg0 ;
-(void)setTabStops:(id)arg0 ;
-(void)setWrap:(unsigned char)arg0 ;


@end


#endif