// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLSHEETROOTVIEWCONTROLLER_H
#define SLSHEETROOTVIEWCONTROLLER_H

@class UIViewController, NSArray, UITableViewController, UINavigationItem, UIView, NSString, UIImage, UITableView;
@protocol UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving;


#import "SLSheetTitleView.h"
#import "SLComposeServiceViewController.h"

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, SLComposeSheetConfigurationItemObserving>

 {
    NSArray *_configurationItems;
    UITableViewController *_tableViewController;
    SLSheetTitleView *_titleView;
    UINavigationItem *_navItem;
    UIViewController *_autoCompletionViewController;
}


@property (copy, nonatomic) NSArray *configurationItems;
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) SLComposeServiceViewController *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *serviceIconImage; // ivar: _serviceIconImage
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITableView *tableView;


-(BOOL)_canShowWhileLocked;
-(CGFloat)_preferredTableViewHeight;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)navigationItem;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_updateCell:(id)arg0 withConfigurationItem:(id)arg1 ;
-(void)_updateCellForConfigurationItem:(id)arg0 ;
-(void)configurationItemDidChange:(id)arg0 ;
-(void)dealloc;
-(void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(id)arg0 ;
-(void)loadView;
-(void)observeConfigurationItems:(id)arg0 ;
-(void)presentAutoCompletionViewController:(id)arg0 apparentContentHeight:(CGFloat)arg1 contentViewChangeBlock:(id)arg2 ;
-(void)setPostButtonEnabled:(BOOL)arg0 ;
-(void)setPostButtonTitle:(id)arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)updateContentViewSize:(struct CGSize )arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif