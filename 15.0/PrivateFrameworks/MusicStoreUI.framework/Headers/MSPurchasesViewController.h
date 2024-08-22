// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPURCHASESVIEWCONTROLLER_H
#define MSPURCHASESVIEWCONTROLLER_H

@class SUViewController, UIView, SUSegmentedControl, NSArray;



@interface MSPurchasesViewController : SUViewController {
    NSInteger _activeViewControllerIndex;
    UIView *_containerView;
    SUSegmentedControl *_segmentedControl;
    NSArray *_viewControllers;
}




-(id)_activeViewController;
-(id)_newSegmentedControlWithPageSectionGroup:(id)arg0 ;
-(id)_newViewControllerForPageSection:(id)arg0 ;
-(id)copyArchivableContext;
-(id)initWithSection:(id)arg0 ;
-(void)_reloadSegmentedControlPlacement;
-(void)_reloadViewControllersWithSection:(id)arg0 ;
-(void)_segmentedControlAction:(id)arg0 ;
-(void)_setActiveViewControllerIndex:(NSInteger)arg0 ;
-(void)_showActiveViewController;
-(void)_tabConfigurationChangedNotification:(id)arg0 ;
-(void)dealloc;
-(void)invalidateForMemoryPurge;
-(void)loadView;
-(void)restoreArchivableContext:(id)arg0 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif