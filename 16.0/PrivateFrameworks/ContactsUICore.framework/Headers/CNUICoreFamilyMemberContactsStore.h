// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREFAMILYMEMBERCONTACTSSTORE_H
#define CNUICOREFAMILYMEMBERCONTACTSSTORE_H

@class FAFamilyMember;
@protocol CNUICoreFamilyMemberContactsUpdating, CNScheduler, CNUICoreContactsSyncTrigger, CNUICoreContactStoreFacade, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating>



@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundOrImmediateScheduler;
@property (readonly, nonatomic) NSObject<CNUICoreContactsSyncTrigger> *contactsSyncTrigger; // ivar: _contactsSyncTrigger
@property (readonly, nonatomic) FAFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *familyMemberScopedContactStore; // ivar: _familyMemberScopedContactStore
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider


-(id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg0 ;
-(id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg0 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(BOOL)arg1 ;
-(id)init;
-(id)initWithFamilyMember:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)initWithFamilyMemberScopedContactStoreFacade:(id)arg0 familyMember:(id)arg1 contactsSyncTrigger:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)updateContactListByAddingContacts:(id)arg0 ;
-(id)updateContactListByRemovingContacts:(id)arg0 ;
-(id)updateContactListByUpdatingContacts:(id)arg0 ;
-(id)updateContactWhitelistByAddingContacts:(id)arg0 ;
-(id)updateContactWhitelistByRemovingContacts:(id)arg0 ;
-(void)triggerContactsSyncRequest;


@end


#endif