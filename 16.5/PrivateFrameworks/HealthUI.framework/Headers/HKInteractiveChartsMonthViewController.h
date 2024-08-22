// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKINTERACTIVECHARTSMONTHVIEWCONTROLLER_H
#define HKINTERACTIVECHARTSMONTHVIEWCONTROLLER_H

@class NSPredicate, _UINavigationControllerPalette, HKHealthStore, UIColor, HKSampleType;


#import "HKMonthViewController.h"
#import "HKWeekdayHeaderPaletteView.h"

@interface HKInteractiveChartsMonthViewController : HKMonthViewController

@property (retain, nonatomic) NSPredicate *additionalSamplePredicate; // ivar: _additionalSamplePredicate
@property (retain, nonatomic) _UINavigationControllerPalette *containingPalette; // ivar: _containingPalette
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) UIColor *sampleColor; // ivar: _sampleColor
@property (retain, nonatomic) HKSampleType *sampleType; // ivar: _sampleType
@property (retain, nonatomic) HKWeekdayHeaderPaletteView *weekdayHeaderPaletteView; // ivar: _weekdayHeaderPaletteView


-(id)initWithHealthStore:(id)arg0 dateCache:(id)arg1 date:(id)arg2 ;
-(void)calendarScrollViewController:(id)arg0 accessoryViewForDate:(id)arg1 accessoryViewCompletion:(id)arg2 ;
-(void)didTapTodayButton;
-(void)dismissViewController:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif