// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTFAMILYCIRCLEVIEWCONTROLLER_H
#define PKPEERPAYMENTFAMILYCIRCLEVIEWCONTROLLER_H

@class UITableViewController, PKPaymentService, PKFamilyMemberCollection, PKPeerPaymentService, PKPeerPaymentAccount, NSArray, NSString;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, PKPassLibraryDataProvider;


#import "PKContactAvatarManager.h"

@interface PKPeerPaymentFamilyCircleViewController : UITableViewController <PKPeerPaymentAssociatedAccountSetupDelegate>

 {
    PKPaymentService *_paymentService;
    PKFamilyMemberCollection *_familyCollection;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    BOOL _loadingFamily;
    NSArray *_sortedRows;
    PKContactAvatarManager *_avatarManager;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_familyMemberWithDSID:(id)arg0 ;
-(id)_pendingInvitations;
-(id)initWithFamilyCollection:(id)arg0 avatarManager:(id)arg1 passLibraryDataProvider:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_handleRowTapped:(id)arg0 ;
-(void)_loadAvatarImagesIfNecessary;
-(void)_peerPaymentAccountChanged:(id)arg0 ;
-(void)_reloadSortedRows;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg0 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg0 updatedAccount:(id)arg1 forFamilyMember:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif