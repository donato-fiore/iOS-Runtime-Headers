// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBUILEGIBILITYLABEL_H
#define SBUILEGIBILITYLABEL_H

@class UIView, UILabel, UIColor, NSAttributedString, NSString, UIFont, _UILegibilitySettings;
@protocol SBUILegibility, SBUILegibilityEngineProviding, SBUILegibilityEngine;


#import "SBUILegibilityView.h"

@interface SBUILegibilityLabel : UIView <SBUILegibility, SBUILegibilityEngineProviding>

 {
    UILabel *_lookasideLabel;
    SBUILegibilityView *_legibilityView;
    BOOL _isDirty;
    UIColor *_textColorOverride;
}


@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (readonly, nonatomic) CGFloat baselineOffset;
@property (readonly, nonatomic) UIEdgeInsets characterOverflowInsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat firstBaselineOffsetFromBottom;
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (readonly) NSUInteger hash;
@property (nonatomic) float hyphenationFactor;
@property (readonly, nonatomic) CGFloat lastBaselineOffsetFromBottom;
@property (retain, nonatomic) NSObject<SBUILegibilityEngine> *legibilityEngine;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat minimumScaleFactor;
@property (nonatomic) NSInteger numberOfLines;
@property (nonatomic) NSInteger options; // ivar: _options
@property (nonatomic) CGFloat strength; // ivar: _strength
@property (copy, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;
@property (nonatomic) NSInteger textAlignment;
@property (copy, nonatomic) UIColor *textColor;


-(BOOL)usesColorFilters;
-(BOOL)usesSecondaryColor;
-(id)drawingColor;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 string:(id)arg2 font:(id)arg3 ;
-(id)initWithSettings:(id)arg0 strength:(CGFloat)arg1 string:(id)arg2 font:(id)arg3 options:(NSInteger)arg4 ;
-(id)shadowColor;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)_markOurselfDirty;
-(void)_updateLabelColor;
-(void)_updateLabelForLegibilitySettings;
-(void)_updateLegibilityView;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif