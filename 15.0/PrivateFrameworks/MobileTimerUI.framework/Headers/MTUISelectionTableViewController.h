// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTUISELECTIONTABLEVIEWCONTROLLER_H
#define MTUISELECTIONTABLEVIEWCONTROLLER_H

@class UITableViewController, NSIndexPath, NSArray;
@protocol MTUISelectionTableViewControllerDelegate;



@interface MTUISelectionTableViewController : UITableViewController

@property (nonatomic) BOOL allowsNone; // ivar: _allowsNone
@property (weak, nonatomic) NSObject<MTUISelectionTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSIndexPath *parentIndexPath; // ivar: _parentIndexPath
@property (retain, nonatomic) NSArray *selectionData; // ivar: _selectionData


-(BOOL)_canShowWhileLocked;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 title:(id)arg1 selectionData:(id)arg2 parentIndexPath:(id)arg3 allowsMultiple:(BOOL)arg4 allowsNone:(BOOL)arg5 delegate:(id)arg6 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)deselectRowsExcluding:(NSUInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif