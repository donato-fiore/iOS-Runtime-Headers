// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKEXPIREDTABLEVIEWCONTROLLER_H
#define PKEXPIREDTABLEVIEWCONTROLLER_H

@class UITableViewController, UITableView, NSString, PKGroupsController;
@protocol UITableViewDataSourcePrefetching, PKExpiredTableViewControllerCachingDelegate;



@interface PKExpiredTableViewController : UITableViewController <UITableViewDataSourcePrefetching>

 {
    UITableView *_tableView;
    BOOL _isAccessibilityCategory;
}


@property (weak, nonatomic) NSObject<PKExpiredTableViewControllerCachingDelegate> *cachingDelegate; // ivar: _cachingDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PKGroupsController *existingGroupsController; // ivar: _existingGroupsController
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)mostRecentPass;
-(id)tableView:(id)arg0 cellWithReuseIdentifier:(id)arg1 ;
-(id)tableView:(id)arg0 willDeselectRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 prefetchRowsAtIndexPaths:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif