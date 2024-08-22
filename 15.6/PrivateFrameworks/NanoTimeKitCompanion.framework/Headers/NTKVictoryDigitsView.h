// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKVICTORYDIGITSVIEW_H
#define NTKVICTORYDIGITSVIEW_H

@class UIView, CLKDevice, CAGradientLayer, UIColor, NSString;


#import "NTKVictoryLabel.h"

@interface NTKVictoryDigitsView : UIView {
    CLKDevice *_device;
    NTKVictoryLabel *_label;
    BOOL _hasSetAppearance;
    CAGradientLayer *_dimmingOverlay;
    BOOL _dimIsUpper;
}


@property (nonatomic) NSInteger appearance; // ivar: _appearance
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *digitText;
@property (retain, nonatomic) UIColor *outlineBackgroundColor; // ivar: _outlineBackgroundColor
@property (nonatomic) CGFloat scale; // ivar: _scale


+(id)_fontForAppearance:(NSInteger)arg0 forDevice:(id)arg1 ;
-(id)_createLabel;
-(id)initForDevice:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFonts;
-(void)applyColor;
-(void)layoutSubviews;
-(void)prepareAppearance:(NSInteger)arg0 ;
-(void)setDimmingFactor:(CGFloat)arg0 isUpper:(BOOL)arg1 ;


@end


#endif