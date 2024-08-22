// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKEMBOSSEDCOLORPICKERBUTTON_H
#define _PKEMBOSSEDCOLORPICKERBUTTON_H

@class UIImageView, CAShapeLayer;


#import "PKInkColorButton.h"
#import "_PKHueSpectrumView.h"

@interface _PKEmbossedColorPickerButton : PKInkColorButton

@property (retain, nonatomic) UIImageView *embossImageView; // ivar: _embossImageView
@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView; // ivar: _hueSpectrumView
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer; // ivar: _selectedColorLayer
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer; // ivar: _strokeShapeLayer


-(id)initWithColor:(id)arg0 isCompact:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif