// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMORELISTCONTROLLER_H
#define UIMORELISTCONTROLLER_H

@class NSArray, NSString;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "UIViewController.h"
#import "UITableView.h"
#import "UIMoreListCellLayoutManager.h"
#import "UIBarButtonItem.h"

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource>

 {
    UITableView *_table;
    BOOL _allowsCustomizing;
    BOOL _disableCustomizing;
    BOOL _hideNavigationBar;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}


@property (nonatomic) BOOL allowsCustomizing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL moreViewControllersChanged;
@property (readonly) Class superclass;


-(BOOL)_isSupportedInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)_viewControllerWasSelected;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_targetNavigationController;
-(id)init;
-(id)tabBarItem;
-(id)table;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_layoutCells;
-(void)_updateEditButton;
-(void)_willChangeToIdiom:(NSInteger)arg0 onScreen:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg0 ;
-(void)encodeRestorableStateWithCoder:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif