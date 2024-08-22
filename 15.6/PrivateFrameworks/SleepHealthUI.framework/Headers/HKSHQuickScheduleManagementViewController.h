// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKSHQUICKSCHEDULEMANAGEMENTVIEWCONTROLLER_H
#define HKSHQUICKSCHEDULEMANAGEMENTVIEWCONTROLLER_H

@class UIViewController;
@protocol HKSHQuickScheduleManagementViewControllerDelegate;


#import "HKSHQuickScheduleManagementViewControllerInternal.h"
#import "HKSHQuickScheduleManagementViewControllerDelegateWrapper.h"

@interface HKSHQuickScheduleManagementViewController : UIViewController {
    HKSHQuickScheduleManagementViewControllerInternal *_internalViewController;
    HKSHQuickScheduleManagementViewControllerDelegateWrapper *_delegateWrapper;
}


@property (weak, nonatomic) NSObject<HKSHQuickScheduleManagementViewControllerDelegate> *sleepDelegate;


-(BOOL)_canShowWhileLocked;
-(id)initWithSleepStore:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif