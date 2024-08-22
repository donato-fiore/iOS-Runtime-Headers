// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARCOLORVIEWCONTROLLER_H
#define EKCALENDARCOLORVIEWCONTROLLER_H

@class UITableViewController;


#import "EKCalendarColorEditItem.h"

@interface EKCalendarColorViewController : UITableViewController

@property (retain, nonatomic) EKCalendarColorEditItem *editItem; // ivar: _editItem


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)resetBackgroundColor;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif