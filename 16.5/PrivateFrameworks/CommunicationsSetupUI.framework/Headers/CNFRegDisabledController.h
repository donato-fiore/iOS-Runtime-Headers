// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFREGDISABLEDCONTROLLER_H
#define CNFREGDISABLEDCONTROLLER_H

@class PSSpecifier;


#import "CNFRegFirstRunController.h"

@interface CNFRegDisabledController : CNFRegFirstRunController {
    PSSpecifier *_spinner;
    PSSpecifier *_turnOnButton;
}




-(id)_rightButtonItem;
-(id)bundle;
-(id)getAccountNameForSpecifier:(id)arg0 ;
-(id)specifierList;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_activateSpinner;
-(void)_deactivateSpinner;
-(void)_setupAccountHandlersForDisabledOperation;
-(void)turnOnTapped:(id)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif