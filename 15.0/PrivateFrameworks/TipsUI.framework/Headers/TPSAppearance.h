// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSAPPEARANCE_H
#define TPSAPPEARANCE_H

@class UITraitCollection;

#import <Foundation/Foundation.h>


@interface TPSAppearance : NSObject

@property (readonly, nonatomic) CGFloat displayScale;
@property (nonatomic) NSUInteger mediaSizeType; // ivar: _mediaSizeType
@property (nonatomic) CGSize size; // ivar: _size
@property (nonatomic) CGFloat sizeToScreenRatio; // ivar: _sizeToScreenRatio
@property (retain, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


+(BOOL)isMacUI;
+(BOOL)isPhoneUI;
+(CGFloat)buttonHeight;
+(CGFloat)displayMultiplier;
+(CGFloat)introOutroTitleTopPadding;
+(id)bodyFont;
+(id)boldTextFont;
+(id)defaultBackgroundColor;
+(id)defaultLabelColor;
+(id)defaultTextLabelFont;
+(id)footnoteFont;
+(id)headlineFont;
+(id)italicTextFont;
+(id)language;
+(id)preferredFontForTextStyle:(id)arg0 ;
+(id)preferredFontForTextStyle:(id)arg0 languageCode:(id)arg1 ;
+(id)preferredFontForTextStyle:(id)arg0 symoblicTraits:(unsigned int)arg1 languageCode:(id)arg2 ;
+(id)secondaryBackgroundColor;
+(id)secondaryLabelColor;
+(id)subheadlineFont;
+(id)systemFontOfSize:(CGFloat)arg0 weight:(CGFloat)arg1 ;
+(id)titleLabelFont;
-(BOOL)isCompactLayout;
-(BOOL)sideAppMode;
-(CGFloat)displayMultiplierWithValue:(CGFloat)arg0 ;
-(CGFloat)heightToWidthRatioFromSizes:(id)arg0 mediaSizeType:(NSUInteger)arg1 defaultValue:(CGFloat)arg2 ;
-(CGFloat)nativeSizeForValue:(CGFloat)arg0 ;
-(id)initAppearanceWithTraits:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGSize )sizeWithSizes:(id)arg0 mediaSizeType:(NSUInteger)arg1 ;
-(void)updateAppearanceWithSize:(struct CGSize )arg0 ;
-(void)updateMediaSizeType;


@end


#endif