// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTINVITATIONCONTROLLER_H
#define PKACCOUNTINVITATIONCONTROLLER_H

@class PKPaymentService, PKAccountService, NSHashTable, PKAccount, NSString, PKDeviceSharingCapabilitiesManager, PKFamilyMember, PKFamilyMemberCollection;
@protocol PKPaymentServiceDelegate, PKSetupFlowControllerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PKApplyController.h"

@interface PKAccountInvitationController : NSObject <PKPaymentServiceDelegate, PKSetupFlowControllerProtocol>

 {
    PKPaymentService *_paymentService;
    PKAccountService *_accountService;
    os_unfair_lock_s _lockObservers;
    NSObject<OS_dispatch_queue> *_replyQueue;
    NSHashTable *_observers;
}


@property (nonatomic) NSUInteger accessLevel; // ivar: _accessLevel
@property (readonly, nonatomic) PKAccount *account; // ivar: _account
@property (readonly, nonatomic) PKApplyController *applyController; // ivar: _applyController
@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PKDeviceSharingCapabilitiesManager *deviceCapabiltiesManager; // ivar: _deviceCapabiltiesManager
@property (retain, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) PKFamilyMemberCollection *familyMemberCollection; // ivar: _familyMemberCollection
@property (readonly, nonatomic) NSUInteger feature; // ivar: _feature
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canInviteAccountUserWithAccount:(id)arg0 ;
+(void)presentCreateAccountUserInvitationWithViewController:(id)arg0 account:(id)arg1 accountUserCollection:(id)arg2 familyMemberCollection:(id)arg3 context:(NSInteger)arg4 completion:(id)arg5 ;
-(BOOL)isCurrentFamilyMemberAnOrganizer;
-(NSInteger)familyCircleCount;
-(id)_filteredFamilyMembersFromFamilyMembers:(id)arg0 accountUsers:(id)arg1 invitations:(id)arg2 ;
-(id)initWithAccount:(id)arg0 context:(NSInteger)arg1 familyMemberCollection:(id)arg2 ;
-(void)_accessObserversWithHandler:(id)arg0 ;
-(void)_fetchFamilyMemberDeviceCapabilties;
-(void)_informObserversOfFamilyMemberChange;
-(void)accessLevelOptionsWithCompletion:(id)arg0 ;
-(void)didAddAccountPendingFamilyMembers:(id)arg0 ;
-(void)didUpdateFamilyMembers:(id)arg0 ;
-(void)familyMembersForceReload:(BOOL)arg0 completion:(id)arg1 ;
-(void)nextViewControllerWithCompletion:(id)arg0 ;
-(void)registerObserver:(id)arg0 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif