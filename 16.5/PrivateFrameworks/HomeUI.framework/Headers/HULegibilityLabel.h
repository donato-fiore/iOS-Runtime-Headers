// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HULEGIBILITYLABEL_H
#define HULEGIBILITYLABEL_H

@class UIView, UILabel, _UILegibilityView, NSArray, UILayoutGuide, UIColor, NSAttributedString, UIFont, _UILegibilitySettings, NSString;
@protocol HUActsAsLabel;



@interface HULegibilityLabel : UIView <HUActsAsLabel>

 {
    UILabel *_lookasideLabel;
    _UILegibilityView *_legibilityView;
    BOOL _isDirty;
    NSInteger _options;
    NSArray *_legibilityConstraints;
    UILayoutGuide *_firstBaselineLayoutGuide;
    UILayoutGuide *_lastBaselineLayoutGuide;
    UIColor *_textColorOverride;
}


@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, nonatomic) CGFloat baselineOffset;
@property (readonly, nonatomic) CGFloat firstBaselineOffsetFromBottom;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly, nonatomic) CGFloat lastBaselineOffsetFromBottom;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (nonatomic) NSInteger textAlignment;
@property (copy, nonatomic) UIColor *textColor;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 text:(id)arg2 font:(id)arg3 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 text:(id)arg2 font:(id)arg3 options:(NSInteger)arg4 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_markOurselfDirty;
-(void)_updateLabelForLegibilitySettings;
-(void)_updateLegibilityView;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setOptions:(NSInteger)arg0 ;


@end


#endif