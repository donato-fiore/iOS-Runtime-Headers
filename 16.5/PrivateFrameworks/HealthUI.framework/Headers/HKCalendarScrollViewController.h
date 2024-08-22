// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCALENDARSCROLLVIEWCONTROLLER_H
#define HKCALENDARSCROLLVIEWCONTROLLER_H

@class NSCalendar, NSDate, NSMutableArray, NSString, UIScrollView;
@protocol UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver, HKCalendarScrollViewControllerDelegate;


#import "HKViewController.h"
#import "HKDateCache.h"
#import "HKMonthDayCell.h"

@interface HKCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver>

 {
    NSUInteger _numberOfRows;
    NSCalendar *_calendar;
    HKDateCache *_dateCache;
    HKMonthDayCell *_selectedCell;
    NSDate *_initiallyCenteredDate;
    NSMutableArray *_weekViews;
    BOOL _needsInitialOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKCalendarScrollViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat topInset; // ivar: _topInset


-(CGFloat)_heightOfAllWeekCells;
-(NSUInteger)_firstVisibleWeekIndex;
-(id)_currentlyCenteredVisibleWeek;
-(id)_startDateToTileWeekViews:(id)arg0 ;
-(id)_weekForDate:(id)arg0 ;
-(id)_weekViewContainingTitleForThisMonth;
-(id)_weekViewForToday;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSelectedDate:(id)arg0 ;
-(struct CGPoint )_centerPointToCenterDate:(id)arg0 ;
-(struct CGPoint )_setWeekViewsToCenterDate:(id)arg0 forceUpdate:(BOOL)arg1 ;
-(struct CGRect )_visibleContentRect;
-(void)_createWeekViews;
-(void)_findCenteredWeekAndUpdateTitleIfNecessary;
-(void)_pulseCircle;
-(void)_refreshViewsAndUpdateToday;
-(void)_selectCellForDate:(id)arg0 ;
-(void)_selectTodayCell;
-(void)dateCacheDidUpdate:(id)arg0 onNotification:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)scrollToDate:(id)arg0 animateIfPossible:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setSelectedCell:(id)arg0 ;
-(void)updateVisibleAccessoryViews;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)week:(id)arg0 cellSelected:(id)arg1 ;


@end


#endif