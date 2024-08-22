// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNQUICKACTIONBUTTON_H
#define CNQUICKACTIONBUTTON_H

@class UIView, NSArray, UIButton, UILabel;
@protocol CNQuickActionButtonDelegate;


#import "CNQuickAction.h"

@interface CNQuickActionButton : UIView

@property (retain, nonatomic) CNQuickAction *action; // ivar: _action
@property (retain, nonatomic) NSArray *activatedConstraints; // ivar: _activatedConstraints
@property (retain, nonatomic) UIButton *button; // ivar: _button
@property (weak, nonatomic) NSObject<CNQuickActionButtonDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UILabel *label; // ivar: _label
@property (nonatomic) BOOL showBackgroundPlatter; // ivar: _showBackgroundPlatter
@property (nonatomic) BOOL showTitle; // ivar: _showTitle


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)onLongPress:(id)arg0 ;
-(void)performAction;
-(void)updateConstraints;


@end


#endif