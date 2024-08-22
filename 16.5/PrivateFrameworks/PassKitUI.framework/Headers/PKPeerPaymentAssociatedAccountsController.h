// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTSCONTROLLER_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTSCONTROLLER_H

@class PKPaymentService, PKPeerPaymentService, PKPeerPaymentAccount, PKFamilyMemberCollection, UINavigationController, NSString;
@protocol PKPeerPaymentAssociatedAccountSetupDelegate, PKPassLibraryDataProvider;

#import <Foundation/Foundation.h>

#import "PKContactAvatarManager.h"
#import "PKPeerPaymentAssociatedAccountPresentationContext.h"
#import "PKPeerPaymentAssociatedAccountControllerDoneTapHelper.h"

@interface PKPeerPaymentAssociatedAccountsController : NSObject <PKPeerPaymentAssociatedAccountSetupDelegate>

 {
    NSInteger _context;
    PKPaymentService *_paymentService;
    PKPeerPaymentService *_peerPaymentService;
    PKPeerPaymentAccount *_account;
    PKFamilyMemberCollection *_familyCollection;
    PKContactAvatarManager *_avatarManager;
    UINavigationController *_navigationController;
    PKPeerPaymentAssociatedAccountPresentationContext *_presentationContext;
    PKPeerPaymentAssociatedAccountControllerDoneTapHelper *_doneTapHelper;
    NSString *_viewerFamilyMemberTypeAnalyticsKey;
    id<PKPassLibraryDataProvider> *_passLibraryDataProvider;
    BOOL _didBeginReporter;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFamilyCollection:(id)arg0 avatarManager:(id)arg1 passLibraryDataProvider:(id)arg2 ;
-(id)initWithFamilyCollection:(id)arg0 avatarManager:(id)arg1 passLibraryDataProvider:(id)arg2 context:(NSInteger)arg3 ;
-(id)initWithFamilyMembers:(id)arg0 ;
-(id)initWithFamilyMembers:(id)arg0 altDSIDToImageData:(id)arg1 ;
-(void)_begingReportingIfNecessary;
-(void)_endReportingSessionIfNecessary;
-(void)_peerPaymentAccountChanged:(id)arg0 ;
-(void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(id)arg0 ;
-(void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(BOOL)arg0 updatedAccount:(id)arg1 forFamilyMember:(id)arg2 ;
-(void)presentAssociatedAccountsFlowWithPresentationContext:(id)arg0 fromNavigationController:(id)arg1 ;
-(void)presentSetupFlowForFAFamilyMember:(id)arg0 fromNavigationController:(id)arg1 ;


@end


#endif