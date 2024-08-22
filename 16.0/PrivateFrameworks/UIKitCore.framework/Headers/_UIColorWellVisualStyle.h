// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICOLORWELLVISUALSTYLE_H
#define _UICOLORWELLVISUALSTYLE_H

@class NSString;
@protocol _UIColorWellControl;


#import "UIView.h"
#import "UIColor.h"

@interface _UIColorWellVisualStyle : UIView

@property (weak, nonatomic) NSObject<_UIColorWellControl> *colorWell; // ivar: _colorWell
@property (retain, nonatomic) NSString *pickerTitle; // ivar: _pickerTitle
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (nonatomic) BOOL supportsAlpha; // ivar: _supportsAlpha
@property (nonatomic) BOOL wantsExtraTouchInsets; // ivar: _wantsExtraTouchInsets
@property (nonatomic) BOOL wantsSystemDragAndDrop; // ivar: _wantsSystemDragAndDrop


-(id)initWithColorWell:(id)arg0 ;
-(struct CGSize )intrinsicSizeWithinSize:(struct CGSize )arg0 ;


@end


#endif