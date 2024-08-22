// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREMAINWHITELISTEDCONTACTSCONTROLLER_H
#define CNUICOREMAINWHITELISTEDCONTACTSCONTROLLER_H

@class CNFuture, NSString, NSArray;
@protocol CNUICoreFamilyMemberWhitelistedContactsDataSource, CNScheduler, CNCancelable, CNDowntimeWhitelistContainerFetching, CNUICoreContactStoreFacade, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNSchedulerProvider;

#import <Foundation/Foundation.h>


@interface CNUICoreMainWhitelistedContactsController : NSObject <CNUICoreFamilyMemberWhitelistedContactsDataSource>



@property (retain, nonatomic) CNFuture *addContactsToWhitelistFuture; // ivar: _addContactsToWhitelistFuture
@property (readonly, nonatomic) NSObject<CNScheduler> *backgroundOrImmediateScheduler;
@property (readonly, nonatomic) NSObject<CNCancelable> *contactStoreDidChangeToken; // ivar: _contactStoreDidChangeToken
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) CNFuture *deleteContactsFromWhitelistFuture; // ivar: _deleteContactsFromWhitelistFuture
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSObject<CNDowntimeWhitelistContainerFetching> *downtimeContainerFetcher; // ivar: _downtimeContainerFetcher
@property (retain, nonatomic) NSArray *familyMemberContactItems; // ivar: _familyMemberContactItems
@property (retain, nonatomic) CNFuture *familyMemberContactItemsFuture; // ivar: _familyMemberContactItemsFuture
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property (readonly, nonatomic) NSInteger fetchStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *mainContactStoreFacade; // ivar: _mainContactStoreFacade
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberContactsModelFetching> *modelFetcher; // ivar: _modelFetcher
@property (weak, nonatomic) NSObject<CNUICoreFamilyMemberContactsObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;
@property (retain, nonatomic) CNFuture *updateContactsInWhitelistFuture; // ivar: _updateContactsInWhitelistFuture


+(id)controllerWithOptions:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)contactItemFutureFromFetcher;
-(id)contactRepresentingItem:(id)arg0 ;
-(id)init;
-(id)initWithModelFetcher:(id)arg0 mainContactStoreFacade:(id)arg1 downtimeContainerFetcher:(id)arg2 schedulerProvider:(id)arg3 ;
-(id)initWiththOptions:(id)arg0 mainContactStoreFacade:(id)arg1 schedulerProvider:(id)arg2 ;
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