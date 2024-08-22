// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKABSTRACTREVIEWVIEWCONTROLLER_H
#define CKABSTRACTREVIEWVIEWCONTROLLER_H

@class PSViewController, UIBarButtonItem, NSString, UINavigationItem, UITableView, UIView;
@protocol UITableViewDataSource, UITableViewDelegate;



@interface CKAbstractReviewViewController : PSViewController <UITableViewDataSource, UITableViewDelegate>



@property (retain, nonatomic) UIBarButtonItem *cancelEditingBarButtonItem; // ivar: _cancelEditingBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIBarButtonItem *deleteBarButtonItem; // ivar: _deleteBarButtonItem
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationItem *navItem; // ivar: _navItem
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView
@property (retain, nonatomic) UIView *topLineView; // ivar: _topLineView


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)navigationItem;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg0 ;
-(void)_handleCancel;
-(void)_handleDelete;
-(void)_updateNavigationItemState;
-(void)dealloc;
-(void)loadView;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif