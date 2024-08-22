// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PKFLATCOLORPICKERBUTTON_H
#define _PKFLATCOLORPICKERBUTTON_H

@class CAShapeLayer;


#import "PKInkColorButton.h"
#import "_PKHueSpectrumView.h"

@interface _PKFlatColorPickerButton : PKInkColorButton

@property (retain, nonatomic) _PKHueSpectrumView *hueSpectrumView; // ivar: _hueSpectrumView
@property (nonatomic) CGRect lastRenderedBounds; // ivar: _lastRenderedBounds
@property (retain, nonatomic) CAShapeLayer *selectedColorLayer; // ivar: _selectedColorLayer
@property (retain, nonatomic) CAShapeLayer *strokeShapeLayer; // ivar: _strokeShapeLayer


-(id)initWithColor:(id)arg0 isCompact:(BOOL)arg1 ;
-(void)layoutSubviews;


@end


#endif