// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT29CONVERSATIONHUDVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT29CONVERSATIONHUDVIEWCONTROLLER_H

@class UIViewController;
@protocol UIGestureRecognizerDelegate;



@interface _TtC15ConversationKit29ConversationHUDViewController : UIViewController <UIGestureRecognizerDelegate>

 {
    ? controlsManager;
    ? context;
    ? ephemeralAlertCancellable;
    ? appLaunchButtonCancellable;
    ? shadowProperties;
    ? contentAlpha;
    ? $__lazy_storage_$_backgroundMaterialView;
    ? controlsView;
    ? menuContainerView;
    ? appLaunchButton;
    ? detailsHeightLayoutConstraint;
    ? detailsWidthLayoutConstraint;
    ? delegate;
    ? recipe;
    ? presentationSize;
}




-(BOOL)_canShowWhileLocked;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)appLaunchButtonTapped:(id)arg0 ;
-(void)showCallDetailsButtonTapped;
-(void)statusViewTapped:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif