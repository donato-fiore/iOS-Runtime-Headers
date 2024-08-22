// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BACKFORWARDTABLEVIEWCONTROLLER_H
#define BACKFORWARDTABLEVIEWCONTROLLER_H

@class SFPopoverSizingTableViewController, NSArray, NSString, WKBackForwardListItem;
@protocol UITableViewDragDelegate_Private, BackForwardTableViewControllerDelegate;



@interface BackForwardTableViewController : SFPopoverSizingTableViewController <UITableViewDragDelegate_Private>



@property (copy, nonatomic) NSArray *backForwardList; // ivar: _backForwardList
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BackForwardTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WKBackForwardListItem *parentItem; // ivar: _parentItem
@property (nonatomic) BOOL reversesListOrder; // ivar: _reversesListOrder
@property (readonly) Class superclass;


+(id)tableViewCellForSizeEstimation;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_dragItemForURLAtIndexPath:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)itemAtIndexPath:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(void)done;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif