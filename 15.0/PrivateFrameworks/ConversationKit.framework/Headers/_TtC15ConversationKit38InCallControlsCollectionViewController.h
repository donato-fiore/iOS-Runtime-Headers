// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC15CONVERSATIONKIT38INCALLCONTROLSCOLLECTIONVIEWCONTROLLER_H
#define _TTC15CONVERSATIONKIT38INCALLCONTROLSCOLLECTIONVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC15ConversationKit38InCallControlsCollectionViewController : UIViewController {
    ? updatedCapabilitiesWithParticipants;
    ? capabilitiesChecker;
    ? participants;
    ? isLegacy;
    ? featureFlagChecker;
    ? activitySession;
    ? conversation;
    ? mode;
    ? gridLayoutStyle;
    ? isOnScreen;
    ? controlsManager;
    ? context;
    ? remoteAudioPaused;
    ? participantsViewControllerDelegate;
    ? inCallControlsCollectionViewControllerDelegate;
    ? collectionView;
    ? dataSource;
    ? shareLinkEnabled;
    ? updateDataSourceNeedsRefreshParticipants;
    ? updateDataSourceNeedsAnimatedDifferences;
    ? updateDataSourceSubject;
    ? updateDataSourceDebouncer;
    ? sectionHeaderViewRegistration;
    ? activityCellRegistration;
    ? titleCellRegistration;
    ? statusCellRegistration;
    ? participantCellRegistration;
    ? addParticipantCellRegistration;
    ? linkLayoutCellRegistration;
    ? ignoreLMIRequestsCellRegistration;
    ? fallbackCellRegistration;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif