// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIGROUPSANDCONTAINERSSAVEMANAGER_H
#define CNUIGROUPSANDCONTAINERSSAVEMANAGER_H

@class CNContactStore, NSString;
@protocol CNUIContactSaveDelegate, CNUIEditAuthorizationControllerDelegate;

#import <Foundation/Foundation.h>

#import "CNUIEditAuthorizationController.h"
#import "CNContactViewCache.h"

@interface CNUIGroupsAndContainersSaveManager : NSObject <CNUIContactSaveDelegate, CNUIEditAuthorizationControllerDelegate>



@property (retain, nonatomic) CNUIEditAuthorizationController *authorizationController; // ivar: _authorizationController
@property (copy, nonatomic) id *authorizationResultBlock; // ivar: _authorizationResultBlock
@property (retain, nonatomic) CNContactStore *contactStore; // ivar: _contactStore
@property (retain, nonatomic) CNContactViewCache *contactViewCache; // ivar: _contactViewCache
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
-(BOOL)addLinkedContacts:(id)arg0 toOriginalContact:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2 issuedRequestIdentifiers:(id)arg3 ;
-(BOOL)container:(id)arg0 containsNonUnifiedContact:(id)arg1 inContactStore:(id)arg2 ;
-(BOOL)deleteContainerWithIdentifier:(id)arg0 inStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2 issuedRequestIdentifiers:(id)arg3 ;
-(BOOL)deleteGroupWithIdentifier:(id)arg0 inStore:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2 issuedRequestIdentifiers:(id)arg3 ;
-(BOOL)editRequiresAuthorizationForContact:(id)arg0 parentContainer:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 ;
-(BOOL)isAuthorizedToAddContact:(id)arg0 toContainer:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 ;
-(BOOL)isAuthorizedToEditContact:(id)arg0 withTargetContainer:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 ;
-(BOOL)isAuthorizedToEditContact:(id)arg0 withTargetGroupWithIdentifier:(id)arg1 ignoresParentalRestrictions:(BOOL)arg2 ;
-(BOOL)isAuthorizedToEditContainer:(id)arg0 ;
-(BOOL)isAuthorizedToEditContainerWithIdentifier:(id)arg0 ;
-(BOOL)isMDMAuthorizedToAddContact:(id)arg0 toAccount:(id)arg1 withManagedConfiguration:(id)arg2 ;
-(BOOL)removeContact:(id)arg0 fromGroup:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2 ;
-(BOOL)removeContact:(id)arg0 fromGroups:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2 ;
-(BOOL)updateContainerWithIdentifier:(id)arg0 inStore:(id)arg1 withNewName:(id)arg2 ignoresGuardianRestrictions:(BOOL)arg3 issuedRequestIdentifiers:(id)arg4 ;
-(BOOL)updateGroupWithIdentifier:(id)arg0 inStore:(id)arg1 withNewName:(id)arg2 ignoresGuardianRestrictions:(BOOL)arg3 issuedRequestIdentifiers:(id)arg4 ;
-(id)_updateSaveRequest:(id)arg0 addContact:(id)arg1 toGroupContext:(id)arg2 contactsToLink:(id)arg3 ;
-(id)_updateSaveRequest:(id)arg0 addContact:(id)arg1 toGroups:(id)arg2 inContainer:(id)arg3 contactParentContainer:(id)arg4 contactsToLink:(id)arg5 ;
-(id)acAccountForContainer:(id)arg0 ;
-(id)acAccountForGroupIdentifier:(id)arg0 ;
-(id)accountForContainerIdentifier:(id)arg0 ;
-(id)addContact:(id)arg0 toGroup:(id)arg1 inContainer:(id)arg2 moveWasAuthorized:(BOOL)arg3 ;
-(id)addContact:(id)arg0 toGroup:(id)arg1 moveWasAuthorized:(BOOL)arg2 ;
-(id)addContact:(id)arg0 toGroupIdentifier:(id)arg1 inContainerIdentifier:(id)arg2 moveWasAuthorized:(BOOL)arg3 ;
-(id)addContact:(id)arg0 toGroupWithIdentifier:(id)arg1 moveWasAuthorized:(BOOL)arg2 ;
-(id)addContacts:(id)arg0 toGroup:(id)arg1 inContainer:(id)arg2 moveWasAuthorized:(BOOL)arg3 ;
-(id)addContacts:(id)arg0 toGroupWithIdentifier:(id)arg1 inContainerWithIdentifier:(id)arg2 moveWasAuthorized:(BOOL)arg3 ;
-(id)allMDMUnauthorizedAccountsForTargetGroup:(id)arg0 withManagedConfiguration:(id)arg1 ;
-(id)containerForContainerIdentifier:(id)arg0 ;
-(id)containerForGroupIdentifier:(id)arg0 ;
-(id)exchangeContactsToDeleteInAccountIdentifier:(id)arg0 originalContact:(id)arg1 ;
-(id)groupForGroupIdentifier:(id)arg0 ;
-(id)groupsByContainerDictForContainers:(id)arg0 groups:(id)arg1 ;
-(id)initWithContactStore:(id)arg0 ;
-(id)initWithContactStore:(id)arg0 contactViewCache:(id)arg1 ;
-(id)linkedContactForContact:(id)arg0 inContainer:(id)arg1 inContactStore:(id)arg2 ;
-(id)mdmUnauthorizedContactIdentifiersForTargetGroup:(id)arg0 withManagedConfiguration:(id)arg1 ;
-(id)parentAccountExternalIdentifiersForContact:(id)arg0 ;
-(id)parentGroupsForContact:(id)arg0 ;
-(id)updateContacts:(id)arg0 forGroupContext:(id)arg1 ignoresGuardianRestrictions:(BOOL)arg2 issuedRequestIdentifiers:(id)arg3 ;
-(void)_updateSaveRequest:(id)arg0 removeContact:(id)arg1 fromGroups:(id)arg2 ;
-(void)authorizeForViewController:(id)arg0 sender:(id)arg1 animated:(BOOL)arg2 completionBlock:(id)arg3 ;
-(void)editAuthorizationController:(id)arg0 authorizationDidFinishWithResult:(NSInteger)arg1 ;


@end


#endif