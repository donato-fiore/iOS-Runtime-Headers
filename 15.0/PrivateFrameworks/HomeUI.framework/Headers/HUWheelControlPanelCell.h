// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUWHEELCONTROLPANELCELL_H
#define HUWHEELCONTROLPANELCELL_H

@class NSString, UILabel, NSArray, NSNumber, UIView, NSFormatter;
@protocol HUWheelControlViewDelegate;


#import "HUControlPanelCell.h"
#import "HUWheelControlPopUpButton.h"
#import "HUWheelControlView.h"

@interface HUWheelControlPanelCell : HUControlPanelCell <HUWheelControlViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) UILabel *detailLabel; // ivar: _detailLabel
@property (copy, nonatomic) NSString *detailText;
@property (readonly, nonatomic, getter=isDisabled) BOOL disabled;
@property (retain, nonatomic) NSArray *dynamicConstraints; // ivar: _dynamicConstraints
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSNumber *maxValue; // ivar: _maxValue
@property (retain, nonatomic) NSNumber *minValue; // ivar: _minValue
@property (readonly, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (retain, nonatomic) NSArray *staticConstraints; // ivar: _staticConstraints
@property (retain, nonatomic) NSNumber *stepValue; // ivar: _stepValue
@property (readonly) Class superclass;
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (copy, nonatomic) NSString *titleText;
@property (retain, nonatomic) NSFormatter *valueFormatter; // ivar: _valueFormatter
@property (retain, nonatomic) HUWheelControlPopUpButton *wheelButton; // ivar: _wheelButton
@property (retain, nonatomic) NSArray *wheelValues; // ivar: _wheelValues
@property (retain, nonatomic) HUWheelControlView *wheelView; // ivar: _wheelView
@property (nonatomic) BOOL wheelViewVisible; // ivar: _wheelViewVisible


+(BOOL)requiresConstraintBasedLayout;
-(id)_defaultMaxValue;
-(id)_defaultMinValue;
-(id)_defaultStepValue;
-(id)_defaultValueFormatter;
-(id)allControlViews;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_generateWheelValuesWithMinValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 stepValue:(CGFloat)arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;
-(void)wheelControlView:(id)arg0 didUpdateValue:(id)arg1 ;


@end


#endif