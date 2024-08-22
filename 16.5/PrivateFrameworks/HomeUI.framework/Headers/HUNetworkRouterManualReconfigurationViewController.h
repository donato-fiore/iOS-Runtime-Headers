// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUNETWORKROUTERMANUALRECONFIGURATIONVIEWCONTROLLER_H
#define HUNETWORKROUTERMANUALRECONFIGURATIONVIEWCONTROLLER_H



#import "HUItemTableViewController.h"
#import "HUNetworkRouterManualReconfigurationItemManager.h"

@interface HUNetworkRouterManualReconfigurationViewController : HUItemTableViewController

@property (readonly, nonatomic) HUNetworkRouterManualReconfigurationItemManager *itemManager;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif