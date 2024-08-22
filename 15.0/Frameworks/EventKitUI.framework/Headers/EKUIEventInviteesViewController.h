// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKUIEVENTINVITEESVIEWCONTROLLER_H
#define EKUIEVENTINVITEESVIEWCONTROLLER_H

@class UIViewController, EKInviteeAlternativeTimeSearcher, NSString, EKEvent, NSMutableArray, NSArray, NSDate, UITableView;
@protocol EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol;


#import "EKUIInviteesViewAddInviteesSection.h"
#import "EKUIInviteesViewAllInviteesCanAttendSection.h"
#import "EKUIInviteesViewInvisibleInviteeStatusSection.h"
#import "EKUIEventInviteesView.h"
#import "EKUIEmailCompositionManager.h"
#import "EKUIInviteesViewNotRespondedInviteesSection.h"
#import "EKUIInviteesViewOriginalConflictSection.h"
#import "EKUIEventInviteesEditViewController.h"
#import "EKUIInviteesViewProposedTimeSection.h"
#import "EKUIInviteesViewSomeInviteesCanAttendSection.h"

@interface EKUIEventInviteesViewController : UIViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKEditItemViewControllerProtocol>



@property (retain, nonatomic) EKUIInviteesViewAddInviteesSection *addInviteesSection; // ivar: _addInviteesSection
@property (retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // ivar: _allInviteesCanAttendSection
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // ivar: _availabilitySearcher
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deletedParticipants; // ivar: _deletedParticipants
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (nonatomic) BOOL fromDetail; // ivar: _fromDetail
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesManagedAttendeesSection; // ivar: _hidesManagedAttendeesSection
@property (retain, nonatomic) EKUIInviteesViewInvisibleInviteeStatusSection *invisibleInviteeStatusSection; // ivar: _invisibleInviteeStatusSection
@property (retain, nonatomic) EKUIEventInviteesView *inviteesView; // ivar: _inviteesView
@property (retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager; // ivar: _messageSendingManager
@property (retain, nonatomic) EKUIInviteesViewNotRespondedInviteesSection *notRespondedSection; // ivar: _notRespondedSection
@property (retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // ivar: _originalConflictSection
@property (weak, nonatomic) EKUIEventInviteesEditViewController *parentController; // ivar: _parentController
@property (nonatomic) BOOL presentModally;
@property (nonatomic) BOOL prohibitCallingSearcherStateChanged; // ivar: _prohibitCallingSearcherStateChanged
@property (retain, nonatomic) EKUIInviteesViewProposedTimeSection *proposedTimeSection; // ivar: _proposedTimeSection
@property (nonatomic) BOOL resetAttendeesSections; // ivar: _resetAttendeesSections
@property (nonatomic) BOOL resetConflictResolutionSections; // ivar: _resetConflictResolutionSections
@property (retain, nonatomic) NSMutableArray *respondedSection; // ivar: _respondedSection
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (retain, nonatomic) NSDate *selectedEndDate; // ivar: _selectedEndDate
@property (retain, nonatomic) NSDate *selectedStartDate; // ivar: _selectedStartDate
@property (retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // ivar: _someInviteesCanAttendSection
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) BOOL useCustomBackButton;
@property (nonatomic) BOOL usesCustomToolbar; // ivar: _usesCustomToolbar
@property (nonatomic) BOOL usesRaisedCustomToolbar; // ivar: _usesRaisedCustomToolbar
@property (nonatomic) BOOL viewIsVisible; // ivar: _viewIsVisible


+(id)_participantsInArray:(id)arg0 thatAreNotInArray:(id)arg1 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)showsManagedAttendeesSectionFooter;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_indexForSection:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_sectionForIndex:(NSUInteger)arg0 ;
-(id)editItemEventToDetach;
-(id)initWithEvent:(id)arg0 fromDetail:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_dismiss:(id)arg0 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(void)_eventModified:(id)arg0 ;
-(void)_fontSizeDefinitionsChanged:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_refreshIfNeeded;
-(void)_requestDismissal;
-(void)_searcherStateChanged:(NSInteger)arg0 ;
-(void)_sendMessageToParticipants:(id)arg0 ;
-(void)_smoothRefreshIfNeededForSections:(id)arg0 ;
-(void)addInviteesTapped;
-(void)dealloc;
-(void)editItemViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)loadView;
-(void)prepareToReloadAttendeesSections;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCustomNavigationItemButtons;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willEnterForeground;


@end


#endif