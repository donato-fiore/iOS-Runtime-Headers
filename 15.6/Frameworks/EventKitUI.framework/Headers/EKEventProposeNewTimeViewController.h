// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTPROPOSENEWTIMEVIEWCONTROLLER_H
#define EKEVENTPROPOSENEWTIMEVIEWCONTROLLER_H

@class UITableViewController, EKInviteeAlternativeTimeSearcher, UIActivityIndicatorView, NSTimer, NSString, EKEvent, NSDate, NSArray;
@protocol EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKCalendarItemEditItemDelegate, EKEventDateEditItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEditItemViewControllerProtocol;


#import "EKUIInviteesViewAllInviteesCanAttendSection.h"
#import "EKUIEmailCompositionManager.h"
#import "EKUIInviteesViewOriginalConflictSection.h"
#import "EKEventDateEditItem.h"
#import "EKUIInviteesViewSomeInviteesCanAttendSection.h"
#import "SingleToolbarItemContainerView.h"
#import "EKUIEventStatusButtonsView.h"

@interface EKEventProposeNewTimeViewController : UITableViewController <EKEditItemViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, EKCalendarItemEditItemDelegate, EKEventDateEditItemDelegate, EKUIEventStatusButtonsViewDelegate, EKEditItemViewControllerProtocol>



@property (retain, nonatomic) EKUIInviteesViewAllInviteesCanAttendSection *allInviteesCanAttendSection; // ivar: _allInviteesCanAttendSection
@property (retain, nonatomic) EKInviteeAlternativeTimeSearcher *availabilitySearcher; // ivar: _availabilitySearcher
@property (retain, nonatomic) UIActivityIndicatorView *availabilitySearcherRunningSpinner; // ivar: _availabilitySearcherRunningSpinner
@property (retain, nonatomic) NSTimer *availabilitySearcherRunningSpinnerTimer; // ivar: _availabilitySearcherRunningSpinnerTimer
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) BOOL editItemShouldBeAskedForInjectableViewController;
@property (retain, nonatomic) EKEvent *event; // ivar: _event
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) EKUIEmailCompositionManager *messageSendingManager; // ivar: _messageSendingManager
@property (retain, nonatomic) EKUIInviteesViewOriginalConflictSection *originalConflictSection; // ivar: _originalConflictSection
@property (retain, nonatomic) NSDate *originalDate; // ivar: _originalDate
@property (nonatomic) BOOL presentModally;
@property (retain, nonatomic) EKEventDateEditItem *proposeTimeItem; // ivar: _proposeTimeItem
@property (retain, nonatomic) NSDate *proposedStartDate; // ivar: _proposedStartDate
@property (nonatomic) BOOL resetConflictResolutionSections; // ivar: _resetConflictResolutionSections
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (readonly, nonatomic) NSDate *selectedEndDate; // ivar: _selectedEndDate
@property (readonly, nonatomic) NSDate *selectedStartDate; // ivar: _selectedStartDate
@property (retain, nonatomic) EKUIInviteesViewSomeInviteesCanAttendSection *someInviteesCanAttendSection; // ivar: _someInviteesCanAttendSection
@property (retain, nonatomic) SingleToolbarItemContainerView *statusButtonsContainerView; // ivar: _statusButtonsContainerView
@property (retain, nonatomic) EKUIEventStatusButtonsView *statusButtonsView; // ivar: _statusButtonsView
@property (nonatomic) CGFloat statusButtonsViewCachedFontSize; // ivar: _statusButtonsViewCachedFontSize
@property (readonly) Class superclass;
@property (nonatomic) BOOL useCustomBackButton;
@property (nonatomic) BOOL viewIsVisible; // ivar: _viewIsVisible


+(id)_participantsInArray:(id)arg0 thatAreNotInArray:(id)arg1 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)proposedTimeChanged;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(CGFloat)eventStatusButtonsViewButtonFontSize:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_indexForSection:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_sectionForIndex:(NSUInteger)arg0 ;
-(id)_statusButtons;
-(id)_viewControllerForPresentingViewControllers;
-(id)defaultAlertTitleForEditItem:(id)arg0 ;
-(id)editItemEventToDetach;
-(id)initWithEvent:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_cancelAvailabilitySpinnerTimer;
-(void)_dismiss:(id)arg0 ;
-(void)_dismissPresentedViewControllerAnimated:(BOOL)arg0 ;
-(void)_eventModified:(id)arg0 ;
-(void)_fontSizeDefinitionsChanged:(id)arg0 ;
-(void)_presentViewController:(id)arg0 ;
-(void)_refreshIfNeeded;
-(void)_scheduleAvailabilitySpinnerTimer;
-(void)_searcherStateChanged:(NSInteger)arg0 ;
-(void)_updateStatusButtons;
-(void)dateChangedTo:(id)arg0 ;
-(void)dealloc;
-(void)editItem:(id)arg0 wantsDoneButtonDisabled:(BOOL)arg1 ;
-(void)editItem:(id)arg0 wantsRowInsertions:(id)arg1 rowDeletions:(id)arg2 ;
-(void)editItem:(id)arg0 wantsRowInsertions:(id)arg1 rowDeletions:(id)arg2 rowReloads:(id)arg3 ;
-(void)editItem:(id)arg0 wantsRowReload:(id)arg1 ;
-(void)editItem:(id)arg0 wantsRowsScrolledToVisible:(id)arg1 ;
-(void)editItemRequiresHeightChange:(id)arg0 ;
-(void)editItemViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)eventStatusButtonsView:(id)arg0 calculatedFontSizeToFit:(CGFloat)arg1 ;
-(void)eventStatusButtonsView:(id)arg0 didSelectAction:(NSInteger)arg1 ifCancelled:(id)arg2 ;
-(void)loadView;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayHeaderView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateCheckmark;
-(void)updateCustomBackButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif