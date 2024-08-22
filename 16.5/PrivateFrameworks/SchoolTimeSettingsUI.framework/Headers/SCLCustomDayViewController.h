// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLCUSTOMDAYVIEWCONTROLLER_H
#define SCLCUSTOMDAYVIEWCONTROLLER_H

@protocol SCLCustomDayViewControllerDelegate;


#import "SCLListViewController.h"
#import "SCLSettingsViewModel.h"

@interface SCLCustomDayViewController : SCLListViewController

@property (weak, nonatomic) NSObject<SCLCustomDayViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) SCLSettingsViewModel *viewModel; // ivar: _viewModel


-(id)initWithViewModel:(id)arg0 title:(id)arg1 ;
-(void)loadSpecifierSource;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif