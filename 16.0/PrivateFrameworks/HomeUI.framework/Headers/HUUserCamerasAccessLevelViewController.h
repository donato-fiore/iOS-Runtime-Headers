// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUUSERCAMERASACCESSLEVELVIEWCONTROLLER_H
#define HUUSERCAMERASACCESSLEVELVIEWCONTROLLER_H

@class NSIndexPath, HFUserItem;


#import "HUItemTableViewController.h"
#import "HUUserCamerasAccessLevelItemManager.h"

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController

@property (readonly, copy, nonatomic) HUUserCamerasAccessLevelItemManager *camerasAccessLevelItemManager; // ivar: _camerasAccessLevelItemManager
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly, copy, nonatomic) HFUserItem *userItem; // ivar: _userItem


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithUserItem:(id)arg0 home:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif