// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTATTACHMENTEDITVIEWCONTROLLER_H
#define EKEVENTATTACHMENTEDITVIEWCONTROLLER_H

@class UITableView, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate, EKEventAttachmentEditViewControllerDelegate;


#import "EKEditItemViewController.h"

@interface EKEventAttachmentEditViewController : EKEditItemViewController <UITableViewDataSource, UITableViewDelegate, EKEventAttachmentCellControllerDelegate>

 {
    UITableView *_table;
    NSArray *_cellControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKEventAttachmentEditViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 attachments:(id)arg1 sourceIsManaged:(BOOL)arg2 ;
-(id)owningEventForAttachmentCellController:(id)arg0 ;
-(id)parentViewControllerForAttachmentCellController:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif