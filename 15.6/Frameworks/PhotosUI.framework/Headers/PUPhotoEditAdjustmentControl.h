// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITADJUSTMENTCONTROL_H
#define PUPHOTOEDITADJUSTMENTCONTROL_H

@class UIControl, UIColor, NSNumberFormatter, UIImageView, NSMapTable, UILabel;


#import "PUPhotoEditCircularIndicatorView.h"

@interface PUPhotoEditAdjustmentControl : UIControl

@property (retain, nonatomic) UIColor *alternateColor; // ivar: _alternateColor
@property (retain, nonatomic) PUPhotoEditCircularIndicatorView *circularIndicatorView; // ivar: _circularIndicatorView
@property (retain, nonatomic) UIColor *defaultColor; // ivar: _defaultColor
@property (nonatomic) CGFloat defaultValue; // ivar: _defaultValue
@property (nonatomic) BOOL displayMappedValue; // ivar: _displayMappedValue
@property (retain, nonatomic) NSNumberFormatter *formatter; // ivar: _formatter
@property (nonatomic) CGFloat identityValue; // ivar: _identityValue
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (nonatomic) BOOL shouldScaleDownImage; // ivar: _shouldScaleDownImage
@property (nonatomic) BOOL shouldShowCircularRing; // ivar: _shouldShowCircularRing
@property (nonatomic) BOOL shouldShowValueLabel; // ivar: _shouldShowValueLabel
@property (retain, nonatomic) NSMapTable *stateToContentMap; // ivar: _stateToContentMap
@property (nonatomic) CGFloat value; // ivar: _value
@property (nonatomic) BOOL valueChanged; // ivar: _valueChanged
@property (retain, nonatomic) UILabel *valueLabel; // ivar: _valueLabel


-(BOOL)_setContentPropertyKey:(id)arg0 withValue:(id)arg1 forState:(NSUInteger)arg2 ;
-(id)_contentForState:(NSUInteger)arg0 ;
-(id)_currentImage;
-(id)colorForState:(NSUInteger)arg0 ;
-(id)imageForState:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_layoutImageView;
-(void)_resetAllValues;
-(void)_setContent:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)_setup;
-(void)_setupImageView;
-(void)_updateFormatter;
-(void)_updateImageView;
-(void)_updateRingVisibility;
-(void)_updateSubviewColors;
-(void)_updateSubviewValues;
-(void)_updateSubviewVisibility;
-(void)_updateSubviews;
-(void)layoutSubviews;
-(void)resetToDefaults;
-(void)setColor:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImage:(id)arg0 forState:(NSUInteger)arg1 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif