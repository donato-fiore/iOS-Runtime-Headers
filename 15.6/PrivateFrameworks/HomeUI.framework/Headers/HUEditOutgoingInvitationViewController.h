// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUEDITOUTGOINGINVITATIONVIEWCONTROLLER_H
#define HUEDITOUTGOINGINVITATIONVIEWCONTROLLER_H



#import "HUUserTableViewController.h"
#import "HUEditOutgoingInvitationItemManager.h"

@interface HUEditOutgoingInvitationViewController : HUUserTableViewController

@property (readonly, nonatomic) HUEditOutgoingInvitationItemManager *editOutgoingInvitationItemManager; // ivar: _editOutgoingInvitationItemManager


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)_messageForInvitationState:(NSInteger)arg0 ;
-(id)initWithItem:(id)arg0 home:(id)arg1 ;
-(id)user;
-(void)_cancelOutgoingInvitation:(BOOL)arg0 ;
-(void)itemManager:(id)arg0 didUpdateResultsForSourceItem:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif