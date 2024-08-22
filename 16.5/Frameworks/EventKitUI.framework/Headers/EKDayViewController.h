// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYVIEWCONTROLLER_H
#define EKDAYVIEWCONTROLLER_H

@class UIViewController, UIView, UIScrollView, NSDateComponents, NSCalendar, NSArray, NSString, NSTimer;
@protocol BlockableScrollViewDelegate, EKDayOccurrenceViewDelegate, EKUIPasteboardManagerCutDelegate, EKUIRightClickEmptySpaceInteractionDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, EKUIPasteboardManagerPasteDelegate, UIScrollViewDelegate, OS_dispatch_queue, EKDayViewControllerDataSource, EKDayViewControllerDelegate;


#import "EKDayView.h"
#import "EKDayOccurrenceView.h"
#import "EKDayViewWithGutters.h"
#import "CalendarOccurrencesCollection.h"
#import "EKEventGestureController.h"
#import "ScrollSpringFactory.h"
#import "EKEventEditViewController.h"

@interface EKDayViewController : UIViewController <BlockableScrollViewDelegate, EKDayOccurrenceViewDelegate, EKUIPasteboardManagerCutDelegate, EKUIRightClickEmptySpaceInteractionDelegate, EKDayViewDataSource, EKDayViewDelegate, EKEventGestureControllerDelegate, EKUIPasteboardManagerPasteDelegate, UIScrollViewDelegate>

 {
    UIView *_clipView;
    UIScrollView *_horizontalScrollingView;
    EKDayView *_previousDay;
    EKDayView *_currentDay;
    EKDayView *_nextDay;
    EKDayOccurrenceView *_proposedTimeView;
    EKDayViewWithGutters *_previousDayWithGutter;
    EKDayViewWithGutters *_currentDayWithGutter;
    EKDayViewWithGutters *_nextDayWithGutter;
    BOOL _scrollViewAnimating;
    BOOL _hasPendingNextDate;
    BOOL _hasPendingPreviousDate;
    BOOL _decelerating;
    BOOL _settingDateFromScrolling;
    CalendarOccurrencesCollection *_occurrences;
    CalendarOccurrencesCollection *_previousDayOccurrences;
    CalendarOccurrencesCollection *_nextDayOccurrences;
    EKEventGestureController *_eventGestureController;
    ScrollSpringFactory *_decelerationSpringFactory;
    NSDateComponents *_originalDisplayDate;
    CGFloat _dayStart;
    CGFloat _dayEnd;
    BOOL _needsReload;
    BOOL _shouldScrollToNowOnViewWillAppear;
    BOOL _instigatedDateChange;
    BOOL _viewAppeared;
    BOOL _adjustingForDeceleration;
    BOOL _fingerDown;
    BOOL _requiresFullDayRelayout;
    int _springAnimatedDecelerationsInProgress;
    int _sizeTransitionsInProgress;
    BOOL _correctAfterScroll;
    NSDateComponents *_targetDateComponents;
    BOOL _needToCompleteScrollingAnimation;
    BOOL _needToCompleteDeceleration;
    NSObject<OS_dispatch_queue> *_reloadQueue;
    NSObject<OS_dispatch_queue> *_protectionQueue;
    NSInteger _targetSizeClass;
}


@property (nonatomic) BOOL allowsDaySwitching; // ivar: _allowsDaySwitching
@property (nonatomic) BOOL allowsSelection; // ivar: _allowsSelection
@property (nonatomic) BOOL alwaysAnimate; // ivar: _alwaysAnimate
@property (nonatomic) BOOL animateAllDayAreaHeight; // ivar: _animateAllDayAreaHeight
@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (readonly, nonatomic) UIView *currentAllDayView;
@property (readonly, nonatomic) BOOL currentDayContainsOccurrences;
@property (readonly, nonatomic) NSArray *currentDayContentGridViewSubviews;
@property (readonly, nonatomic) EKDayView *currentDayView;
@property (retain, nonatomic) EKEventEditViewController *currentEditor; // ivar: _currentEditor
@property (weak, nonatomic) NSObject<EKDayViewControllerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKDayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableGestureDayChange; // ivar: _disableGestureDayChange
@property (nonatomic) BOOL disableNotifyDateChangeDuringTracking; // ivar: _disableNotifyDateChangeDuringTracking
@property (copy, nonatomic) NSDateComponents *displayDate; // ivar: _displayDate
@property (readonly, nonatomic) UIView *effectiveEventGestureSuperview;
@property (retain, nonatomic) UIView *gestureOccurrenceSuperview; // ivar: _gestureOccurrenceSuperview
@property (nonatomic) CGFloat gutterWidth; // ivar: _gutterWidth
@property (readonly) NSUInteger hash;
@property (nonatomic) CGPoint normalizedContentOffset; // ivar: _normalizedContentOffset
@property (nonatomic) BOOL notifyWhenTapOtherEventDuringDragging; // ivar: _notifyWhenTapOtherEventDuringDragging
@property (copy, nonatomic) NSDateComponents *pendingNextDate; // ivar: _pendingNextDate
@property (copy, nonatomic) NSDateComponents *pendingPreviousDate; // ivar: _pendingPreviousDate
@property (nonatomic) BOOL preloadExtraDays; // ivar: _preloadExtraDays
@property (nonatomic) BOOL scrollEventsInToViewIgnoresVisibility;
@property (nonatomic) BOOL shouldAutoscrollAfterAppearance; // ivar: _shouldAutoscrollAfterAppearance
@property (nonatomic) BOOL shouldLogVisibleEvents; // ivar: _shouldLogVisibleEvents
@property (retain, nonatomic) NSTimer *showNowTimer; // ivar: _showNowTimer
@property (nonatomic) BOOL showsBanner; // ivar: _showsBanner
@property (nonatomic) int startingFirstVisibleSecond; // ivar: _startingFirstVisibleSecond
@property (readonly) Class superclass;
@property (nonatomic) BOOL transitionedToSameDay; // ivar: _transitionedToSameDay


+(BOOL)_shouldForwardViewWillTransitionToSize;
-(BOOL)_canScrollToNow;
-(BOOL)_canShowNowAfterScrollViewDidEndDecelerating:(id)arg0 ;
-(BOOL)_isCalendarDate:(id)arg0 sameDayAsComponents:(id)arg1 ;
-(BOOL)_isCurrentDayToday;
-(BOOL)_isResizing;
-(BOOL)_isViewInVisibleRect:(id)arg0 ;
-(BOOL)_shouldEndGestureEditingOnTap;
-(BOOL)_shouldRespondToApplicationDidBecomeActiveStateChange;
-(BOOL)_shouldScrollToNow;
-(BOOL)blockableScrollViewShouldAllowScrolling;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(BOOL)dayViewShouldDrawSynchronously:(id)arg0 ;
-(BOOL)didScrollWhenEventGestureController:(id)arg0 scrollTimerFiredToMoveLeft:(BOOL)arg1 right:(BOOL)arg2 vertically:(BOOL)arg3 towardPoint:(struct CGPoint )arg4 ;
-(BOOL)eventEditorPopoverActiveWhileDraggingForEventGestureController:(id)arg0 ;
-(BOOL)eventGestureController:(id)arg0 didCommitOccurrence:(id)arg1 toDate:(CGFloat)arg2 isAllDay:(BOOL)arg3 span:(NSInteger)arg4 ;
-(BOOL)eventGestureController:(id)arg0 isAllDayAtPoint:(struct CGPoint )arg1 requireInsistence:(BOOL)arg2 ;
-(BOOL)eventGestureControllerShouldAllowLongPress:(id)arg0 ;
-(BOOL)interaction:(id)arg0 canCreateEventAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(BOOL)interaction:(id)arg0 canPasteEventAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(BOOL)interaction:(id)arg0 shouldShowMenuAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(CGFloat)_showNowDelay;
-(CGFloat)_weightedAllDayHeightForView:(id)arg0 visibleRect:(struct CGRect )arg1 ;
-(CGFloat)eventGestureController:(id)arg0 dateAtPoint:(struct CGPoint )arg1 ;
-(CGFloat)eventGestureController:(id)arg0 heightForOccurrenceViewOfDuration:(CGFloat)arg1 allDay:(BOOL)arg2 ;
-(CGFloat)eventGestureController:(id)arg0 widthForOccurrenceViewOfDays:(NSUInteger)arg1 ;
-(CGFloat)eventGestureController:(id)arg0 yPositionPerhapsMatchingAllDayOccurrence:(id)arg1 atPoint:(struct CGPoint )arg2 ;
-(CGFloat)horizontalOffsetForPagingForEventGestureController:(id)arg0 ;
-(CGFloat)timedRegionOriginForEventGestureController:(id)arg0 ;
-(NSInteger)_effectiveInterfaceOrientationForSize:(struct CGSize )arg0 ;
-(NSUInteger)_dateModeForAllDay:(BOOL)arg0 ;
-(NSUInteger)firstVisibleSecond;
-(id)_createGutterDayViewWithDayView:(id)arg0 ;
-(id)_eventGestureSuperview;
-(id)_eventsForCutOrCopy;
-(id)_eventsForDay:(id)arg0 ;
-(id)_occurrencesForDayView:(id)arg0 ;
-(id)createEventForEventGestureController:(id)arg0 ;
-(id)createOccurrenceViewForEventGestureController:(id)arg0 ;
-(id)createOccurrenceViewForEventGestures;
-(id)currentPresentationController;
-(id)dayView:(id)arg0 eventsForStartDate:(id)arg1 endDate:(id)arg2 ;
-(id)dayView:(id)arg0 selectedCopyViewForOccurrence:(id)arg1 ;
-(id)editorForEventGestureController:(id)arg0 ;
-(id)editorForPasteboardManager:(id)arg0 ;
-(id)eventGestureController:(id)arg0 occurrenceViewAtPoint:(struct CGPoint )arg1 ;
-(id)eventGestureController:(id)arg0 occurrenceViewForOccurrence:(id)arg1 ;
-(id)eventsForStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)gestureController;
-(id)horizontalScrollView;
-(id)init;
-(id)initWithTargetSizeClass:(NSInteger)arg0 ;
-(id)interaction:(id)arg0 subtitleForPasteActionAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(id)interaction:(id)arg0 titleForPasteActionAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(id)occurrenceViewForEvent:(id)arg0 ;
-(id)occurrenceViewForEvent:(id)arg0 includeNextAndPreviousDays:(BOOL)arg1 ;
-(id)occurrenceViewSuperviewForEventGestureController:(id)arg0 ;
-(id)preferredEventToSelectOnDate:(id)arg0 ;
-(id)presentationControllerForEditMenu;
-(id)selectedEventsForEditMenu;
-(id)touchTrackingViewForEventGestureController:(id)arg0 ;
-(id)verticalScrollView;
-(id)viewControllerToPresentAlertFromForPasteboardManager:(id)arg0 ;
-(struct CGPoint )eventGestureController:(id)arg0 pointAtDate:(CGFloat)arg1 isAllDay:(BOOL)arg2 ;
-(struct CGPoint )pointAtDate:(CGFloat)arg0 isAllDay:(BOOL)arg1 ;
-(void)__cutLongCallbackTailForDecelerationFromUserInput;
-(void)__cutLongTailCallbackForScrollAnimationFromExternalSource;
-(void)_cancelAllLongTailCuttingCallbacks;
-(void)_cleanUpTargetDateComponents;
-(void)_completeDecelerationIfNeeded;
-(void)_completeScrollingAnimationIfNeeded;
-(void)_cutAnimationTailAfterDelayForDecelerationFromUserInput;
-(void)_cutAnimationTailAfterDelayForScrollAnimationFromExternalSource;
-(void)_didRespondToApplicationDidBecomeActiveStateChange;
-(void)_highlightEvent:(id)arg0 dayViewDate:(CGFloat)arg1 isAllDay:(BOOL)arg2 ;
-(void)_localeChanged:(id)arg0 ;
-(void)_logUserStateDiagnostics:(id)arg0 ;
-(void)_notifyDelegateOfSelectedDateChange;
-(void)_performDisplayedOccurrencesChangedDelegateMethodWithTrigger:(int)arg0 ;
-(void)_relayoutDays;
-(void)_relayoutDaysDuringScrolling;
-(void)_relayoutDaysDuringScrollingAndPerformDayChanges:(BOOL)arg0 ;
-(void)_scrollDayViewAfterRelayoutDays;
-(void)_scrollToNowOnScrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)_scrollViewDidEndDecelerating:(id)arg0 ;
-(void)_setDayView:(id)arg0 toDate:(id)arg1 ;
-(void)_setHorizontalContentOffsetUsingSpringAnimation:(struct CGPoint )arg0 ;
-(void)_setNextAndPreviousFirstVisibleSecondToCurrent;
-(void)_showNowAfterScrollViewDidEndDecelerating:(id)arg0 ;
-(void)_showNowTimerFired:(id)arg0 ;
-(void)_showWeekNumbersPreferenceChanged:(id)arg0 ;
-(void)_stopShowNowTimer;
-(void)_updateAllDayAreaHeight;
-(void)applicationDidBecomeActive;
-(void)applicationWillResignActive;
-(void)attemptDisplayReviewPrompt;
-(void)blockableScrollViewDidChangeFrameSize;
-(void)bringEventToFront:(id)arg0 ;
-(void)cleanUpAfterGestureFailureForEventGestureController:(id)arg0 ;
-(void)copy:(id)arg0 ;
-(void)cut:(id)arg0 ;
-(void)dayOccurrenceViewSelected:(id)arg0 source:(NSUInteger)arg1 ;
-(void)dayView:(id)arg0 didCreateOccurrenceViews:(id)arg1 ;
-(void)dayView:(id)arg0 didScaleDayViewWithScale:(CGFloat)arg1 ;
-(void)dayView:(id)arg0 didSelectEvent:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)dayView:(id)arg0 didUpdateScrollPosition:(struct CGPoint )arg1 ;
-(void)dayView:(id)arg0 firstVisibleSecondChanged:(NSUInteger)arg1 ;
-(void)dayView:(id)arg0 isPinchingDayViewWithScale:(CGFloat)arg1 ;
-(void)dayView:(id)arg0 scrollViewWillBeginDragging:(id)arg1 ;
-(void)dayViewDidCompleteAsyncLoadAndLayout:(id)arg0 ;
-(void)dayViewDidTapEmptySpace:(id)arg0 onDate:(id)arg1 ;
-(void)dealloc;
-(void)editorDidCancelEditingEvent:(id)arg0 ;
-(void)editorDidDeleteEvent:(id)arg0 ;
-(void)editorDidSaveEvent:(id)arg0 ;
-(void)eventGestureController:(id)arg0 addViewToScroller:(id)arg1 isAllDay:(BOOL)arg2 ;
-(void)eventGestureController:(id)arg0 adjustDraggingView:(id)arg1 forAllDay:(BOOL)arg2 ;
-(void)eventGestureController:(id)arg0 didCancelEditingOccurrence:(id)arg1 fadedOut:(BOOL)arg2 ;
-(void)eventGestureController:(id)arg0 didMoveToDate:(CGFloat)arg1 isAllDay:(BOOL)arg2 ;
-(void)eventGestureController:(id)arg0 didSetUpAtDate:(CGFloat)arg1 isAllDay:(BOOL)arg2 ;
-(void)eventGestureController:(id)arg0 didSingleTapOccurrence:(id)arg1 shouldExtendSelection:(BOOL)arg2 ;
-(void)eventGestureController:(id)arg0 requestsPresentationOfViewController:(id)arg1 ;
-(void)eventGestureController:(id)arg0 requestsShowEvent:(id)arg1 ;
-(void)eventGestureControllerDidEndDragSession:(id)arg0 ;
-(void)externallyEndedGestureDragging;
-(void)hideTimelineHighlight;
-(void)insertViewForEvent:(id)arg0 belowViewForOtherEvent:(id)arg1 ;
-(void)interaction:(id)arg0 createEventAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(void)interaction:(id)arg0 pasteEventAtPoint:(struct CGPoint )arg1 inView:(id)arg2 ;
-(void)layoutContainerView:(id)arg0 ;
-(void)loadData:(BOOL)arg0 withTrigger:(int)arg1 withCompletion:(id)arg2 ;
-(void)loadDataBetweenStart:(id)arg0 end:(id)arg1 withTrigger:(int)arg2 generation:(int)arg3 completionForCurrentDayReload:(id)arg4 ;
-(void)loadView;
-(void)paste:(id)arg0 ;
-(void)pasteboardManager:(id)arg0 beginEditingEvent:(id)arg1 ;
-(void)pasteboardManager:(id)arg0 didFinishPasteWithResult:(NSUInteger)arg1 willOpenEditor:(BOOL)arg2 ;
-(void)reloadData;
-(void)reloadDataForOccurrenceChangeWithGeneration:(int)arg0 ;
-(void)reloadDataIfNeeded;
-(void)scrollDayViewAppropriatelyWithAnimation:(BOOL)arg0 ;
-(void)scrollEventIntoView:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg0 ;
-(void)scrollToNow:(BOOL)arg0 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDecelerating:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 gutterWidth:(CGFloat)arg1 ;
-(void)setNeedsReload;
-(void)setTimeZone:(id)arg0 ;
-(void)showTimelineHighlightForTime:(id)arg0 ;
-(void)significantTimeChangeOccurred;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateFrameForProposedTimeView;
-(void)validateInterfaceOrientationWithFutureOrientation:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif