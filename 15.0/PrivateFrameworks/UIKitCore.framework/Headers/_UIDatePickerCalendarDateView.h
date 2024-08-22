// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERCALENDARDATEVIEW_H
#define _UIDATEPICKERCALENDARDATEVIEW_H

@class NSDateFormatter, NSLayoutConstraint, NSCalendar, NSString, NSLocale;
@protocol UICollectionViewDelegate, _UIDatePickerCalendarDateViewDelegate;


#import "UIView.h"
#import "UIStackView.h"
#import "UICollectionView.h"
#import "UICollectionViewDiffableDataSource.h"
#import "_UIDatePickerCalendarViewDataSourceController.h"
#import "_UIDatePickerLinkedLabel.h"
#import "_UIDatePickerDateRange.h"
#import "_UIDatePickerCalendarDay.h"
#import "_UIDatePickerCalendarMonth.h"

@interface _UIDatePickerCalendarDateView : UIView <UICollectionViewDelegate>

 {
    ? _flags;
    NSDateFormatter *_cellFormatter;
    UIStackView *_weekdayStackView;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionViewDiffableDataSource *_dataSource;
    _UIDatePickerCalendarViewDataSourceController *_dataSourceController;
    CGPoint _frozenContentOffset;
    CGSize _lastKnownSize;
    _UIDatePickerLinkedLabel *_daySizingLabel;
    _UIDatePickerLinkedLabel *_weekdaySizingLabel;
}


@property (readonly, nonatomic) NSCalendar *calendar; // ivar: _calendar
@property (retain, nonatomic) NSString *customFontDesign; // ivar: _customFontDesign
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange; // ivar: _dateRange
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_UIDatePickerCalendarDateViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) _UIDatePickerCalendarDay *selectedDate; // ivar: _selectedDate
@property (readonly) Class superclass;
@property (retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth; // ivar: _visibleMonth


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)collectionView:(id)arg0 shouldSelectItemAtIndexPath:(id)arg1 ;
-(CGFloat)__dayAndWeekdayLabelWidth;
-(id)_cellForCollectionView:(id)arg0 indexPath:(id)arg1 day:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_cleanupDataIfNecessary;
-(void)_freezeContentOffset;
-(void)_notifyDelegateAboutDataChange;
-(void)_notifyDelegateAboutVisibilityChange;
-(void)_performIfNotIgnoringScrollCallbacks:(id)arg0 ;
-(void)_performIgnoringScrollCallbacks:(id)arg0 ;
-(void)_reload;
-(void)_reloadCollectionViewLayout;
-(void)_reloadDataSourceController;
-(void)_reloadDateFormatters;
-(void)_reloadPossibleDayValues;
-(void)_reloadWeekdays;
-(void)_restoreContentOffsetWithPageOffset:(NSInteger)arg0 ;
-(void)_setNeedsCollectionViewScrollPositionUpdate;
-(void)_setNeedsCollectionViewSelectionUpdate;
-(void)_setNeedsUpdateSizing;
-(void)_setupDateFormatter;
-(void)_setupViewHierarchy;
-(void)_shouldDifferentiateWithoutColorUpdated:(id)arg0 ;
-(void)_updateCollectionViewContentInsets;
-(void)_updateCollectionViewScrollPosition:(BOOL)arg0 ;
-(void)_updateCollectionViewSelection:(BOOL)arg0 ;
-(void)_updateSizing;
-(void)_updateVisibleMonthIfNecessary;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)layoutSubviews;
-(void)reloadWithCalendar:(id)arg0 locale:(id)arg1 dateRange:(id)arg2 selectedDay:(id)arg3 visibleMonth:(id)arg4 ;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif