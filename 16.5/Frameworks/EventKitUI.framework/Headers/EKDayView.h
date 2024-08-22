// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYVIEW_H
#define EKDAYVIEW_H

@class UIView, UIImageView, NSArray, UIScrollView, NSTimer, UIPinchGestureRecognizer, UITapGestureRecognizer, NSCalendar, NSString, EKEvent, NSDateComponents, UIColor, UIVisualEffect;
@protocol UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate, OS_dispatch_queue, EKDayViewDataSource, EKDayViewDelegate;


#import "EKDayAllDayView.h"
#import "EKDayViewContent.h"
#import "EKDayTimeView.h"

@interface EKDayView : UIView <UIScrollViewDelegate, EKDayAllDayViewDelegate, EKDayViewContentDelegate, EKDayTimeViewDelegate>

 {
    CGFloat _nextDSTTransition;
    BOOL _scrollbarShowsInside;
    BOOL _scrollingToOccurrence;
    BOOL _settingDate;
    BOOL _userScrolling;
    BOOL _scrollToOccurrencesOnNextReload;
    UIImageView *_topVerticalGridExtension;
    UIImageView *_bottomVerticalGridExtension;
    UIView *_bottomLine;
    NSArray *_existingTimedOcurrences;
    CGSize _scrolledToFirstVisibleSecondForSize;
    EKDayAllDayView *_allDayView;
    EKDayViewContent *_dayContent;
    EKDayTimeView *_timeView;
    UIScrollView *_scroller;
    NSTimer *_timeMarkerTimer;
    CGPoint _lastPinchDistance;
    CGPoint _lastPinchPoint1;
    CGFloat _lastPinchScale;
    BOOL _pinching;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    NSInteger _targetSizeClass;
    BOOL _layoutWhenJoiningViewHierarchy;
    NSObject<OS_dispatch_queue> *_reloadQueue;
}


@property (nonatomic) CGFloat additionalLeftPadding; // ivar: _additionalLeftPadding
@property (nonatomic) BOOL alignsMidnightToTop; // ivar: _alignsMidnightToTop
@property (readonly, nonatomic) EKDayAllDayView *allDayView;
@property (readonly, nonatomic) NSArray *allOccurrenceViews;
@property (nonatomic) BOOL allowPinchingHourHeights; // ivar: _allowPinchingHourHeights
@property (nonatomic) BOOL allowsOccurrenceSelection; // ivar: _allowsOccurrenceSelection
@property (nonatomic) BOOL allowsScrolling;
@property (nonatomic) BOOL animatesTimeMarker;
@property (nonatomic) CGFloat bottomContentInset; // ivar: _bottomContentInset
@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (weak, nonatomic) NSObject<EKDayViewDataSource> *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) EKDayViewContent *dayContent;
@property (readonly, nonatomic) CGFloat dayEnd; // ivar: _dayEnd
@property (readonly, nonatomic) CGFloat dayStart; // ivar: _dayStart
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKDayViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEvent *dimmedOccurrence;
@property (copy, nonatomic) NSDateComponents *displayDate; // ivar: _displayDate
@property (nonatomic) BOOL eventsFillGrid;
@property (nonatomic) int firstVisibleSecond;
@property (retain, nonatomic) UIColor *gridLineColor;
@property (retain, nonatomic) UIVisualEffect *gridVisualEffect;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat hourScale; // ivar: _hourScale
@property (nonatomic) _NSRange hoursToRender;
@property (nonatomic) BOOL isNowVisible; // ivar: _isNowVisible
@property (readonly, nonatomic) CGFloat leftContentInset;
@property (nonatomic) CGPoint normalizedContentOffset;
@property (nonatomic) NSInteger occurrenceBackgroundStyle;
@property (retain, nonatomic) UIColor *occurrenceLocationColor;
@property (retain, nonatomic) UIColor *occurrenceTextBackgroundColor;
@property (retain, nonatomic) UIColor *occurrenceTimeColor;
@property (retain, nonatomic) UIColor *occurrenceTitleColor;
@property (readonly, nonatomic) NSArray *occurrenceViews;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic) int outlineStyle; // ivar: _outlineStyle
@property (nonatomic) CGFloat scrollAnimationDurationOverride; // ivar: _scrollAnimationDurationOverride
@property (readonly, nonatomic) CGFloat scrollBarOffset;
@property (nonatomic) BOOL scrollEventsInToViewIgnoresVisibility; // ivar: _scrollEventsInToViewIgnoresVisibility
@property (readonly, nonatomic) CGFloat scrollOffset;
@property (nonatomic) BOOL shouldEverShowTimeIndicators; // ivar: _shouldEverShowTimeIndicators
@property (nonatomic) BOOL showOnlyAllDayArea; // ivar: _showOnlyAllDayArea
@property (nonatomic) BOOL showsLeftBorder;
@property (nonatomic) BOOL showsTimeLabel;
@property (nonatomic) BOOL showsTimeLine;
@property (nonatomic) BOOL showsTimeMarker;
@property (nonatomic) BOOL sizeTimeViewUsingOnlyHourText; // ivar: _sizeTimeViewUsingOnlyHourText
@property (readonly) Class superclass;
@property (readonly, nonatomic) EKDayTimeView *timeView;
@property (retain, nonatomic) UIColor *timeViewTextColor;
@property (retain, nonatomic) UIVisualEffect *timeViewVisualEffect;
@property (nonatomic) CGFloat todayScrollSecondBuffer; // ivar: _todayScrollSecondBuffer
@property (nonatomic) CGFloat topContentInset; // ivar: _topContentInset
@property (nonatomic) CGFloat topYBoundaryForOccurrenceText; // ivar: _topYBoundaryForOccurrenceText
@property (nonatomic) BOOL usesVibrantGridDrawing; // ivar: _usesVibrantGridDrawing


-(BOOL)_isTimeMarkerFullyUnobstructed;
-(BOOL)_showingAllDaySection;
-(BOOL)_viewContentShouldDrawSynchronously;
-(BOOL)allDayViewContentShouldDrawSynchronously:(id)arg0 ;
-(BOOL)containsOccurrences;
-(BOOL)dayViewContentShouldDrawSynchronously:(id)arg0 ;
-(BOOL)eventOccursOnThisDay:(id)arg0 ;
-(BOOL)isAllDayLabelHighlighted;
-(BOOL)scrollTowardPoint:(struct CGPoint )arg0 ;
-(CGFloat)_adjustSecondBackwardForDSTHole:(CGFloat)arg0 ;
-(CGFloat)_adjustSecondForwardForDSTHole:(CGFloat)arg0 ;
-(CGFloat)_positionOfSecond:(int)arg0 ;
-(CGFloat)_scrollRate;
-(CGFloat)_scrollZoneTop;
-(CGFloat)_verticalOffset;
-(CGFloat)allDayRegionHeight;
-(CGFloat)dateAtPoint:(struct CGPoint )arg0 isAllDay:(*BOOL)arg1 ;
-(CGFloat)dateAtPoint:(struct CGPoint )arg0 isAllDay:(*BOOL)arg1 requireAllDayRegionInsistence:(BOOL)arg2 ;
-(CGFloat)highlightedHour;
-(CGFloat)maximumHourScale;
-(CGFloat)minimumHourScale;
-(CGFloat)scaledHourHeight;
-(CGFloat)yPositionPerhapsMatchingAllDayOccurrence:(id)arg0 ;
-(NSInteger)_sizeClass;
-(id)_generateVerticalGridExtensionImage;
-(id)allDayViewRequestsCurrentDisplayDate:(id)arg0 ;
-(id)dayViewContent:(id)arg0 selectedCopyViewForOccurrenceView:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 orientation:(NSInteger)arg2 displayDate:(id)arg3 backgroundColor:(id)arg4 opaque:(BOOL)arg5 scrollbarShowsInside:(BOOL)arg6 rightClickDelegate:(id)arg7 ;
-(id)occurrenceViewAtPoint:(struct CGPoint )arg0 ;
-(id)occurrenceViewForEvent:(id)arg0 ;
-(id)presentationControllerForEditMenu;
-(id)selectedEvent;
-(id)selectedEventsForEditMenu;
-(id)verticalScrollView;
-(int)_secondAtPosition:(CGFloat)arg0 ;
-(struct CGPoint )_pinchDistanceForGestureRecognizer:(id)arg0 ;
-(struct CGPoint )pointAtDate:(CGFloat)arg0 isAllDay:(BOOL)arg1 ;
-(struct CGRect )_scrollerRect;
-(struct CGRect )currentTimeRectInView:(id)arg0 ;
-(struct CGRect )currentTimeRectInView:(id)arg0 requireThumb:(BOOL)arg1 ;
-(struct CGRect )rectForEvent:(id)arg0 ;
-(void)_adjustForDateOrCalendarChange;
-(void)_clearVerticalGridExtensionImageCache;
-(void)_createAllDayViewWithSizeClass:(NSInteger)arg0 rightClickDelegate:(id)arg1 ;
-(void)_dayViewPinched:(id)arg0 ;
-(void)_disposeAllDayView;
-(void)_doubleTap:(id)arg0 ;
-(void)_invalidateMarkerTimer;
-(void)_localeChanged;
-(void)_notifyDelegateOfFinishedScrollingToOccurrence;
-(void)_scrollToSecond:(int)arg0 animated:(BOOL)arg1 whenFinished:(id)arg2 ;
-(void)_scrollToSecond:(int)arg0 offset:(CGFloat)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3 ;
-(void)_scrollViewWillBeginDragging:(id)arg0 ;
-(void)_startMarkerTimer;
-(void)_timeViewTapped:(id)arg0 ;
-(void)_updateContentForSizeCategoryChange:(id)arg0 ;
-(void)addViewToScroller:(id)arg0 isAllDay:(BOOL)arg1 ;
-(void)adjustForSignificantTimeChange;
-(void)adjustFrameToSpanToMidnightFromStartDate:(id)arg0 ;
-(void)allDayView:(id)arg0 didSelectEvent:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)allDayViewDidLayoutSubviews:(id)arg0 ;
-(void)attemptDisplayReviewPrompt;
-(void)bringEventToFront:(id)arg0 ;
-(void)configureOccurrenceViewForGestureController:(id)arg0 ;
-(void)dayContentView:(id)arg0 atPoint:(struct CGPoint )arg1 ;
-(void)dayViewContent:(id)arg0 didCreateOccurrenceViews:(id)arg1 ;
-(void)dayViewContent:(id)arg0 didSelectEvent:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)dayViewContent:(id)arg0 didTapInEmptySpaceOnDay:(CGFloat)arg1 ;
-(void)dayViewContent:(id)arg0 didTapPinnedOccurrence:(id)arg1 ;
-(void)dayViewContentDidCompleteAsyncLoadAndLayout:(id)arg0 ;
-(void)dealloc;
-(void)highlightHour:(CGFloat)arg0 ;
-(void)insertViewForEvent:(id)arg0 belowViewForOtherEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)loadData:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)relayoutExistingTimedOccurrences;
-(void)reloadData;
-(void)reloadDataSynchronously;
-(void)removeFromSuperview;
-(void)resetOccurrenceViewColors;
-(void)scrollEventsIntoViewAnimated:(BOOL)arg0 ;
-(void)scrollToDate:(id)arg0 animated:(BOOL)arg1 whenFinished:(id)arg2 ;
-(void)scrollToDate:(id)arg0 offset:(CGFloat)arg1 animated:(BOOL)arg2 whenFinished:(id)arg3 ;
-(void)scrollToEvent:(id)arg0 animated:(BOOL)arg1 completionBlock:(id)arg2 ;
-(void)scrollToNowAnimated:(BOOL)arg0 whenFinished:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)selectEvent:(id)arg0 ;
-(void)setAllDayLabelHighlighted:(BOOL)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)setScrollerYInset:(CGFloat)arg0 keepingYPointVisible:(CGFloat)arg1 ;
-(void)setTimeZone:(id)arg0 ;
-(void)stopScrolling;
-(void)updateMarkerPosition;
-(void)willMoveToSuperview:(id)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif