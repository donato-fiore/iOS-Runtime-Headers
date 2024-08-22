// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTCV13SLEEPHEALTHUI41QUICKSCHEDULEMANAGEMENTVIEWREPRESENTATION11COORDINATOR_H
#define _TTCV13SLEEPHEALTHUI41QUICKSCHEDULEMANAGEMENTVIEWREPRESENTATION11COORDINATOR_H

@protocol HKSHQuickScheduleManagementViewControllerDelegateInternal;

#import <Foundation/Foundation.h>


@interface _TtCV13SleepHealthUI41QuickScheduleManagementViewRepresentation11Coordinator : NSObject <HKSHQuickScheduleManagementViewControllerDelegateInternal>

 {
    ? parent;
    ? viewController;
}




-(id)init;
-(void)quickScheduleManagementViewController:(id)arg0 didSave:(id)arg1 ;
-(void)quickScheduleManagementViewController:(id)arg0 shouldPresent:(id)arg1 ;
-(void)quickScheduleManagementViewControllerDidCancel:(id)arg0 ;
-(void)quickScheduleManagementViewControllerWillSave:(id)arg0 ;


@end


#endif