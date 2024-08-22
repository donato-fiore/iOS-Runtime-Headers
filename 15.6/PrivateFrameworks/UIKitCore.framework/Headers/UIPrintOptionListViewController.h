// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTOPTIONLISTVIEWCONTROLLER_H
#define UIPRINTOPTIONLISTVIEWCONTROLLER_H

@class NSArray;
@protocol UIPrintOptionListDelegate;


#import "UITableViewController.h"

@interface UIPrintOptionListViewController : UITableViewController

@property (retain, nonatomic) NSArray *itemList; // ivar: _itemList
@property (weak, nonatomic) NSObject<UIPrintOptionListDelegate> *listDelegate; // ivar: _listDelegate


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithListDelegate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif