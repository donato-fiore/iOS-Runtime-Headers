// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUACCESSORYSCENELISTVIEWCONTROLLER_H
#define HUACCESSORYSCENELISTVIEWCONTROLLER_H



#import "HUItemTableViewController.h"
#import "HUAccessorySceneListContentViewController.h"
#import "HUAccessorySceneListItemManager.h"

@interface HUAccessorySceneListViewController : HUItemTableViewController

@property (retain, nonatomic) HUAccessorySceneListContentViewController *existingSceneListContentViewController; // ivar: _existingSceneListContentViewController
@property (readonly, nonatomic) HUAccessorySceneListItemManager *itemManager;
@property (retain, nonatomic) HUAccessorySceneListContentViewController *suggestedSceneListContentViewController; // ivar: _suggestedSceneListContentViewController


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)childViewControllersToPreload;
-(id)initWithServiceLikeItem:(id)arg0 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif