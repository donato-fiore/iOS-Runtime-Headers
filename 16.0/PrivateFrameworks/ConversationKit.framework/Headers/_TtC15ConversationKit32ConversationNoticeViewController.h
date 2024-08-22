// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC15CONVERSATIONKIT32CONVERSATIONNOTICEVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT32CONVERSATIONNOTICEVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit32ConversationNoticeViewController : UIViewController {
    ? delegate;
    ? controlsManager;
    ? recipe;
    ? presentationSize;
    ? expanded;
    ? menuPresented;
    ? isPresentationManagedBySpringBoard;
    ? noticeView;
    ? $__lazy_storage_$_systemApertureLeadingAccessoryTapGesture;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleSystemApertureTapGesture;
-(void)handleTapGesture;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif