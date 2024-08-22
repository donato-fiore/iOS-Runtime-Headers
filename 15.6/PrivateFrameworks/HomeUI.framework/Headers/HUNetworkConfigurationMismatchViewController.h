// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUNETWORKCONFIGURATIONMISMATCHVIEWCONTROLLER_H
#define HUNETWORKCONFIGURATIONMISMATCHVIEWCONTROLLER_H



#import "HUItemTableViewController.h"
#import "HUNetworkConfigurationMismatchItemManager.h"

@interface HUNetworkConfigurationMismatchViewController : HUItemTableViewController

@property (readonly, nonatomic) HUNetworkConfigurationMismatchItemManager *itemManager;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithProfiles:(id)arg0 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;


@end


#endif