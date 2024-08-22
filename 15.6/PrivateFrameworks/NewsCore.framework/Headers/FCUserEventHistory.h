// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCUSEREVENTHISTORY_H
#define FCUSEREVENTHISTORY_H

@class NSString;
@protocol FCUserEventHistoryStorageObserver, FCUserEventHistoryStorageType;


#import "FCPrivateDataController.h"
#import "FCUserEventHistoryStorage.h"

@interface FCUserEventHistory : FCPrivateDataController <FCUserEventHistoryStorageObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) FCUserEventHistoryStorage *privateStorage; // ivar: _privateStorage
@property (readonly, nonatomic) NSObject<FCUserEventHistoryStorageType> *storage;
@property (readonly) Class superclass;


+(BOOL)requiresBatchedSync;
+(BOOL)requiresHighPriorityFirstSync;
+(BOOL)requiresPushNotificationSupport;
+(NSInteger)commandQueueUrgency;
+(NSUInteger)localStoreVersion;
+(id)backingRecordIDs;
+(id)backingRecordZoneIDs;
+(id)commandStoreFileName;
+(id)commandsToMergeLocalDataToCloud:(id)arg0 privateDataDirectory:(id)arg1 ;
+(id)desiredKeys;
+(id)localStoreFilename;
-(id)allKnownRecordNamesWithinRecordZoneWithID:(id)arg0 ;
-(id)initWithContext:(id)arg0 pushNotificationCenter:(id)arg1 storeDirectory:(id)arg2 sessionStorage:(id)arg3 ;
-(void)handleSyncWithChangedRecords:(id)arg0 deletedRecordNames:(id)arg1 ;
-(void)loadLocalCachesFromStore;
-(void)storage:(id)arg0 didClearAllSessions:(id)arg1 ;
-(void)storage:(id)arg0 didStoreData:(id)arg1 forSessionID:(id)arg2 ;


@end


#endif