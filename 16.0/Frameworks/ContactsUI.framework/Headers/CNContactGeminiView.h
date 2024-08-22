// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNCONTACTGEMINIVIEW_H
#define CNCONTACTGEMINIVIEW_H

@class UIView, NSDictionary, NSArray, UIImageView, UILabel, UILayoutGuide, CNGeminiResult, UIColor;


#import "CNGeminiBadge.h"

@interface CNContactGeminiView : UIView

@property (copy, nonatomic) NSDictionary *ab_textAttributes; // ivar: _ab_textAttributes
@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (nonatomic) BOOL allowsPickerActions; // ivar: _allowsPickerActions
@property (retain, nonatomic) UIImageView *chevronView; // ivar: _chevronView
@property (nonatomic) BOOL didCalculateLayout; // ivar: _didCalculateLayout
@property (retain, nonatomic) CNGeminiBadge *geminiBadge; // ivar: _geminiBadge
@property (retain, nonatomic) UILabel *geminiLabel; // ivar: _geminiLabel
@property (retain, nonatomic) UILayoutGuide *geminiLabelLayoutGuide; // ivar: _geminiLabelLayoutGuide
@property (retain, nonatomic) CNGeminiResult *geminiResult; // ivar: _geminiResult
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIColor *highlightedColor; // ivar: _highlightedColor
@property (nonatomic) BOOL isUsingTwoLineLayout; // ivar: _isUsingTwoLineLayout
@property (retain, nonatomic) UILayoutGuide *layoutGuide; // ivar: _layoutGuide
@property (retain, nonatomic) UILabel *typeLabel; // ivar: _typeLabel


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_hasBaseline;
-(BOOL)doesLayoutRequireTwoLines;
-(BOOL)shouldDisplayBadge;
-(BOOL)shouldDisplayChevron;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)localizedChannelUsageFromGeminiResult:(id)arg0 ;
-(id)localizedLabelFromGeminiResult:(id)arg0 ;
-(id)singleLineLayoutConstraints;
-(id)twoLineLayoutConstraints;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct CGSize )sizeForSingleLineLayoutFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeForTwoLineLayoutFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)calculateLayoutIfNeeded;
-(void)layoutSubviews;
-(void)setNeedsCalculateLayout;
-(void)updateConstraints;


@end


#endif