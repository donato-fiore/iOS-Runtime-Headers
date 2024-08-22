// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFGROUPDETAILVIEWCONTROLLER_H
#define MFGROUPDETAILVIEWCONTROLLER_H

@class UITableViewController;
@protocol MFGroupDetailViewControllerDelegate;


#import "MFRecentComposeRecipientGroup.h"

@interface MFGroupDetailViewController : UITableViewController

@property (weak, nonatomic) NSObject<MFGroupDetailViewControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) MFRecentComposeRecipientGroup *group; // ivar: _group


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_removeButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif