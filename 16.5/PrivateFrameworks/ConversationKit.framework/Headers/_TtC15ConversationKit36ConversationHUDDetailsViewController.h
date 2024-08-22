// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15CONVERSATIONKIT36CONVERSATIONHUDDETAILSVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT36CONVERSATIONHUDDETAILSVIEWCONTROLLER_H

@class UIViewController;
@protocol CNKSceneVisibilityHandler;



@interface _TtC15ConversationKit36ConversationHUDDetailsViewController : UIViewController <CNKSceneVisibilityHandler>

 {
    ? detailsDelegate;
    ? controlsManager;
    ? linkShareCoordinator;
    ? detailsViewController;
    ? peoplePickerViewController;
}


@property (nonatomic) BOOL isOnScreen; // ivar: isOnScreen


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif