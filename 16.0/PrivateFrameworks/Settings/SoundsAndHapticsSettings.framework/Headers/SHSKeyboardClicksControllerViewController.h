// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSKEYBOARDCLICKSCONTROLLERVIEWCONTROLLER_H
#define SHSKEYBOARDCLICKSCONTROLLERVIEWCONTROLLER_H

@class PSListController;



@interface SHSKeyboardClicksControllerViewController : PSListController



+(id)combinedDescription;
-(id)_hapticValue:(id)arg0 ;
-(id)specifiers;
-(void)_setHapticValue:(id)arg0 specifier:(id)arg1 ;
-(void)_setSoundValue:(id)arg0 specifier:(id)arg1 ;
-(void)_updateReloadSpecifierInParentController;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif