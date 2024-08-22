// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUVALVEEDITORVIEWCONTROLLER_H
#define HUVALVEEDITORVIEWCONTROLLER_H

@class NSMutableSet;


#import "HUItemTableViewController.h"
#import "HUNameItemModuleController.h"
#import "HUValveEditorItemManager.h"

@interface HUValveEditorViewController : HUItemTableViewController

@property (retain, nonatomic) NSMutableSet *moduleControllers; // ivar: _moduleControllers
@property (retain, nonatomic) HUNameItemModuleController *nameModuleController; // ivar: _nameModuleController
@property (retain, nonatomic) HUValveEditorItemManager *valveEditorItemManager; // ivar: _valveEditorItemManager


-(BOOL)shouldManageTextFieldForItem:(id)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithSourceItem:(id)arg0 editorMode:(NSUInteger)arg1 ;
-(id)itemModuleControllers;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg0 item:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif