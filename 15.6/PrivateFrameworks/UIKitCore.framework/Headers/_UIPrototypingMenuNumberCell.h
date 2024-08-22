// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIPROTOTYPINGMENUNUMBERCELL_H
#define _UIPROTOTYPINGMENUNUMBERCELL_H

@class UIPrototypingMenuCell;


#import "UIStackView.h"
#import "UILabel.h"
#import "_UIPrototypingMenuSlider.h"
#import "UITapGestureRecognizer.h"

@interface _UIPrototypingMenuNumberCell : UIPrototypingMenuCell

@property (nonatomic) CGFloat current; // ivar: _current
@property (retain, nonatomic) UIStackView *floatValueStackView; // ivar: _floatValueStackView
@property (nonatomic) CGFloat max; // ivar: _max
@property (retain, nonatomic) UILabel *maxLabel; // ivar: _maxLabel
@property (nonatomic) CGFloat min; // ivar: _min
@property (retain, nonatomic) UILabel *minLabel; // ivar: _minLabel
@property (retain, nonatomic) _UIPrototypingMenuSlider *slider; // ivar: _slider
@property (retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // ivar: _tapRecognizer


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_prototypingSettingDidChange;
-(void)_sliderDidChangeValue:(id)arg0 ;
-(void)_tapRecognizerDidRecognizer:(id)arg0 ;


@end


#endif