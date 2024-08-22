// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUMENUVIEWCONTROLLER_H
#define SUMENUVIEWCONTROLLER_H

@class UITableView, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, SUMenuViewControllerDelegate;


#import "SUViewController.h"

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate>

 {
    UITableView *_tableView;
}


@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<SUMenuViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger selectedIndex; // ivar: _selectedIndex
@property (readonly) Class superclass;


-(BOOL)_sendDidCancel;
-(BOOL)isMenuItemEnabledAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfMenuItems;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_tableView;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)titleOfMenuItemAtIndex:(NSInteger)arg0 ;
-(struct CGSize )maximumViewSize;
-(struct CGSize )minimumViewSize;
-(void)dealloc;
-(void)loadView;
-(void)performActionForMenuItemAtIndex:(NSInteger)arg0 ;
-(void)reload;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif