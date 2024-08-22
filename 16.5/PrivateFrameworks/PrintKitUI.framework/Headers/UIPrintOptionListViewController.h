// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UIPRINTOPTIONLISTVIEWCONTROLLER_H
#define UIPRINTOPTIONLISTVIEWCONTROLLER_H

@class UITableViewController, NSArray;
@protocol UIPrintOptionListDelegate;



@interface UIPrintOptionListViewController : UITableViewController

@property (retain, nonatomic) NSArray *itemList; // ivar: _itemList
@property (weak, nonatomic) NSObject<UIPrintOptionListDelegate> *listDelegate; // ivar: _listDelegate
@property (copy) id *onDoneBlock; // ivar: _onDoneBlock


-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithListDelegate:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidDisappear:(BOOL)arg0 ;


@end


#endif