// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKREFERENCERANGEVIEW_H
#define HKREFERENCERANGEVIEW_H

@class UIView, UILabel, UIFont, NSString;


#import "HKReferenceRangeViewConfiguration.h"
#import "HKReferenceRangeDotView.h"
#import "HKReferenceRangeViewData.h"

@interface HKReferenceRangeView : UIView {
    CGFloat _lowValueXPosition;
    CGFloat _highValueXPosition;
    CGFloat _currentValueXPosition;
    NSInteger _valueDirection;
    CGFloat _intrinsicHeight;
    BOOL _showOutOfRangeIndicator;
}


@property (readonly, nonatomic) HKReferenceRangeViewConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) UILabel *currentValueLabel; // ivar: _currentValueLabel
@property (retain, nonatomic) HKReferenceRangeDotView *currentValueView; // ivar: _currentValueView
@property (copy, nonatomic) HKReferenceRangeViewData *data; // ivar: _data
@property (retain, nonatomic) UIFont *dynamicTypeAnchorFont; // ivar: _dynamicTypeAnchorFont
@property (retain, nonatomic) UILabel *highValueLabel; // ivar: _highValueLabel
@property (retain, nonatomic) UILabel *lowValueLabel; // ivar: _lowValueLabel
@property (copy, nonatomic) NSString *multiValueSeparator; // ivar: _multiValueSeparator
@property (retain, nonatomic) UILabel *outOfRangeLabel; // ivar: _outOfRangeLabel
@property (retain, nonatomic) UIFont *overriddenValueFont; // ivar: _overriddenValueFont
@property (retain, nonatomic) UIView *referenceRangeContainerView; // ivar: _referenceRangeContainerView
@property (retain, nonatomic) UIView *referenceRangeView; // ivar: _referenceRangeView
@property (retain, nonatomic) UIFont *unitFont; // ivar: _unitFont
@property (retain, nonatomic) UIFont *valueFont; // ivar: _valueFont


-(BOOL)_hasReferenceRange;
-(id)_configuredPreferredFontForTextStyle:(id)arg0 symbolicTraits:(unsigned int)arg1 ;
-(id)_generateAttributedValueStringWithOverrideColor:(id)arg0 ;
-(id)_generateMultilineAttributedValueStringForOriginalString:(id)arg0 ;
-(id)_outOfRangeColor;
-(id)initWithFrame:(struct CGRect )arg0 configuration:(id)arg1 ;
-(id)unitLabelFont;
-(id)valueLabelFont;
-(struct CGRect )_assureLabelFrameWithinBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyNormalizedValuesToView;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_layoutCurrentValueOnly;
-(void)_layoutFullReferenceRange;
-(void)_normalizeValuesIfNeeded;
-(void)_setupSubviews;
-(void)_updateContainerBorderColors;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateWithData:(id)arg0 ;


@end


#endif