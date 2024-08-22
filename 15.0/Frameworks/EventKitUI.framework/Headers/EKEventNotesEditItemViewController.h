// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKEVENTNOTESEDITITEMVIEWCONTROLLER_H
#define EKEVENTNOTESEDITITEMVIEWCONTROLLER_H

@class UITableView, NSString;
@protocol UITableViewDataSource, UITableViewDelegate;


#import "EKEditItemViewController.h"
#import "CalendarNotesCell.h"

@interface EKEventNotesEditItemViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate>

 {
    UITableView *_table;
    CalendarNotesCell *_cell;
    NSString *_text;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *noteText;
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)validateAllowingAlert:(BOOL)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)loadView;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif