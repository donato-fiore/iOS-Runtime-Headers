// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKDAYVIEWCONTENT_H
#define EKDAYVIEWCONTENT_H

@class UIView, NSMutableArray, EKEvent, NSCalendar, NSString, EKCalendarDate, UIColor, UITraitCollection, NSTimeZone;
@protocol CUIKSingleDayTimelineLayoutScreenUtils, EKDayOccurrenceViewDelegate, UIGestureRecognizerDelegate, EKDayViewContentDelegate;


#import "EKDayGridView.h"

@interface EKDayViewContent : UIView <CUIKSingleDayTimelineLayoutScreenUtils, EKDayOccurrenceViewDelegate, UIGestureRecognizerDelegate>

 {
    EKDayGridView *_grid;
    UIView *_saturdayDarkeningView;
    UIView *_sundayDarkeningView;
    NSUInteger _daysToDisplay;
    NSMutableArray *_lastLayoutWidthForDay;
    BOOL _loadingOccurrences;
    BOOL _putSelectionOnTop;
    BOOL _hasCustomOccurrencePadding;
    EKEvent *_selectedEvent;
    NSMutableArray *_dayStarts;
    NSMutableArray *_itemsForPreloadByDay;
    NSMutableArray *_itemsForPreloadByDayByEndDate;
    NSMutableArray *_itemsByDay;
    NSMutableArray *_itemsByDayByEndDate;
    CGRect _latestVisibleRect;
    *CGFloat _visiblePinnedStackHeightAbove;
    *CGFloat _visiblePinnedStackHeightBelow;
    NSMutableArray *_geometryDelegates;
    NSMutableArray *_reusableViews;
    BOOL _dataLoaded;
    NSInteger _sizeClass;
    BOOL _shouldLayoutInReverse;
    BOOL _shouldAnimateLayout;
    NSMutableArray *_temporaryViewCacheByDay;
    NSInteger _saveTemporaryViewsEntryCount;
}


@property (nonatomic) BOOL allowsOccurrenceSelection; // ivar: _allowsOccurrenceSelection
@property (copy, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (nonatomic) BOOL darkensWeekends; // ivar: _darkensWeekends
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKDayViewContentDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) EKEvent *dimmedOccurrence; // ivar: _dimmedOccurrence
@property (readonly, nonatomic) EKCalendarDate *endDate; // ivar: _endDate
@property (nonatomic) BOOL eventsFillGrid; // ivar: _eventsFillGrid
@property (readonly, nonatomic) CGFloat firstEventSecond;
@property (nonatomic) CGFloat fixedDayWidth; // ivar: _fixedDayWidth
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger occurrenceBackgroundStyle; // ivar: _occurrenceBackgroundStyle
@property (retain, nonatomic) UIColor *occurrenceLocationColor; // ivar: _occurrenceLocationColor
@property (nonatomic) UIEdgeInsets occurrencePadding; // ivar: _occurrencePadding
@property (retain, nonatomic) UIColor *occurrenceTextBackgroundColor; // ivar: _occurrenceTextBackgroundColor
@property (retain, nonatomic) UIColor *occurrenceTimeColor; // ivar: _occurrenceTimeColor
@property (retain, nonatomic) UIColor *occurrenceTitleColor; // ivar: _occurrenceTitleColor
@property (nonatomic) BOOL offscreenOccurrencePinningEnabled; // ivar: _offscreenOccurrencePinningEnabled
@property (nonatomic) BOOL reduceLayoutProcessingForAnimation; // ivar: _reduceLayoutProcessingForAnimation
@property (retain, nonatomic, setter=selectEvent:) EKEvent *selectedEvent;
@property (nonatomic) BOOL showsLeftBorder;
@property (retain, nonatomic) UITraitCollection *stagedTraitCollection; // ivar: _stagedTraitCollection
@property (copy, nonatomic) EKCalendarDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (nonatomic) BOOL usesSmallText; // ivar: _usesSmallText


-(BOOL)_doOffscreenOccurrences;
-(BOOL)_getBottomPinRegion:(*CGFloat)arg0 dayIndex:(*NSUInteger)arg1 forPoint:(struct CGPoint )arg2 ;
-(BOOL)_layoutDayIfNeeded:(NSInteger)arg0 isLoadingAsync:(BOOL)arg1 ;
-(BOOL)eventsIntersectRect:(struct CGRect )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)RoundToScreenScale:(CGFloat)arg0 ;
-(CGFloat)_dayWidth;
-(CGFloat)dateForPoint:(struct CGPoint )arg0 ;
-(NSUInteger)_dayIndexForAllIndex:(NSUInteger)arg0 ;
-(id)allVisibleItems;
-(id)dayStarts;
-(id)grid;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 orientation:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 sizeClass:(NSInteger)arg1 orientation:(NSInteger)arg2 backgroundColor:(id)arg3 opaque:(BOOL)arg4 numberOfDaysToDisplay:(NSUInteger)arg5 ;
-(id)itemsForPreloadByDay;
-(id)lastDisplayedSecond;
-(id)occurrenceViewForEvent:(id)arg0 ;
-(id)occurrenceViewForEvent:(id)arg0 onDate:(CGFloat)arg1 ;
-(id)occurrenceViews;
-(id)presentationControllerForEditMenu;
-(id)selectedCopyViewForDayOccurrenceView:(id)arg0 ;
-(id)visibleItemsByDay;
-(struct CGPoint )pointForDate:(CGFloat)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )insetsForInterfaceLayout:(struct UIEdgeInsets )arg0 ;
-(struct _NSRange )_dayRangeForEvent:(id)arg0 useProposedTime:(BOOL)arg1 ;
-(struct _NSRange )_dayRangeForEventWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)_adjustViewsForPinning;
-(void)_computeDayStartsAndEnds;
-(void)_configureOccurrenceViewMarginAndPadding:(id)arg0 ;
-(void)_layoutDay:(NSUInteger)arg0 isLoadingAsync:(BOOL)arg1 ;
-(void)_layoutDaysIfVisible;
-(void)_tapRecognized:(id)arg0 ;
-(void)applyContentItem:(id)arg0 toView:(id)arg1 ;
-(void)applyLoadedOccurrenceBatchStartingAtIndex:(NSInteger)arg0 batchSize:(NSInteger)arg1 fromArray:(id)arg2 withStartDate:(id)arg3 animated:(BOOL)arg4 reverse:(BOOL)arg5 completion:(id)arg6 ;
-(void)applyLoadedOccurrencesWithBatching:(BOOL)arg0 animated:(BOOL)arg1 reverse:(BOOL)arg2 completion:(id)arg3 ;
-(void)attemptDisplayReviewPrompt;
-(void)clearTemporaryViews;
-(void)configureOccurrenceViewForGestureController:(id)arg0 ;
-(void)dayOccurrenceViewSelected:(id)arg0 source:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)loadAndLayoutOccurrences:(id)arg0 reverse:(BOOL)arg1 ;
-(void)loadOccurrences:(id)arg0 ;
-(void)movePreloadedItemsToVisible;
-(void)prepareForReuseIsReload:(BOOL)arg0 ;
-(void)rectBecameVisible:(struct CGRect )arg0 ;
-(void)saveTemporaryViews;
-(void)selectEvent:(id)arg0 ;
-(void)setHoursToPadTop:(CGFloat)arg0 ;
-(void)setNeedsLayout;
-(void)setOccurrences:(id)arg0 ;
-(void)setOrientation:(NSInteger)arg0 ;
-(void)setViewsDimmed:(BOOL)arg0 forEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif