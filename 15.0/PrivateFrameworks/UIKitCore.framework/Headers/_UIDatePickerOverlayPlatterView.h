// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKEROVERLAYPLATTERVIEW_H
#define _UIDATEPICKEROVERLAYPLATTERVIEW_H

@class NSLayoutConstraint;


#import "UIView.h"
#import "UIVisualEffectView.h"
#import "UIDatePicker.h"
#import "_UIRoundedRectShadowView.h"

@interface _UIDatePickerOverlayPlatterView : UIView

@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) BOOL accessoryViewIgnoresDefaultInsets; // ivar: _accessoryViewIgnoresDefaultInsets
@property (readonly, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (readonly, nonatomic) NSLayoutConstraint *contentHeightConstraint; // ivar: _contentHeightConstraint
@property (readonly, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, nonatomic) NSLayoutConstraint *contentWidthConstraint; // ivar: _contentWidthConstraint
@property (readonly, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, nonatomic) UIView *previousContentView; // ivar: _previousContentView
@property (readonly, nonatomic) _UIRoundedRectShadowView *shadowView; // ivar: _shadowView


-(id)initWithDatePicker:(id)arg0 accessoryView:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(struct CGSize )preferredPlatterSize;
-(void)layoutSubviews;
-(void)prepareDatePickerTransitionWithDatePicker:(id)arg0 ;
-(void)replaceDatePicker:(id)arg0 ;


@end


#endif