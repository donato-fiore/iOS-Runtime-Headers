// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLWHEELPICKERVIEWPROFILE_H
#define HUQUICKCONTROLWHEELPICKERVIEWPROFILE_H

@class UIColor;


#import "HUQuickControlViewProfile.h"

@interface HUQuickControlWheelPickerViewProfile : HUQuickControlViewProfile

@property (retain, nonatomic) UIColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (nonatomic) CGFloat selectedRowBorderWidth; // ivar: _selectedRowBorderWidth
@property (nonatomic) CGFloat selectedRowCornerRadius; // ivar: _selectedRowCornerRadius
@property (nonatomic) BOOL showOffState; // ivar: _showOffState
@property (nonatomic) BOOL sizeToFitTextWidth; // ivar: _sizeToFitTextWidth
@property (nonatomic) NSUInteger style; // ivar: _style
@property (nonatomic) BOOL uppercaseRowTitles; // ivar: _uppercaseRowTitles


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)_setDefaultStyleProperties;
-(void)_setMultiStateStyleProperties;


@end


#endif