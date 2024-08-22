// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STHISTORICALUSAGEVIEWCONTROLLER_H
#define STHISTORICALUSAGEVIEWCONTROLLER_H

@class UIViewController, NSLayoutConstraint, UIView, UIPageViewController, NSString;
@protocol UIPageViewControllerDataSource, UIPageViewControllerDelegate, STUsageDetailsViewModelCoordinator;


#import "STUsageGraphViewController.h"
#import "STUsageSummaryTitleView.h"

@interface STHistoricalUsageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>



@property (retain, nonatomic) NSObject<STUsageDetailsViewModelCoordinator> *coordinator; // ivar: _coordinator
@property NSInteger currentViewMode; // ivar: _currentViewMode
@property (retain) NSLayoutConstraint *dayGraphContainerHeightConstraint; // ivar: _dayGraphContainerHeightConstraint
@property (retain) UIView *dayGraphContainerView; // ivar: _dayGraphContainerView
@property (retain) UIPageViewController *dayGraphPageViewController; // ivar: _dayGraphPageViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat graphHeight; // ivar: _graphHeight
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat maximumYAxisLabelWidth; // ivar: _maximumYAxisLabelWidth
@property (retain) STUsageGraphViewController *selectedDayGraphViewController; // ivar: _selectedDayGraphViewController
@property (retain, nonatomic) STUsageGraphViewController *selectedWeekGraphViewController; // ivar: _selectedWeekGraphViewController
@property (readonly) Class superclass;
@property (retain) STUsageSummaryTitleView *titleView; // ivar: _titleView
@property (readonly) NSUInteger type; // ivar: _type
@property (retain) NSLayoutConstraint *weekGraphContainerHeightConstraint; // ivar: _weekGraphContainerHeightConstraint
@property (retain) UIView *weekGraphContainerView; // ivar: _weekGraphContainerView
@property (retain) UIPageViewController *weekGraphPageViewController; // ivar: _weekGraphPageViewController


+(id)historicalUsageViewControllerOfType:(NSUInteger)arg0 graphHeight:(CGFloat)arg1 ;
-(id)_dataSetFromUsageReport:(id)arg0 ;
-(id)_dayGraphViewControllerForDay:(NSUInteger)arg0 week:(NSUInteger)arg1 usageReport:(id)arg2 ;
-(id)_nextGraphViewControllerForPageViewController:(id)arg0 currentGraphViewController:(id)arg1 direction:(NSInteger)arg2 ;
-(id)_weekGraphViewControllerForWeek:(NSUInteger)arg0 usageReport:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerAfterViewController:(id)arg1 ;
-(id)pageViewController:(id)arg0 viewControllerBeforeViewController:(id)arg1 ;
-(void)_selectedBarViewDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_selectedDayUsageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_selectedWeekUsageReportDidChange:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)pageViewController:(id)arg0 didFinishAnimating:(BOOL)arg1 previousViewControllers:(id)arg2 transitionCompleted:(BOOL)arg3 ;
-(void)pageViewController:(id)arg0 willTransitionToViewControllers:(id)arg1 ;
-(void)prepareForSegue:(id)arg0 sender:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif