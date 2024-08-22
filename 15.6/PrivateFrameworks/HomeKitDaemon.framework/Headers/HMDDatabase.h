// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATABASE_H
#define HMDDATABASE_H

@class HMFObject, HMBCloudDatabase, NSString, NSHashTable, HMBLocalDatabase, HMFUnfairLock, NSMapTable;
@protocol HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase, HMMLogEventSubmitting;



@interface HMDDatabase : HMFObject <HMBLocalDatabaseDelegate, HMBCloudDatabaseDelegate, HMDDatabaseZoneDelegate, HMFLogging, HMDDatabase>



@property (readonly) HMBCloudDatabase *cloudDatabase; // ivar: _cloudDatabase
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSHashTable *delegates; // ivar: _delegates
@property (readonly, copy) NSString *description;
@property BOOL hasStarted; // ivar: _hasStarted
@property (readonly) NSUInteger hash;
@property (readonly) HMBLocalDatabase *localDatabase; // ivar: _localDatabase
@property (readonly) HMFUnfairLock *lock; // ivar: _lock
@property (readonly) NSObject<HMMLogEventSubmitting> *logEventSubmitter; // ivar: _logEventSubmitter
@property (readonly) Class superclass;
@property (readonly) NSMapTable *zoneDelegatesByLocalZone; // ivar: _zoneDelegatesByLocalZone


+(id)cameraClipsDatabase;
+(id)defaultDatabase;
+(id)defaultLocalDatabaseFileURL;
+(id)logCategory;
+(void)registerQueries;
-(BOOL)localDatabaseShouldLogPrivateInformation:(id)arg0 ;
-(id)acceptInvitation:(id)arg0 ;
-(id)cloudDatabase:(id)arg0 willRemoveZoneWithID:(id)arg1 ;
-(id)existingPrivateZonesWithName:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)existingSharedZoneIDWithName:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 cloudContainerIdentifier:(id)arg1 cloudContainerSourceApplicationBundleIdentifier:(id)arg2 ;
-(id)initWithLocalDatabase:(id)arg0 cloudDatabase:(id)arg1 logEventSubmitter:(id)arg2 ;
-(id)logIdentifier;
-(id)mergedActionFutureForActionFutures:(id)arg0 ;
-(id)privateZonesWithName:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)registerSharedSubscriptionForExternalRecordType:(id)arg0 ;
-(id)removeLocalAndCloudDataForLocalZone:(id)arg0 ;
-(id)removePrivateZonesWithName:(id)arg0 ;
-(id)removeSharedZonesWithName:(id)arg0 ;
-(id)removeZonesWithID:(id)arg0 isPrivate:(BOOL)arg1 ;
-(id)sharedZonesWithID:(id)arg0 configuration:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)unregisterSharedSubscriptionForExternalRecordType:(id)arg0 ;
-(id)zonesWithID:(id)arg0 isPrivate:(BOOL)arg1 shouldCreate:(BOOL)arg2 configuration:(id)arg3 delegate:(id)arg4 error:(*id)arg5 ;
-(void)addDelegate:(id)arg0 ;
-(void)addZoneDelegate:(id)arg0 forLocalZone:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didCreateZoneWithID:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didReceiveMessageWithUserInfo:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 didRemoveZoneWithID:(id)arg1 ;
-(void)cloudDatabase:(id)arg0 encounteredError:(id)arg1 withOperation:(id)arg2 onContainer:(id)arg3 ;
-(void)cloudDatabase:(id)arg0 encounteredError:(id)arg1 withOperation:(id)arg2 onZone:(id)arg3 ;
-(void)cloudZone:(id)arg0 didChangeRebuildStatus:(id)arg1 ;
-(void)cloudZone:(id)arg0 didRemoveParticipantWithClientIdentifier:(id)arg1 ;
-(void)localDatabase:(id)arg0 detectedLocalCorruptionWithInfo:(id)arg1 ;
-(void)localDatabase:(id)arg0 willRemoveZoneWithID:(id)arg1 ;
-(void)localZone:(id)arg0 didCompleteProcessingWithResult:(id)arg1 ;
-(void)performDelegateCallback:(id)arg0 ;
// -(void)performZoneDelegateCallback:(id)arg0 forLocalZone:(unk)arg1  ;
-(void)removeDelegate:(id)arg0 ;
-(void)removeZoneDelegate:(id)arg0 forLocalZone:(id)arg1 ;
-(void)start;


@end


#endif