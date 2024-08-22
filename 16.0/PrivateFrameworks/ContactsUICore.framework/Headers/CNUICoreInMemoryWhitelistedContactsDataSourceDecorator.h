// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUICOREINMEMORYWHITELISTEDCONTACTSDATASOURCEDECORATOR_H
#define CNUICOREINMEMORYWHITELISTEDCONTACTSDATASOURCEDECORATOR_H

@class NSString, NSArray;
@protocol CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource, CNCancelable, CNUICoreFamilyInfoFetching, CNUICoreContactStoreFacade, CNSchedulerProvider;

#import <Foundation/Foundation.h>

#import "CNUICoreContactTypeAssessor.h"
#import "CNUICoreContactEditingSession.h"

@interface CNUICoreInMemoryWhitelistedContactsDataSourceDecorator : NSObject <CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberWhitelistedContactsDataSource>



@property (readonly, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor; // ivar: _contactTypeAssessor
@property (readonly, nonatomic) NSObject<CNUICoreFamilyMemberWhitelistedContactsDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CNUICoreContactEditingSession *editingSession; // ivar: _editingSession
@property (retain, nonatomic) NSObject<CNCancelable> *endEditingNotificationToken; // ivar: _endEditingNotificationToken
@property (readonly, nonatomic) NSObject<CNUICoreFamilyInfoFetching> *familyInfoRetriever; // ivar: _familyInfoRetriever
@property (readonly, nonatomic) NSArray *familyMemberContactItems;
@property (retain, nonatomic) NSArray *familyMemberContactItemsSnapshot; // ivar: _familyMemberContactItemsSnapshot
@property (readonly, nonatomic) BOOL familyMemberContainerIsEmpty;
@property (readonly, nonatomic) NSInteger fetchStatus;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<CNUICoreContactStoreFacade> *mainContactStore; // ivar: _mainContactStore
@property (weak, nonatomic) NSObject<CNUICoreFamilyMemberContactsObserver> *observer; // ivar: _observer
@property (readonly, nonatomic) NSObject<CNSchedulerProvider> *schedulerProvider; // ivar: _schedulerProvider
@property (readonly) Class superclass;


+(id)modelBuilderForAddedContacts:(id)arg0 withContactTypeAssessor:(id)arg1 ;
+(id)modelBuilderForContacts:(id)arg0 withContactTypeAssessor:(id)arg1 ;
-(id)contactRepresentingItem:(id)arg0 ;
-(id)contactTypeAssesor;
-(id)initWithDataSource:(id)arg0 familyInfoRetriever:(id)arg1 schedulerProvider:(id)arg2 ;
-(id)initWithDataSource:(id)arg0 schedulerProvider:(id)arg1 ;
-(void)dealloc;
-(void)executeBlockIfEditingSessionNotInProgress:(id)arg0 ;
-(void)finishPersistenceOfInMemoryContactsWhitelistState;
-(void)finishWhitelistedContactsTasks;
-(void)flushEditingSession;
-(void)notifyObserverContactItemsChange;
-(void)persistInMemoryContactsWhitelistState;
-(void)startEditingSessionIfNecessary;
-(void)startEditingSessionIfNecessaryWithSnapshotOfItems:(id)arg0 ;
-(void)startImplicitEditngSessionForAnyItemsNotPersistedInItems:(id)arg0 ;
-(void)updateWhitelistByAddingContacts:(id)arg0 ;
-(void)updateWhitelistByRemovingContacts:(id)arg0 ;
-(void)updateWhitelistByUpdatingContacts:(id)arg0 ;


@end


#endif