// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT29CONVERSATIONHUDVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT29CONVERSATIONHUDVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit29ConversationHUDViewController : UIViewController {
    ? delegate;
    ? controlsManager;
    ? context;
    ? ephemeralAlertCancellable;
    ? appLaunchButtonCancellable;
    ? recipe;
    ? presentationSize;
    ? shadowProperties;
    ? expanded;
    ? $__lazy_storage_$_backgroundMaterialView;
    ? controlsView;
    ? detailsViewController;
    ? menuContainerView;
    ? appLaunchButton;
    ? collapsedBottomLayoutConstraint;
    ? expandedBottomLayoutConstraint;
    ? detailsHeightLayoutConstraint;
    ? detailsWidthLayoutConstraint;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif