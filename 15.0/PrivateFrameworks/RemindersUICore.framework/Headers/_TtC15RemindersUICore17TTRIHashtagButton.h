// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15REMINDERSUICORE17TTRIHASHTAGBUTTON_H
#define _TTC15REMINDERSUICORE17TTRIHASHTAGBUTTON_H

@class UIButton, NSString;



@interface _TtC15RemindersUICore17TTRIHashtagButton : UIButton {
    ? focusDelegate;
}


@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) BOOL canBecomeFocused;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)updateConfiguration;


@end


#endif