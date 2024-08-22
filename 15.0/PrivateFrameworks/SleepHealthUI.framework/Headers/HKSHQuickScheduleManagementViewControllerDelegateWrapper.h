// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSHQUICKSCHEDULEMANAGEMENTVIEWCONTROLLERDELEGATEWRAPPER_H
#define HKSHQUICKSCHEDULEMANAGEMENTVIEWCONTROLLERDELEGATEWRAPPER_H

@protocol HKSHQuickScheduleManagementViewControllerDelegateInternal, HKSHQuickScheduleManagementViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "HKSHQuickScheduleManagementViewController.h"

@interface HKSHQuickScheduleManagementViewControllerDelegateWrapper : NSObject <HKSHQuickScheduleManagementViewControllerDelegateInternal>



@property (weak, nonatomic) HKSHQuickScheduleManagementViewController *viewController; // ivar: _viewController
@property (weak, nonatomic) NSObject<HKSHQuickScheduleManagementViewControllerDelegate> *wrappedDelegate; // ivar: _wrappedDelegate


-(void)quickScheduleManagementViewController:(id)arg0 didSave:(id)arg1 ;
-(void)quickScheduleManagementViewController:(id)arg0 shouldPresent:(id)arg1 ;
-(void)quickScheduleManagementViewControllerDidCancel:(id)arg0 ;
-(void)quickScheduleManagementViewControllerWillSave:(id)arg0 ;


@end


#endif