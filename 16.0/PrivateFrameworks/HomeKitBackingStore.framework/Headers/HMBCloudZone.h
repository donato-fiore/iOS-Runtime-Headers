// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMBCLOUDZONE_H
#define HMBCLOUDZONE_H

@class HMFObject, CKDatabase, NSString, NSArray, NAFuture, NSMutableDictionary, NSMapTable, NSSet, NSMutableSet, NSOperationQueue, NSUUID;
@protocol HMFLogging, HMBMirrorProtocol, HMBCloudZoneDelegate, HMBCloudZoneRebuilder;


#import "HMBCloudDatabase.h"
#import "HMBCloudZoneConfiguration.h"
#import "HMBLocalZone.h"
#import "HMBModelContainer.h"
#import "HMBCloudZoneShareModel.h"
#import "HMBCloudZoneID.h"

@interface HMBCloudZone : HMFObject <HMFLogging, HMBMirrorProtocol>

 {
    os_unfair_lock_s _propertyLock;
}


@property (weak, nonatomic) HMBCloudDatabase *cloudDatabase; // ivar: _cloudDatabase
@property (readonly, copy, nonatomic) HMBCloudZoneConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) CKDatabase *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSArray *defaultDesiredKeys; // ivar: _defaultDesiredKeys
@property (weak, nonatomic) NSObject<HMBCloudZoneDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NAFuture *destroyFuture; // ivar: _destroyFuture
@property (readonly, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier
@property (readonly) BOOL hasPerformedInitialFetch;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *inProgressPushFuturesByOutputBlockRow; // ivar: _inProgressPushFuturesByOutputBlockRow
@property (readonly, nonatomic) NSInteger keyStatus;
@property (weak, nonatomic) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, nonatomic) NSMapTable *modelClassToRequiresPostProcessingMap; // ivar: _modelClassToRequiresPostProcessingMap
@property (retain, nonatomic) HMBModelContainer *modelContainer; // ivar: _modelContainer
@property (readonly, nonatomic) BOOL needsZoneCreation; // ivar: _needsZoneCreation
@property (readonly, nonatomic) BOOL needsZoneDeletion; // ivar: _needsZoneDeletion
@property (readonly, nonatomic) NSSet *participants;
@property (retain) NAFuture *queuedCloudPullFuture; // ivar: _queuedCloudPullFuture
@property (retain) NSMutableSet *queuedFetchRecordsContexts; // ivar: _queuedFetchRecordsContexts
@property (retain, nonatomic) NSObject<HMBCloudZoneRebuilder> *rebuilder; // ivar: _rebuilder
@property (readonly, nonatomic) NSOperationQueue *recordOperationQueue; // ivar: _recordOperationQueue
@property (retain) HMBCloudZoneShareModel *shareModel; // ivar: _shareModel
@property (readonly, nonatomic) NSOperationQueue *shareOperationQueue; // ivar: _shareOperationQueue
@property (readonly, nonatomic) NSMutableDictionary *shareParticipantModelsByClientIdentifier; // ivar: _shareParticipantModelsByClientIdentifier
@property (retain, nonatomic) NAFuture *shutdownFuture; // ivar: _shutdownFuture
@property (readonly, nonatomic) NAFuture *startUp; // ivar: _startUp
@property (readonly, nonatomic) NSUUID *stateModelID; // ivar: _stateModelID
@property (weak, nonatomic) HMBLocalZone *stateZone; // ivar: _stateZone
@property (readonly, copy) NSSet *subscriptions;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NAFuture *waitForPendingRebuild;
@property (retain, nonatomic) HMBCloudZoneID *zoneID; // ivar: _zoneID
@property (readonly, nonatomic, getter=isZoneRebuildInProgress) BOOL zoneRebuildInProgress;


+(id)logCategory;
-(BOOL)handleUpdatedShare:(id)arg0 error:(*id)arg1 ;
-(BOOL)handleUpdatedShareParticipantRecord:(id)arg0 error:(*id)arg1 ;
-(BOOL)isInternalModel:(id)arg0 ;
-(BOOL)populateManateeCloudRecord:(id)arg0 withModel:(id)arg1 encodingContext:(id)arg2 error:(*id)arg3 ;
-(BOOL)populateV4CloudRecord:(id)arg0 withModel:(id)arg1 metadataFieldData:(id)arg2 startEncoding:(NSUInteger)arg3 endEncoding:(NSUInteger)arg4 error:(*id)arg5 ;
-(BOOL)resolveConflicts:(id)arg0 options:(id)arg1 ;
-(BOOL)retryCloudKitOperation:(id)arg0 afterError:(id)arg1 retryBlock:(id)arg2 ;
-(BOOL)startupWithModelContainer:(id)arg0 error:(*id)arg1 ;
-(id)_addShareOperationAfterStartupWithName:(id)arg0 block:(id)arg1 ;
-(id)_addShareOperationWithName:(id)arg0 block:(id)arg1 ;
-(id)_createShareModel;
-(id)_fetchCompleteModelsWithIDs:(id)arg0 force:(BOOL)arg1 ;
-(id)_fetchInvitationWithContext:(id)arg0 usingShare:(id)arg1 ;
-(id)_fetchRecordsWithRecordIDs:(id)arg0 ;
-(id)_leaveCloudShareRequestingNewInvitationToken:(BOOL)arg0 allowCloudPull:(BOOL)arg1 ;
-(id)_pushDeletedParticipantRecordIDs:(id)arg0 ;
-(id)_pushUpdatedShare:(id)arg0 ;
-(id)_pushUpdatedShare:(id)arg0 participantRecord:(id)arg1 ;
-(id)_revokeShareForParticipant:(id)arg0 usingShare:(id)arg1 ;
-(id)_setWriteAccessEnabled:(BOOL)arg0 forParticipant:(id)arg1 usingShare:(id)arg2 ;
-(id)_triggerOutputForOutputRow:(NSUInteger)arg0 options:(id)arg1 ;
-(id)attributeDescriptions;
-(id)cloudFieldForEncoding:(NSUInteger)arg0 ;
-(id)cloudMetadataForModel:(id)arg0 usingEncoding:(NSUInteger)arg1 ;
-(id)createShareModel;
-(id)decodeManateeCloudFromRecord:(id)arg0 externalRecordFields:(id)arg1 source:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)decodeModelFromRecord:(id)arg0 externalRecordFields:(id)arg1 source:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)decodeShareModelFromShare:(id)arg0 ;
-(id)destroy;
-(id)encodeManateeCloudModel:(id)arg0 existingRecord:(id)arg1 encodingContext:(id)arg2 error:(*id)arg3 ;
-(id)encodeRecordFromModel:(id)arg0 existingRecord:(id)arg1 encodingContext:(id)arg2 error:(*id)arg3 ;
-(id)encodeRecordFromModel:(id)arg0 externalData:(id)arg1 encodingContext:(id)arg2 error:(*id)arg3 ;
-(id)encodeShareModel:(id)arg0 ;
-(id)fetchCloudShareIDForShareParticipantClientIdentifier:(id)arg0 ;
-(id)fetchCompleteModel:(id)arg0 force:(BOOL)arg1 ;
-(id)fetchCompleteModelForRecordID:(id)arg0 ;
-(id)fetchCompleteModelWithID:(id)arg0 ;
-(id)fetchCompleteModels:(id)arg0 force:(BOOL)arg1 ;
-(id)fetchCompleteModelsForRecordIDs:(id)arg0 ;
-(id)fetchCompleteModelsWithIDs:(id)arg0 ;
-(id)fetchCurrentParticipantCloudShareID;
-(id)fetchInvitationWithContext:(id)arg0 ;
-(id)fetchOwnerParticipantCloudShareID;
-(id)fetchRecordWithRecordID:(id)arg0 canRetry:(BOOL)arg1 ;
-(id)fetchRecordsWithRecordIDs:(id)arg0 ;
-(id)flush;
-(id)initWithCloudDatabase:(id)arg0 configuration:(id)arg1 state:(id)arg2 ;
-(id)leaveCloudShareRequestingNewInvitationToken:(BOOL)arg0 ;
-(id)logIdentifier;
-(id)participantWithClientIdentifier:(id)arg0 ;
-(id)performCloudPullWithFetchToken:(id)arg0 options:(id)arg1 ;
-(id)performCloudPullWithOptions:(id)arg0 ;
-(id)pushRecordsToUpdate:(id)arg0 recordIDsToRemove:(id)arg1 configuration:(id)arg2 rollbackEnabled:(BOOL)arg3 ;
-(id)pushRecordsToUpdate:(id)arg0 recordIDsToRemove:(id)arg1 configuration:(id)arg2 rollbackEnabled:(BOOL)arg3 needsNewInvitationToken:(BOOL)arg4 ;
-(id)recordIDForModel:(id)arg0 ;
-(id)registerSubscriptionForExternalRecordType:(id)arg0 ;
-(id)revokeShareForParticipant:(id)arg0 ;
-(id)setWriteAccessEnabled:(BOOL)arg0 forParticipant:(id)arg1 ;
-(id)shutdown;
-(id)triggerOutputForOutputRow:(NSUInteger)arg0 options:(id)arg1 ;
-(id)unregisterSubscriptionForExternalRecordType:(id)arg0 ;
-(void)_fetchRecordsForContexts:(id)arg0 ;
-(void)_startUpWithPrivateLocalZone:(id)arg0 ;
-(void)_startUpWithPublicLocalZone:(id)arg0 ;
-(void)dealloc;
-(void)handleDeletion;
-(void)handleLostKeys;
-(void)handleUpdatedInternalModels:(id)arg0 ;
-(void)handleUpdatedRebuilderModel:(id)arg0 ;
-(void)handleUpdatedShareModel:(id)arg0 ;
-(void)handleUpdatedShareParticipantModels:(id)arg0 ;
-(void)handleZoneChangedNotification;
-(void)initializeShareModels;
-(void)notifyDelegateOfError:(id)arg0 forOperation:(id)arg1 ;
-(void)pushGroupWithBlockRow:(NSUInteger)arg0 tuples:(id)arg1 options:(id)arg2 activity:(id)arg3 completionPromise:(id)arg4 ;
-(void)rebuild;
-(void)startUpWithLocalZone:(id)arg0 ;


@end


#endif