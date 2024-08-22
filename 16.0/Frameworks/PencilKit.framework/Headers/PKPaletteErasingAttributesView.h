// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEERASINGATTRIBUTESVIEW_H
#define PKPALETTEERASINGATTRIBUTESVIEW_H

@class UIView, NSArray, UISegmentedControl;


#import "_PKInkThicknessPicker.h"

@interface PKPaletteErasingAttributesView : UIView

@property (nonatomic) NSInteger eraserType;
@property (retain, nonatomic) NSArray *hiddenThicknessPickerConstraints; // ivar: _hiddenThicknessPickerConstraints
@property (nonatomic) BOOL hideWeightPicker; // ivar: _hideWeightPicker
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) _PKInkThicknessPicker *thicknessPicker; // ivar: _thicknessPicker
@property (retain, nonatomic) NSArray *visibleThicknessPickerConstraints; // ivar: _visibleThicknessPickerConstraints


-(BOOL)_canShowWhileLocked;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_updateThicknessPickerToolConfiguration;


@end


#endif