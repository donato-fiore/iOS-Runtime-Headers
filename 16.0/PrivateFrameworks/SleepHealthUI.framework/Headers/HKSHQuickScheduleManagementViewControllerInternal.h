// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSHQUICKSCHEDULEMANAGEMENTVIEWCONTROLLERINTERNAL_H
#define HKSHQUICKSCHEDULEMANAGEMENTVIEWCONTROLLERINTERNAL_H

@class UINavigationController;
@protocol HKSHQuickScheduleManagementViewControllerDelegateInternal;



@interface HKSHQuickScheduleManagementViewControllerInternal : UINavigationController {
    ? sleepStore;
    ? provenanceSource;
    ? sleepScheduleProvider;
    ? gregorianCalendar;
    ? featureAvailability;
    ? appStateObserver;
}


@property (nonatomic, weak) NSObject<HKSHQuickScheduleManagementViewControllerDelegateInternal> *sleepDelegate; // ivar: sleepDelegate


-(BOOL)_canShowWhileLocked;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(id)initWithSleepStore:(id)arg0 provenanceSource:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif