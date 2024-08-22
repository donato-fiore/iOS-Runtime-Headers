// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDFONT_H
#define EDFONT_H

@class NSString;
@protocol NSCopying, EDImmutableObject;

#import <Foundation/Foundation.h>

#import "EDResources.h"
#import "EDColorReference.h"

@interface EDFont : NSObject <NSCopying, EDImmutableObject>

 {
    EDResources *mResources;
    NSString *mName;
    EDColorReference *mColorReference;
    int mUnderline;
    int mScript;
    CGFloat mHeightInTwips;
    int mCharSet;
    int mFamily;
    unsigned int mWeight;
    BOOL mBold;
    BOOL mItalic;
    BOOL mShadow;
    BOOL mStrike;
    BOOL mOutline;
    BOOL mUnderlineOverridden;
    BOOL mStrikeOverridden;
    BOOL mBoldOverridden;
    BOOL mWeightOverridden;
    BOOL mItalicOverridden;
    BOOL mHeightOverridden;
    BOOL mNameOverridden;
    BOOL mDoNotModify;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fontWithResources:(id)arg0 ;
-(BOOL)isBold;
-(BOOL)isBoldOverridden;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFont:(id)arg0 ;
-(BOOL)isHeightOverridden;
-(BOOL)isItalic;
-(BOOL)isItalicOverridden;
-(BOOL)isNameOverridden;
-(BOOL)isOutline;
-(BOOL)isShadow;
-(BOOL)isStrike;
-(BOOL)isStrikeOverridden;
-(BOOL)isUnderlineOverridden;
-(BOOL)isWeightOverridden;
-(CGFloat)height;
-(id)color;
-(id)colorReference;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithResources:(id)arg0 ;
-(id)name;
-(int)charSet;
-(int)family;
-(int)script;
-(int)underline;
-(unsigned int)weight;
-(void)setBold:(BOOL)arg0 ;
-(void)setCharSet:(int)arg0 ;
-(void)setColor:(id)arg0 ;
-(void)setColorReference:(id)arg0 ;
-(void)setDoNotModify:(BOOL)arg0 ;
-(void)setFamily:(int)arg0 ;
-(void)setHeight:(CGFloat)arg0 ;
-(void)setItalic:(BOOL)arg0 ;
-(void)setName:(id)arg0 ;
-(void)setOutline:(BOOL)arg0 ;
-(void)setScript:(int)arg0 ;
-(void)setShadow:(BOOL)arg0 ;
-(void)setStrike:(BOOL)arg0 ;
-(void)setUnderline:(int)arg0 ;
-(void)setWeight:(unsigned int)arg0 ;


@end


#endif