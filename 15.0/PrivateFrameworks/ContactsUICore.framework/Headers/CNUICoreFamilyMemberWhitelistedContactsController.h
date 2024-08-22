// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUICOREFAMILYMEMBERWHITELISTEDCONTACTSCONTROLLER_H
#define CNUICOREFAMILYMEMBERWHITELISTEDCONTACTSCONTROLLER_H

@class CNFuture, NSString, NSArray;
@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource, CNCancelable, CNUICoreFamilyMemberContactsUpdating, CNUICoreContactStoreFacade, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreFamilyMemberWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource>



@property (retain, nonatomic) CNFuture *addContactsToWhitelistFuture; // ivar: _addContactsToWhitelistFuture
@property (readonly, nonatomic) NSObject<CNCancelable> *contactStoreDidChangeToken; // ivar: _contactStoreDidChangeToken
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture; // ivar: _deleteContactsFromWhitelistFuture
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *familyMemberContactItems; // ivar: _familyMemberContactItems
@property (retain, nonatomic) CNFuture *familyMemberContactItemsFuture; // ivar: _familyMemberContactItemsFuture
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsUpdating> *familyMemberContactsUpdator; // ivar: _familyMemberContactsUpdator
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *familyMemberScopedContactStore; // ivar: _familyMemberScopedContactStore
@property (readonly, nonatomic) NSInteger fetchStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *mainContactStoreFacade; // ivar: _mainContactStoreFacade
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsModelFetching> *modelFetcher; // ivar: _modelFetcher
@property (weak, nonatomic) NSObject<CNUICoreFamilyMemberContactsObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) CNFuture *updateContactsInWhitelistFuture; // ivar: _updateContactsInWhitelistFuture


+(id)contactByRemovingSensitiveDataFromContact:(id)arg0 ;
+(id)controllerWithFamilyMember:(id)arg0 options:(id)arg1 schedulerProvider:(id)arg2 ;
+(id)propertyKeysContainingSenstiveData;
-(id)contactItemFutureFromFetcher;
-(id)contactRepresentingItem:(id)arg0 ;
-(id)init;
-(id)initWithFamilyMember:(id)arg0 options:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithModelFetcher:(id)arg0 familyMemberContactsUpdator:(id)arg1 familyMemberScopedContactStoreFacade:(id)arg2 mainContactStoreFacade:(id)arg3 schedulerProvider:(id)arg4 ;
-(void)cancelContactItemsFetch;
-(void)dealloc;
-(void)finishWhitelistedContactsTasks;
-(void)setupChangeNotificationResponse;
-(void)triggerContactItemsFetch;
-(void)updateWhitelistByAddingContacts:(id)arg0 ;
-(void)updateWhitelistByRemovingContacts:(id)arg0 ;
-(void)updateWhitelistByUpdatingContacts:(id)arg0 ;


@end


#endif