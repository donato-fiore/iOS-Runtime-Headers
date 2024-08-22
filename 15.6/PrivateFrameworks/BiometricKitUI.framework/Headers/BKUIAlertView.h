// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BKUIALERTVIEW_H
#define BKUIALERTVIEW_H

@class UIView, UIAlertController, UILabel;
@protocol OS_os_log;



@interface BKUIAlertView : UIView {
    UIAlertController *_alertController;
    CGFloat _alertHudTextStartTime;
    NSObject<OS_os_log> *bkui_alert_view_log;
}


@property (nonatomic) CGFloat alertHudMinDisplayTime; // ivar: _alertHudMinDisplayTime
@property (weak, nonatomic) UILabel *alertHudText; // ivar: _alertHudText
@property (nonatomic) CGFloat alertHudTimeout; // ivar: _alertHudTimeout
@property (weak, nonatomic) UIView *alertHudView; // ivar: _alertHudView
@property (nonatomic) SEL cancelButtonSelector; // ivar: _cancelButtonSelector
@property (nonatomic) SEL otherButtonSelector; // ivar: _otherButtonSelector
@property (weak, nonatomic) id *parent; // ivar: _parent


-(BOOL)isAlertHidden;
-(id)init;
-(void)_hideAlertHudView;
-(void)_init;
-(void)_setFadeAnimation:(id)arg0 ;
-(void)hideAnimated:(BOOL)arg0 ;
-(void)show:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 viewController:(id)arg3 ;
-(void)show:(id)arg0 title:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelButtonSelector:(SEL)arg4 otherButtonTitle:(id)arg5 otherButtonSelector:(SEL)arg6 viewController:(id)arg7 ;
-(void)show:(id)arg0 title:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 cancelButtonSelector:(SEL)arg4 viewController:(id)arg5 ;
-(void)showAlert:(id)arg0 message:(id)arg1 cancelButtonTitle:(id)arg2 otherButtonTitle:(id)arg3 viewController:(id)arg4 ;


@end


#endif