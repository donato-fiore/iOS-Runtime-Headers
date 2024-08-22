// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUICONFIRMATIONHUDVIEW_H
#define SEARCHUICONFIRMATIONHUDVIEW_H

@class UIView, UIVisualEffectView, UILabel;


#import "SearchUICheckView.h"

@interface SearchUIConfirmationHUDView : UIView

@property (retain, nonatomic) SearchUICheckView *checkView; // ivar: _checkView
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


-(id)init;
-(void)animateCheckmark;
-(void)layoutSubviews;


@end


#endif