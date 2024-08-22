// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICALENDARVIEW_H
#define UICALENDARVIEW_H

@class NSDateFormatter, NSDateInterval, NSCalendar, NSString, NSLocale, NSDate, NSDateComponents, NSTimeZone;
@protocol UICollectionViewDelegate, _UICalendarHeaderViewDelegate, _UICalendarMonthYearSelectorDelegate, UICalendarViewDelegate;


#import "UIView.h"
#import "UICollectionViewDiffableDataSource.h"
#import "_UICalendarViewDataSourceController.h"
#import "_UICalendarMonthYearSelector.h"
#import "_UIDatePickerLinkedLabel.h"
#import "_UICalendarDataModel.h"
#import "UICollectionView.h"
#import "_UICalendarViewDecorationSystem.h"
#import "_UICalendarHeaderView.h"
#import "UICalendarSelection.h"
#import "_UICalendarWeekdayView.h"

@interface UICalendarView : UIView <UICollectionViewDelegate, _UICalendarHeaderViewDelegate, _UICalendarMonthYearSelectorDelegate>

 {
    ? _flags;
    NSDateFormatter *_cellFormatter;
    UICollectionViewDiffableDataSource *_dataSource;
    _UICalendarViewDataSourceController *_dataSourceController;
    NSInteger _stateUpdatesInFlight;
    _UICalendarMonthYearSelector *_monthYearSelector;
    CGSize _lastKnownSize;
    CGPoint _frozenContentOffset;
    CGFloat _lastWeekdayLabelWidth;
    CGFloat _collectionViewAspectRatio;
    CGFloat _collectionViewDecorationsTotalHeight;
    _UIDatePickerLinkedLabel *_daySizingLabel;
    _UICalendarDataModel *_dataModel;
    NSInteger _viewState;
}


@property (copy, nonatomic) NSDateInterval *availableDateRange;
@property (copy, nonatomic) NSCalendar *calendar;
@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) _UICalendarViewDecorationSystem *decorationSystem; // ivar: _decorationSystem
@property (weak, nonatomic) NSObject<UICalendarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fontDesign;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UICalendarHeaderView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSLocale *locale;
@property (copy, nonatomic) NSDate *maximumDate;
@property (copy, nonatomic) NSDateComponents *maximumDateComponents;
@property (copy, nonatomic) NSDate *minimumDate;
@property (copy, nonatomic) NSDateComponents *minimumDateComponents;
@property (retain, nonatomic) UICalendarSelection *selection;
@property (retain, nonatomic) UICalendarSelection *selectionBehavior; // ivar: _selectionBehavior
@property (readonly) Class superclass;
@property (retain, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSDateComponents *visibleDateComponents;
@property (nonatomic) BOOL wantsDateDecorations;
@property (retain, nonatomic) _UICalendarWeekdayView *weekdayView; // ivar: _weekdayView


-(BOOL)_canSelectItemAtIndexPath:(id)arg0 forSelection:(BOOL)arg1 ;
-(BOOL)_hasCellDecorations;
-(BOOL)_shouldUpdateDateViewForVisibleMonth:(id)arg0 ;
-(BOOL)allowsMultipleSelection;
-(BOOL)collectionView:(id)arg0 shouldDeselectItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)__dayAndWeekdayLabelWidth;
-(CGFloat)_preferredCollectionViewHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(id)_configuedCellForCollectionView:(id)arg0 indexPath:(id)arg1 day:(id)arg2 ;
-(id)_contentSizeCategoryForContentWidth:(CGFloat)arg0 ;
-(id)_dataModel;
-(id)_delegateDecorationForDay:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_intrinsicSizeWithinSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cleanupDataIfNecessary;
-(void)_configureMonthYearSelector;
-(void)_deselectDates:(id)arg0 animated:(BOOL)arg1 ;
-(void)_destroyMonthYearSelector;
-(void)_freezeContentOffset;
-(void)_notifyDelegateAboutVisibilityChange;
-(void)_performIfNotIgnoringScrollCallbacks:(id)arg0 ;
-(void)_performIgnoringScrollCallbacks:(id)arg0 ;
-(void)_reconfigureVisibleItems;
-(void)_reload;
-(void)_reloadCollectionViewLayout;
-(void)_reloadDataSourceController;
-(void)_reloadDateFormatters;
-(void)_reloadPossibleDayValues;
-(void)_reloadVisibleMonthIfNeeded;
-(void)_restoreContentOffsetWithPageOffset:(NSInteger)arg0 ;
-(void)_selectDates:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setNeedsCollectionViewScrollPositionUpdate;
-(void)_setNeedsCollectionViewSelectionUpdate;
-(void)_setNeedsUpdateSizing;
-(void)_setVisibleMonth:(id)arg0 ;
-(void)_setVisibleMonth:(id)arg0 animated:(BOOL)arg1 ;
-(void)_setVisibleMonth:(id)arg0 animated:(BOOL)arg1 updateDataSource:(BOOL)arg2 updateCollectionView:(BOOL)arg3 notifyDelegate:(BOOL)arg4 ;
-(void)_setupInitialValues;
-(void)_setupViewHierarchy;
-(void)_shouldDifferentiateWithoutColorUpdated:(id)arg0 ;
-(void)_updateCollectionViewContentInsets;
-(void)_updateCollectionViewScrollPosition:(BOOL)arg0 ;
-(void)_updateCollectionViewSelection:(BOOL)arg0 ;
-(void)_updateContentSizeLimitations;
-(void)_updateDateViewForVisibleMonth:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateSizing;
-(void)_updateViewState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_updateVisibleMonth:(id)arg0 animated:(BOOL)arg1 ;
-(void)_updateVisibleMonthIfNecessary;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)headerViewDidSelect:(id)arg0 ;
-(void)headerViewDidStepBackward:(id)arg0 ;
-(void)headerViewDidStepForward:(id)arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)monthYearSelector:(id)arg0 didSelectMonth:(id)arg1 ;
-(void)reloadDecorationsForDateComponents:(id)arg0 animated:(BOOL)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setAllowsMultipleSelection:(BOOL)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif