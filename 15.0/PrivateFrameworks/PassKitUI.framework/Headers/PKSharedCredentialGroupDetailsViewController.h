// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSHAREDCREDENTIALGROUPDETAILSVIEWCONTROLLER_H
#define PKSHAREDCREDENTIALGROUPDETAILSVIEWCONTROLLER_H

@class UITableViewController, CNContact, PKSharedCredentialGroup, PKSharedCredentialsGroupController, NSString;
@protocol PKSharedCredentialsGroupControllerDelegate;


#import "PKAvatarHeaderView.h"

@interface PKSharedCredentialGroupDetailsViewController : UITableViewController <PKSharedCredentialsGroupControllerDelegate>

 {
    PKAvatarHeaderView *_headerView;
    CNContact *_contact;
    PKSharedCredentialGroup *_group;
    PKSharedCredentialsGroupController *_groupController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isRevokingGroup) BOOL revokingGroup; // ivar: _revokingGroup
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)infoButton;
-(id)initWithGroup:(id)arg0 groupController:(id)arg1 style:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)credentialGroupControllerDidUpdateGroups:(id)arg0 ;
-(void)dealloc;
-(void)presentAlertForError:(id)arg0 ;
-(void)showActivityIndicator:(BOOL)arg0 withCell:(id)arg1 ;
-(void)showContactDetailsViewController;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateHeaderWithGroup:(id)arg0 ;
-(void)updateWithGroup:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif