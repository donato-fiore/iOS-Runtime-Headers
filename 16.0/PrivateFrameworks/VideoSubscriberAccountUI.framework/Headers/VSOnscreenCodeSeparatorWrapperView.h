// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSONSCREENCODESEPARATORWRAPPERVIEW_H
#define VSONSCREENCODESEPARATORWRAPPERVIEW_H

@class UIView, UILabel;


#import "VSOnscreenCodeWrapperView.h"

@interface VSOnscreenCodeSeparatorWrapperView : VSOnscreenCodeWrapperView

@property (retain, nonatomic) UIView *lowerSeparator; // ivar: _lowerSeparator
@property (retain, nonatomic) UILabel *orLabel; // ivar: _orLabel
@property (retain, nonatomic) UIView *upperSeparator; // ivar: _upperSeparator


-(id)init;
-(void)setupLayout;
-(void)setupLocalizedStrings;
-(void)setupViews;


@end


#endif