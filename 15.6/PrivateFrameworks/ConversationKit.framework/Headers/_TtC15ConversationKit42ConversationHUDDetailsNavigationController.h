// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT42CONVERSATIONHUDDETAILSNAVIGATIONCONTROLLER_H
#define _TTC15CONVERSATIONKIT42CONVERSATIONHUDDETAILSNAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface _TtC15ConversationKit42ConversationHUDDetailsNavigationController : UINavigationController {
    ? detailsDelegate;
    ? isOnScreen;
    ? controlsManager;
    ? context;
    ? linkShareCoordinator;
    ? detailsViewController;
    ? peoplePickerViewController;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif