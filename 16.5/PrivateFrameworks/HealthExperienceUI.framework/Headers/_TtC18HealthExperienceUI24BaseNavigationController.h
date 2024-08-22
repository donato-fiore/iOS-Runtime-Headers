// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18HEALTHEXPERIENCEUI24BASENAVIGATIONCONTROLLER_H
#define _TTC18HEALTHEXPERIENCEUI24BASENAVIGATIONCONTROLLER_H

@class UINavigationController;



@interface _TtC18HealthExperienceUI24BaseNavigationController : UINavigationController {
    ? $__lazy_storage_$_internalSettingsGestureRecognizer;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)onInternalSettingsTap;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif