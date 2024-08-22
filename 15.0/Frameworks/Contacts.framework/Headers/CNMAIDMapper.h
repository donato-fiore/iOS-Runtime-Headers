// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMAIDMAPPER_H
#define CNMAIDMAPPER_H

@class CLSDataStore, NSString;
@protocol CNDataMapper;

#import <Foundation/Foundation.h>


@interface CNMAIDMapper : NSObject <CNDataMapper>



@property (readonly, nonatomic) CLSDataStore *dataStore; // ivar: _dataStore
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (readonly) Class superclass;


+(id)os_log;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 response:(*id)arg1 authorizationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)requestAccessForEntityType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 error:(*id)arg1 ;
-(id)contactObservableForFetchRequest:(id)arg0 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)defaultContainerIdentifier;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithContactsEnvironment:(id)arg0 managedConfiguration:(id)arg1 ;
-(id)initWithDataStore:(id)arg0 environment:(id)arg1 ;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)policyForContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif