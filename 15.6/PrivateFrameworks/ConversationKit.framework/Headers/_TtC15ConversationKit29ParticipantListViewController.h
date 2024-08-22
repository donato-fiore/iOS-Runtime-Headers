// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC15CONVERSATIONKIT29PARTICIPANTLISTVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT29PARTICIPANTLISTVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit29ParticipantListViewController : UIViewController {
    ? collectionViewDataSource;
    ? participantListLayout;
    ? viewContent;
    ? lastLayedOutViewSize;
    ? participantsViewControllerDelegate;
    ? participantListViewControllerDelegate;
}




-(BOOL)_canShowWhileLocked;
-(id)accessibilityParticipantCollectionView;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif