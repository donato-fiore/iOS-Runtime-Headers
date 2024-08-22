// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNXPCDATAMAPPER_H
#define CNXPCDATAMAPPER_H

@class NSXPCConnection, NSString;
@protocol CNDataMapper, CNContactsLogger, CNXPCDataMapperService;

#import <Foundation/Foundation.h>


@interface CNXPCDataMapper : NSObject <CNDataMapper>

 {
    NSXPCConnection *_connection;
    id<CNContactsLogger> *_logger;
    id<CNXPCDataMapperService> *_serviceProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *legacyTetheredSyncComputerAnchor;
@property (retain, nonatomic) NSString *legacyTetheredSyncDeviceAnchor;
@property (readonly) Class superclass;


+(id)contactBuffersDecoderForFetchRequest:(id)arg0 ;
+(id)serviceProtocolInterface;
-(BOOL)executeChangeHistoryClearRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 error:(*id)arg1 ;
-(BOOL)executeSaveRequest:(id)arg0 response:(*id)arg1 authorizationContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)registerChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)requestAccessForEntityType:(NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)setBestMeIfNeededForGivenName:(id)arg0 familyName:(id)arg1 email:(id)arg2 error:(*id)arg3 ;
-(BOOL)setMeContact:(id)arg0 error:(*id)arg1 ;
-(BOOL)setMeContact:(id)arg0 forContainer:(id)arg1 error:(*id)arg2 ;
-(BOOL)unregisterChangeHistoryClientIdentifier:(id)arg0 forContainerIdentifier:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeFavoritesPropertyListData:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
-(id)accountsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)authorizedKeysForContactKeys:(id)arg0 error:(*id)arg1 ;
-(id)changeHistoryWithFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactCountForFetchRequest:(id)arg0 error:(*id)arg1 ;
-(id)contactObservableForFetchRequest:(id)arg0 ;
-(id)contactWithUserActivityUserInfo:(id)arg0 keysToFetch:(id)arg1 ;
-(id)containersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)currentHistoryAnchor;
-(id)currentHistoryToken;
-(id)defaultContainerIdentifier;
// -(id)executeFetchRequest:(id)arg0 progressiveResults:(id)arg1 completion:(unk)arg2  ;
-(id)favoritesEntryDictionariesAtPath:(id)arg0 error:(*id)arg1 ;
-(id)groupsMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)identifierWithError:(*id)arg0 ;
-(id)init;
-(id)initWithContactsEnvironment:(id)arg0 connection:(id)arg1 ;
-(id)initWithContactsEnvironment:(id)arg0 managedConfiguration:(id)arg1 ;
-(id)meContactIdentifiers:(*id)arg0 ;
-(id)policyForContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)sectionListOffsetsForSortOrder:(NSInteger)arg0 error:(*id)arg1 ;
-(id)serverSearchContainersMatchingPredicate:(id)arg0 error:(*id)arg1 ;
-(id)subgroupsOfGroupWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)unifiedContactCountWithError:(*id)arg0 ;
-(id)userActivityUserInfoForContact:(id)arg0 ;
-(void)dealloc;
-(void)requestAccessForEntityType:(NSInteger)arg0 completionHandler:(id)arg1 ;


@end


#endif