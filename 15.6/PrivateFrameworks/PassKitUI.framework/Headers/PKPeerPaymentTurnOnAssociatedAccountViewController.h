// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPEERPAYMENTTURNONASSOCIATEDACCOUNTVIEWCONTROLLER_H
#define PKPEERPAYMENTTURNONASSOCIATEDACCOUNTVIEWCONTROLLER_H

@class UITableViewController, PKFamilyMember, PKFamilyMemberCollection;
@protocol PKPassLibraryDataProvider, PKPeerPaymentAssociatedAccountSetupDelegate;



@interface PKPeerPaymentTurnOnAssociatedAccountViewController : UITableViewController {
    PKFamilyMember *_familyMember;
    PKFamilyMemberCollection *_familyCollection;
    NSInteger _context;
    NSInteger _setupType;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
}


@property (weak, nonatomic) NSObject<PKPeerPaymentAssociatedAccountSetupDelegate> *delegate; // ivar: _delegate


-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithFamilyMember:(id)arg0 familyCollection:(id)arg1 delegate:(id)arg2 passLibraryDataProvider:(id)arg3 context:(NSInteger)arg4 setupType:(NSInteger)arg5 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif