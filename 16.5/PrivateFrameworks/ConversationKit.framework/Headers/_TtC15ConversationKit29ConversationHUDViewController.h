// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
    ? appLaunchPillView;
    ? detailsHeightLayoutConstraint;
    ? detailsWidthLayoutConstraint;
    ? shareCardViewController;
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
-(void)statusViewTapped;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif