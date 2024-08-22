// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKSYNCSTATE_H
#define IMDCKSYNCSTATE_H

@class NSDictionary, NSString, NSDate, IMKeyValueCollection, NSArray;
@protocol IMKeyValueCollectionDelegate, IMDCKSyncStateDelegate;

#import <Foundation/Foundation.h>


@interface IMDCKSyncState : NSObject <IMKeyValueCollectionDelegate>



@property (nonatomic) NSInteger accountStatus;
@property (copy, nonatomic) NSDictionary *analyticSyncDatesDictionary;
@property (nonatomic) BOOL createdChatZone;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMDCKSyncStateDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL deletedZones;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisablingDevices) BOOL disablingDevices;
@property (nonatomic, getter=isEligibleForTruthZone) BOOL eligibleForTruthZone;
@property (copy, nonatomic) NSDate *exitDate;
@property (nonatomic, getter=isFeatureEnabled) BOOL featureEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInExitState) BOOL inExitState;
@property (readonly, nonatomic) IMKeyValueCollection *keyValueCollection; // ivar: _storage
@property (copy, nonatomic) NSDate *lastSyncDate;
@property (nonatomic, getter=isRemovedFromBackup) BOOL removedFromBackup;
@property (nonatomic, getter=isStartingEnabledSettingChange) BOOL startingEnabledSettingChange;
@property (nonatomic, getter=isStartingInitialSyncSetByCloudKitHooks) BOOL startingInitialSyncSetByCloudKitHooks;
@property (nonatomic, getter=isStartingPeriodicSyncSetByCloudKitHooks) BOOL startingPeriodicSyncSetByCloudKitHooks;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger syncControllerRecordType;
@property (nonatomic) NSUInteger syncControllerSyncState;
@property (nonatomic) NSInteger syncControllerSyncType;
@property (readonly, nonatomic) NSArray *syncErrors;
@property (nonatomic, getter=isSyncing) BOOL syncing;
@property (nonatomic, getter=isSyncingEnabled) BOOL syncingEnabled;
@property (nonatomic, getter=isSyncingPaused) BOOL syncingPaused;


+(id)logHandle;
+(void)removeBuildObjectsFromDict:(id)arg0 ;
-(BOOL)_shouldReportNewUserIfCreatedChatZones:(BOOL)arg0 deletedZones:(BOOL)arg1 ;
-(id)_describeErrors:(id)arg0 ;
-(id)describeErrors;
-(id)describeRecordCounts;
-(id)getAnalyticSyncDatesObjectForKey:(id)arg0 ;
-(id)init;
-(id)initWithKeyValueCollection:(id)arg0 ;
-(id)logHandle;
-(id)serializedRepresentation;
-(id)syncReportDictionary;
-(id)syncReportDictionaryForAttempt:(NSUInteger)arg0 withSuccess:(BOOL)arg1 duration:(CGFloat)arg2 ;
-(id)syncUserType;
-(void)_finishBatchChange;
-(void)_removeObjectForKey:(id)arg0 forDictionary:(id)arg1 ;
-(void)_setObject:(id)arg0 forKey:(id)arg1 forDictionary:(id)arg2 shouldSetBuild:(BOOL)arg3 ;
-(void)_setStartingSync;
-(void)_startBatchChange;
-(void)addSyncError:(id)arg0 ;
-(void)broadcastSyncState;
-(void)clearLocalCloudKitSyncState;
-(void)clearSyncErrors;
-(void)keyValueCollection:(id)arg0 didUpdateValues:(id)arg1 ;
-(void)keyValueCollection:(id)arg0 willUpdateValues:(id)arg1 ;
-(void)removeObjectFromAnalyticSyncDatesDictionaryForKey:(id)arg0 ;
-(void)setErrorToAccountNeedsRepair;
-(void)setErrorToKeyRollingError;
-(void)setStartingInitialSyncWithRecordType:(NSInteger)arg0 ;
-(void)setStartingPeriodicSyncWithRecordType:(NSInteger)arg0 ;


@end


#endif