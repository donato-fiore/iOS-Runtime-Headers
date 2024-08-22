// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PKINKATTRIBUTESPICKERVIEW_H
#define _PKINKATTRIBUTESPICKERVIEW_H

@class UIView, NSString;
@protocol _PKColorAlphaSliderDelegate, _PKInkAttributesPickerViewDelegate;


#import "_PKColorAlphaSlider.h"
#import "PKInk.h"
#import "_PKInkThicknessPicker.h"
#import "PKToolConfiguration.h"

@interface _PKInkAttributesPickerView : UIView <_PKColorAlphaSliderDelegate>



@property (retain, nonatomic) _PKColorAlphaSlider *colorAlphaSlider; // ivar: _colorAlphaSlider
@property (nonatomic) NSInteger colorUserInterfaceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_PKInkAttributesPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayMode; // ivar: _displayMode
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PKInk *ink; // ivar: _ink
@property (nonatomic) CGFloat minimumOpacityValue; // ivar: _minimumOpacityValue
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView
@property (readonly) Class superclass;
@property (retain, nonatomic) _PKInkThicknessPicker *thicknessPicker; // ivar: _thicknessPicker
@property (retain, nonatomic) PKToolConfiguration *toolConfiguration; // ivar: _toolConfiguration


-(id)initWithInk:(id)arg0 toolConfiguration:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_colorAlphaSliderUserDidEndDraggingSlider:(id)arg0 ;
-(void)_colorAlphaSliderUserDidStartDraggingSlider:(id)arg0 ;
-(void)_opacityValueChanged:(id)arg0 ;
-(void)_thicknessValueChanged:(id)arg0 ;
-(void)_updateUI;
-(void)layoutSubviews;


@end


#endif