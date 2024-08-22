// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSEDITABLELISTCONTROLLER_H
#define PSEDITABLELISTCONTROLLER_H



#import "PSListController.h"

@interface PSEditableListController : PSListController {
    BOOL _editable;
    BOOL _editingDisabled;
}




-(BOOL)editable;
-(BOOL)performDeletionActionForSpecifier:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(id)_editButtonBarItem;
-(id)init;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_setEditable:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateNavigationBar;
-(void)didLock;
-(void)editDoneTapped;
-(void)setEditButtonEnabled:(BOOL)arg0 ;
-(void)setEditable:(BOOL)arg0 ;
-(void)setEditingButtonHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)showController:(id)arg0 animate:(BOOL)arg1 ;
-(void)suspend;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif