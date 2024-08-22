// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTEDITOR_H
#define EKEVENTEDITOR_H

@class NSTimer, NSString, EKAutocompleteSearchResult, UIColor, EKEvent;
@protocol EKEventAutocompleteResultsEditItemDelegate, EKUIConfirmMultiPasteViewControllerDelegate, EKAutocompletePendingSearchProtocol;


#import "EKCalendarItemEditor.h"
#import "EKEventDateEditItem.h"
#import "EKEventAutocompleteResultsEditItem.h"
#import "EKCalendarItemTitleInlineEditItem.h"
#import "EKCalendarItemLocationInlineEditItem.h"
#import "EKCalendarItemCalendarEditItem.h"
#import "EKCalendarItemAlarmEditItem.h"
#import "EKEventURLAndNotesInlineEditItem.h"
#import "EKEventAttachmentsEditItem.h"
#import "EKEventAttendeesEditItem.h"
#import "EKUIAutocompleteTracker.h"

@interface EKEventEditor : EKCalendarItemEditor <EKEventAutocompleteResultsEditItemDelegate, EKUIConfirmMultiPasteViewControllerDelegate>

 {
    EKEventDateEditItem *_dateItem;
    EKEventAutocompleteResultsEditItem *_autocompleteEditItem;
    EKCalendarItemTitleInlineEditItem *_titleInlineEditItem;
    EKCalendarItemLocationInlineEditItem *_locationInlineEditItem;
    EKCalendarItemCalendarEditItem *_calendarEditItem;
    EKCalendarItemAlarmEditItem *_alarmEditItem;
    EKEventURLAndNotesInlineEditItem *_notesEditItem;
    EKEventAttachmentsEditItem *_attachmentsEditItem;
    EKEventAttendeesEditItem *_attendeesEditItem;
    BOOL _shouldAutocomplete;
    id<EKAutocompletePendingSearchProtocol> *_pendingSearch;
    NSTimer *_autocompleteTimer;
    NSString *_autocompleteSearchString;
    BOOL _isTransitioning;
    BOOL _autocompleteResultsVisible;
    NSUInteger _focusOnAppearanceTarget;
    BOOL _selectOnFocus;
    EKAutocompleteSearchResult *_selectedAutocompleteResult;
    NSUInteger _selectedAutocompleteResultIndex;
    EKAutocompleteSearchResult *_zeroKeywordResult;
    EKAutocompleteSearchResult *_naturalLanguageResult;
    BOOL _hasShownZeroKeywordResult;
    BOOL _hasShownNaturalLanguageResult;
    EKUIAutocompleteTracker *_autocompleteTracker;
}


@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEvent *event;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL showAttachments; // ivar: _showAttachments
@property (retain, nonatomic) NSString *suggestionKey; // ivar: _suggestionKey
@property (readonly) Class superclass;


+(Class)_SGSuggestionsServiceClass;
+(id)_copyAlarmsForAutocompleteFromResult:(id)arg0 ;
+(id)_now;
+(id)defaultTitleForCalendarItem;
+(void)_applyTimeToAutocompleteResults:(id)arg0 usingCurrentStartDate:(id)arg1 currentEndDate:(id)arg2 timeImplicitlySet:(BOOL)arg3 ;
-(BOOL)attachmentsModifiedOnRecurrence;
-(BOOL)hasAttachmentChanges;
-(BOOL)hasUnsavedChanges;
-(BOOL)saveCalendarItemWithSpan:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)shouldAutorotate;
-(NSUInteger)entityType;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_calendarItemIndexSet;
-(id)_editItems;
-(id)_nameForDeleteButton;
-(id)_orderedEditItems;
-(id)_viewForSheet;
-(id)attachmentsModifiedEvent;
-(id)defaultAlertTitle;
-(id)notificationNamesForLocaleChange;
-(id)preferredTitle;
-(struct CGSize )preferredContentSize;
-(void)_beginAutocompleteSearch:(id)arg0 ;
-(void)_cancelPendingAutocompleteAndCleanup;
-(void)_copyEventForPossibleRevert;
-(void)_focusAppearanceTarget;
-(void)_hideAndCancelAutocompleteResults;
-(void)_modifyCurrentEvent:(id)arg0 withAutocompleteResult:(id)arg1 isPasteboardResult:(BOOL)arg2 ;
-(void)_revertEvent;
-(void)_scheduleAutocompleteSearchWithString:(id)arg0 ;
-(void)_scheduleAutocompleteTimerIfNeeded;
-(void)_setAutocompleteResultsVisible:(BOOL)arg0 ;
-(void)_showAutocompleteResults;
-(void)_updateTitleEditItemSeparatorVisibility;
-(void)autocompleteResultsEditItem:(id)arg0 resultSelected:(id)arg1 ;
-(void)autocompleteResultsEditItemDidHideResults:(id)arg0 ;
-(void)autocompleteResultsEditItemDidShowResults:(id)arg0 ;
-(void)confirmMultiPasteViewController:(id)arg0 finishedWithCancel:(BOOL)arg1 ;
-(void)editItem:(id)arg0 didSaveFromDetailViewController:(BOOL)arg1 ;
-(void)editItemDidStartEditing:(id)arg0 ;
-(void)editItemTextChanged:(id)arg0 ;
-(void)focus:(NSUInteger)arg0 select:(BOOL)arg1 ;
-(void)loadView;
-(void)prepareEditItems;
-(void)refreshInvitees;
-(void)refreshLocation;
-(void)refreshStartAndEndDates;
-(void)refreshURL;
-(void)reloadTableViewSectionsForDates:(BOOL)arg0 invitees:(BOOL)arg1 location:(BOOL)arg2 alarm:(BOOL)arg3 ;
-(void)setupDeleteButton;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif