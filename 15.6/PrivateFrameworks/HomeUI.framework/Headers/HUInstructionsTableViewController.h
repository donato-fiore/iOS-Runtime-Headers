// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUINSTRUCTIONSTABLEVIEWCONTROLLER_H
#define HUINSTRUCTIONSTABLEVIEWCONTROLLER_H

@class UIViewController;


#import "HUItemTableViewController.h"
#import "HUInstructionsItem.h"

@interface HUInstructionsTableViewController : HUItemTableViewController

@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) HUInstructionsItem *instructionsItem; // ivar: _instructionsItem


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)childViewControllersToPreload;
-(id)initWithInstructionsItem:(id)arg0 contentViewController:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 instructionsItem:(id)arg1 contentViewController:(id)arg2 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif