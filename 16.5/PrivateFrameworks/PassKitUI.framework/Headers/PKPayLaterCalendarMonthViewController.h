// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYLATERCALENDARMONTHVIEWCONTROLLER_H
#define PKPAYLATERCALENDARMONTHVIEWCONTROLLER_H

@class UICollectionViewController, PKPayLaterPaymentIntentController, PKPayLaterInstallmentsMonth, NSDateFormatter, NSCalendar, NSString, UIGestureRecognizer;
@protocol UICollectionViewDelegateFlowLayout, PKCalendarMonthDataSource, PKHorizontalScrollingChildLayoutDataSource, PKCalendarMonthAppearance, PKHorizontalScrollingChildViewControllerProtocol, PKHorizontalScrollingViewControllerDelegate;


#import "PKPayLaterInstallmentsMonthPresenter.h"
#import "PKPayLaterInstallmentPresenter.h"
#import "PKHorizontalScrollingChildLayout.h"
#import "PKDashboardTitleHeaderView.h"

@interface PKPayLaterCalendarMonthViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout, PKCalendarMonthDataSource, PKHorizontalScrollingChildLayoutDataSource, PKCalendarMonthAppearance, PKHorizontalScrollingChildViewControllerProtocol>

 {
    PKPayLaterInstallmentsMonthPresenter *_installmentsMonthPresenter;
    PKPayLaterInstallmentPresenter *_installmentPresenter;
    PKPayLaterPaymentIntentController *_paymentIntentController;
    PKHorizontalScrollingChildLayout *_layout;
    BOOL _isLowEndDevice;
    PKPayLaterInstallmentsMonth *_installmentsMonth;
    NSDateFormatter *_weekdayFormatter;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_monthYearFormatter;
    NSCalendar *_calendar;
    PKDashboardTitleHeaderView *_sampleHeaderView;
    UIEdgeInsets _contentInset;
}


@property (nonatomic) CGFloat alphaTransition; // ivar: _alphaTransition
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInsett
@property (nonatomic) NSInteger contentInsetAdjustmentBehavior; // ivar: _contentInsetAdjustmentBehavior
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIGestureRecognizer *gestureRecognizerRequiredToFail; // ivar: gestureRecognizerRequiredToFail
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PKHorizontalScrollingViewControllerDelegate> *scrollingDelegate; // ivar: scrollingDelegate
@property (readonly) Class superclass;
@property (nonatomic) BOOL visible; // ivar: _visible


-(BOOL)_hasHeaderForSection:(NSInteger)arg0 ;
-(BOOL)canSelectDate:(id)arg0 ;
-(BOOL)isDateSelected:(id)arg0 ;
-(BOOL)shouldShowDate:(id)arg0 ;
-(CGFloat)alphaForIndexPath:(id)arg0 visible:(BOOL)arg1 transition:(CGFloat)arg2 ;
-(CGFloat)lineSpacingForSection:(NSInteger)arg0 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)numberOfDaysInWeek;
-(NSUInteger)numberOfWeeks;
-(id)_installmentItemForInstallment:(id)arg0 ;
-(id)calendar;
-(id)calendarMonthStartDate;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)data;
-(id)decorationViewForDayView:(id)arg0 date:(id)arg1 ;
-(id)footer;
-(id)indexPathForCalendar;
-(id)initWithInstallmentsMonthPresenter:(id)arg0 installmentPresenter:(id)arg1 paymentIntentController:(id)arg2 ;
-(id)stringForDay:(id)arg0 ;
-(id)stringForWeekday:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForFooterInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(unsigned int)horizontalAlignmentForSection:(NSInteger)arg0 ;
-(void)_applyMaskToCell:(id)arg0 section:(NSInteger)arg1 firstInSection:(BOOL)arg2 lastInSection:(BOOL)arg3 ;
-(void)_configureHeaderView:(id)arg0 inSection:(NSInteger)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setData:(id)arg0 swap:(BOOL)arg1 ;
-(void)setInstallmentsMonth:(id)arg0 swap:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif