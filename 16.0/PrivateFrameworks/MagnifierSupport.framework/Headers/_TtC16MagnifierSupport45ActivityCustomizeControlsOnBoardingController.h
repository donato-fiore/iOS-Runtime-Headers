// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16MAGNIFIERSUPPORT45ACTIVITYCUSTOMIZECONTROLSONBOARDINGCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT45ACTIVITYCUSTOMIZECONTROLSONBOARDINGCONTROLLER_H

@class OBTableWelcomeController;



@interface _TtC16MagnifierSupport45ActivityCustomizeControlsOnBoardingController : OBTableWelcomeController {
    ? delegate;
    ? activityName;
    ? minPrimaryControls;
    ? maxPrimaryControls;
    ? tableViewHeight;
    ? heightConstraint;
    ? $__lazy_storage_$_dataSource;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 adoptTableViewScrollView:(BOOL)arg3 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif