// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNDONATIONMAPPER_H
#define CNDONATIONMAPPER_H

@class NSString, CNDonationStore;
@protocol CNDataMapper;

#import <Foundation/Foundation.h>

#import "CNContactsEnvironment.h"

@interface CNDonationMapper : NSObject <CNDataMapper>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNDonationStore *donationStore; // ivar: _donationStore
@property (readonly, nonatomic) CNContactsEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (readonly) BOOL shouldLogContactsAccess;
@property (readonly, nonatomic) BOOL shouldLogPrivacyAccountingAccessEvents;
@property (readonly) Class superclass;


+(id)log;
+(id)mapperIdentifier;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 response:(*id)arg1 authorizationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)requestAccessForEntityType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 error:(*id)arg1 ;
-(id)contactCountForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactObservableForFetchRequest:(id)arg0 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)defaultContainerIdentifier;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithDonationStore:(id)arg0 environment:(id)arg1 ;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)policyForContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)policyWithDescription:(id)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif