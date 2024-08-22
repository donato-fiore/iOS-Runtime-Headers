// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDLISTLEVEL_H
#define WDLISTLEVEL_H

@class NSMutableString;

#import <Foundation/Foundation.h>

#import "WDDocument.h"
#import "WDParagraphProperties.h"
#import "WDCharacterProperties.h"
#import "WDOfficeArt.h"

@interface WDListLevel : NSObject {
    WDDocument *mDocument;
    WDParagraphProperties *mParagraphProperties;
    WDCharacterProperties *mCharacterProperties;
    WDOfficeArt *mImage;
    NSInteger mStartNumber;
    int mNumberFormat;
    BOOL mRestartNumbering;
    NSInteger mRestartLevel;
    BOOL mLegal;
    int mSuffix;
    NSMutableString *mText;
    BOOL mLegacy;
    NSInteger mLegacySpace;
    NSInteger mLegacyIndent;
    int mJustification;
}




-(BOOL)imageBullet;
-(BOOL)imageBulletOverridden;
-(BOOL)justificationOverridden;
-(BOOL)legacy;
-(BOOL)legal;
-(BOOL)legalOverridden;
-(BOOL)numberFormatOverridden;
-(BOOL)restartLevelOverridden;
-(BOOL)restartNumbering;
-(BOOL)restartNumberingOverridden;
-(BOOL)startNumberOverridden;
-(BOOL)suffixOverridden;
-(BOOL)textOverridden;
-(NSInteger)legacyIndent;
-(NSInteger)legacySpace;
-(NSInteger)restartLevel;
-(NSInteger)startNumber;
-(id)characterProperties;
-(id)description;
-(id)image;
-(id)initWithDocument:(id)arg0 ;
-(id)paragraphProperties;
-(id)text;
-(int)justification;
-(int)numberFormat;
-(int)suffix;
-(void)setImage:(id)arg0 ;
-(void)setJustification:(int)arg0 ;
-(void)setLegacy:(BOOL)arg0 ;
-(void)setLegacyIndent:(NSInteger)arg0 ;
-(void)setLegacySpace:(NSInteger)arg0 ;
-(void)setLegal:(BOOL)arg0 ;
-(void)setNumberFormat:(int)arg0 ;
-(void)setRestartLevel:(NSInteger)arg0 ;
-(void)setRestartNumbering:(BOOL)arg0 ;
-(void)setStartNumber:(NSInteger)arg0 ;
-(void)setSuffix:(int)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif