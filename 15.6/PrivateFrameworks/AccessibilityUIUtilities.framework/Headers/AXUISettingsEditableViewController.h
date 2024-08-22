// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUISETTINGSEDITABLEVIEWCONTROLLER_H
#define AXUISETTINGSEDITABLEVIEWCONTROLLER_H



#import "AXUISettingsBaseListController.h"

@interface AXUISettingsEditableViewController : AXUISettingsBaseListController



-(BOOL)canEditTable;
-(id)makeSpecifiers;
-(id)specifiers;
-(void)_addDoneButton;
-(void)_configureEditButton;
-(void)_donePressed;
-(void)_editPressed;
-(void)removeDataForSpecifier:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif