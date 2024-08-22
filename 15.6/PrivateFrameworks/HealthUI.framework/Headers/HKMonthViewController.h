// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMONTHVIEWCONTROLLER_H
#define HKMONTHVIEWCONTROLLER_H

@class NSDateComponents, NSDate, NSString, UILabel;
@protocol HKCalendarScrollViewControllerDelegate, HKMonthViewControllerDelegate;


#import "HKViewController.h"
#import "HKCalendarScrollViewController.h"
#import "HKDateCache.h"

@interface HKMonthViewController : HKViewController <HKCalendarScrollViewControllerDelegate>

 {
    NSDateComponents *_cachedDateComponents;
}


@property (retain, nonatomic) HKCalendarScrollViewController *calendarScrollViewController; // ivar: _calendarScrollViewController
@property (readonly, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKMonthViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger titleAlignment; // ivar: _titleAlignment
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL wantsShortTitleDate; // ivar: _wantsShortTitleDate


-(id)_titleStringForDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateCache:(id)arg0 date:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_didTapBackButton;
-(void)_updateBackButton;
-(void)_updateCurrentMonthBarButtonItemWithDate:(id)arg0 ;
-(void)calendarScrollViewController:(id)arg0 didSelectDate:(id)arg1 ;
-(void)calendarScrollViewController:(id)arg0 didUpdateCenteredMonth:(id)arg1 ;
-(void)createCalendarScrollViewController;
-(void)createTitleLabel;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif