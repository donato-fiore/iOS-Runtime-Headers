// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HACCPSESETTINGS_H
#define HACCPSESETTINGS_H

@class UIView, UILabel, NSString, NSNumberFormatter, UIVisualEffectView;
@protocol HACCContentModule, HACCContentModuleDelegate;


#import "HUITitleValueSlider.h"

@interface HACCPSESettings : UIView <HACCContentModule>

 {
    BOOL _didSetVibrancy;
}


@property (retain, nonatomic) HUITitleValueSlider *amplificationSlider; // ivar: _amplificationSlider
@property (retain, nonatomic) UIView *balanceContainer; // ivar: _balanceContainer
@property (retain, nonatomic) UILabel *balanceLabel; // ivar: _balanceLabel
@property (retain, nonatomic) HUITitleValueSlider *balanceSlider; // ivar: _balanceSlider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HACCContentModuleDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger module; // ivar: module
@property (retain, nonatomic) HUITitleValueSlider *noiseSupressorSlider; // ivar: _noiseSupressorSlider
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (readonly) Class superclass;
@property (retain, nonatomic) UIVisualEffectView *titleContainer; // ivar: _titleContainer
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIVisualEffectView *toneContainer; // ivar: _toneContainer
@property (retain, nonatomic) UILabel *toneLabel; // ivar: _toneLabel
@property (retain, nonatomic) HUITitleValueSlider *toneSlider; // ivar: _toneSlider


-(BOOL)enabled;
-(id)contentValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)amplificationSliderDidChange:(id)arg0 ;
-(void)balanceSliderDidChange:(id)arg0 ;
-(void)layoutSubviews;
-(void)noiseSliderDidChange:(id)arg0 ;
-(void)toneSliderDidChange:(id)arg0 ;
-(void)updateAccessibilityBalanceValue;
-(void)updateAccessibilityToneValue;
-(void)updateValue;


@end


#endif