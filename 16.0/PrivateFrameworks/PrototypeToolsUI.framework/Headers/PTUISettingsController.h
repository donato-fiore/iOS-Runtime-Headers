// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTUISETTINGSCONTROLLER_H
#define PTUISETTINGSCONTROLLER_H

@class UINavigationController, UIBarButtonItem;



@interface PTUISettingsController : UINavigationController

@property (retain, nonatomic) UIBarButtonItem *dismissButton; // ivar: _dismissButton


-(BOOL)_canShowWhileLocked;
-(id)_defaultDismissButton;
-(id)_initWithRootModule:(id)arg0 ;
-(id)initWithRootModuleController:(id)arg0 ;
-(id)initWithRootSettings:(id)arg0 ;
-(void)_dismiss;
-(void)_reloadWithRootModule:(id)arg0 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif