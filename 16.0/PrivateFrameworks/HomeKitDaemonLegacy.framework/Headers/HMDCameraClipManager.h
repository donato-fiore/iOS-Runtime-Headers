// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERACLIPMANAGER_H
#define HMDCAMERACLIPMANAGER_H

@class HMFObject, NSUUID, HMBCloudZone, NSString, HMBLocalZone, HMFMessageDispatcher, NSDate;
@protocol HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDActiveXPCClientConnectionsPeriodicTimerDelegate, HMDCameraClipManagerDelegate, HMDFileManager, OS_dispatch_queue;


#import "HMDActiveXPCClientConnectionsPeriodicTimer.h"
#import "HMDCameraSignificantEventFaceClassificationResolver.h"
#import "HMDFeaturesDataSource.h"
#import "HMDCameraClipFeedbackManager.h"
#import "HMDCameraClipsQuotaManager.h"
#import "HMDDatabaseZoneManager.h"

@interface HMDCameraClipManager : HMFObject <HMBLocalZoneModelObserver, HMFLogging, HMFMessageReceiver, HMDDatabaseZoneManagerDataSource, HMDDatabaseZoneManagerDelegate, HMDActiveXPCClientConnectionsPeriodicTimerDelegate>



@property (readonly, copy) NSUUID *cameraProfileUUID; // ivar: _cameraProfileUUID
@property (readonly) HMDActiveXPCClientConnectionsPeriodicTimer *clientConnectionsTimer; // ivar: _clientConnectionsTimer
@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraClipManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // ivar: _faceClassificationResolver
@property (readonly) HMDFeaturesDataSource *featuresDataSource; // ivar: _featuresDataSource
@property (retain) HMDCameraClipFeedbackManager *feedbackManager; // ivar: _feedbackManager
@property NSUInteger fetchBatchLimit; // ivar: _fetchBatchLimit
@property (copy) id *fetchServerFactory; // ivar: _fetchServerFactory
@property (readonly) NSObject<HMDFileManager> *fileManager; // ivar: _fileManager
@property (readonly) BOOL hasStartedUpCloudZone;
@property (nonatomic) BOOL hasWriteAccess; // ivar: _hasWriteAccess
@property (readonly) NSUInteger hash;
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly) HMDCameraClipsQuotaManager *quotaManager; // ivar: _quotaManager
@property (readonly) Class superclass;
@property (copy) NSDate *suppressNotificationsBeforeDate; // ivar: _suppressNotificationsBeforeDate
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (readonly) HMDDatabaseZoneManager *zoneManager; // ivar: _zoneManager


+(CGFloat)maximumClipDuration;
+(id)logCategory;
-(BOOL)_fetchClipsWithDateInterval:(id)arg0 quality:(NSInteger)arg1 isAscending:(BOOL)arg2 error:(*id)arg3 handler:(id)arg4 ;
-(BOOL)_fetchSignificantEventsWithDateInterval:(id)arg0 isAscending:(BOOL)arg1 error:(*id)arg2 handler:(id)arg3 ;
-(BOOL)areShareModificationsEnabledForManager:(id)arg0 ;
-(BOOL)manager:(id)arg0 shouldGrantWriteAccessToUser:(id)arg1 ;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(BOOL)zoneManager:(id)arg0 shouldRequestShareInvitationFromUser:(id)arg1 ;
-(id)_faceClassificationsForSignificantEventWithUUID:(id)arg0 ;
-(id)_fetchCanonicalHeroFrameURLForClipModel:(id)arg0 ;
-(id)_fetchFaceCropURLForSignificantEventModel:(id)arg0 ;
-(id)_fetchHeroFrameURLForSignificantEventModel:(id)arg0 ;
-(id)_handleFaceMisclassificationForFaceCropURL:(id)arg0 personUUID:(id)arg1 personManagerUUID:(id)arg2 significantEventModel:(id)arg3 ;
-(id)_performCloudPull;
-(id)_removeClipsWithUUIDs:(id)arg0 options:(id)arg1 ;
-(id)_significantEventFromSignificantEventModel:(id)arg0 ;
-(id)_significantEventModelsForClipWithUUID:(id)arg0 ;
-(id)_significantEventModelsWithUUIDs:(id)arg0 ;
-(id)_significantEventsWithUUIDs:(id)arg0 ;
-(id)disableCloudStorage;
-(id)enableCloudStorage;
-(id)fetchHeroFrameURLForSignificantEventWithUUID:(id)arg0 ;
-(id)heroFrameURLForSignificantEventWithUUID:(id)arg0 ;
-(id)home;
-(id)initWithHome:(id)arg0 zoneUUID:(id)arg1 messageDispatcher:(id)arg2 workQueue:(id)arg3 cameraProfileUUID:(id)arg4 ;
-(id)initWithZoneManager:(id)arg0 quotaManager:(id)arg1 faceClassificationResolver:(id)arg2 clientConnectionsTimer:(id)arg3 messageDispatcher:(id)arg4 workQueue:(id)arg5 cameraProfileUUID:(id)arg6 fileManager:(id)arg7 featuresDataSource:(id)arg8 ;
-(id)localZone:(id)arg0 didProcessModelCreation:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelDeletion:(id)arg1 ;
-(id)localZone:(id)arg0 didProcessModelUpdate:(id)arg1 ;
-(id)performCloudPull;
-(id)remove;
-(id)significantEventsForClipContainingDate:(id)arg0 ;
-(id)significantEventsForClipWithUUID:(id)arg0 ;
-(id)significantEventsWithDateInterval:(id)arg0 ;
-(void)_cleanUpClipsForInitialStartup:(BOOL)arg0 ;
-(void)_cleanUpExpiredClips;
-(void)_cleanUpIncompleteClipsForInitialStartup:(BOOL)arg0 ;
-(void)_fetchAssetContextForMessage:(id)arg0 propertyName:(id)arg1 ;
-(void)_handleChangedClipModel:(id)arg0 wasCreated:(BOOL)arg1 mirrorOutputFuture:(id)arg2 ;
-(void)_handleChangedFaceClassificationModel:(id)arg0 ;
-(void)_handleChangedSignificantEventNotificationModel:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)_notifyForChangedSignificantEventModel:(id)arg0 mirrorOutputFuture:(id)arg1 ;
-(void)_notifyPrimaryResidentAboutFaceMisclassificationForFaceCropData:(id)arg0 personUUID:(id)arg1 personManagerUUID:(id)arg2 ;
-(void)_notifyTransportsOfUpdatedClips:(id)arg0 removedClipUUIDs:(id)arg1 ;
-(void)_notifyTransportsOfUpdatedSignificantEvents:(id)arg0 removedSignificantEventUUIDs:(id)arg1 ;
-(void)_removeAllFaceClassificationModels;
-(void)cleanUpClips;
-(void)clientConnectionsTimerDidFire:(id)arg0 ;
-(void)configure;
-(void)handleDeleteAllClipsMessage:(id)arg0 ;
-(void)handleDeleteClipMessage:(id)arg0 ;
-(void)handleFetchClipForSignificantEventMessage:(id)arg0 ;
-(void)handleFetchClipMessage:(id)arg0 ;
-(void)handleFetchClipsMessage:(id)arg0 ;
-(void)handleFetchCountOfClipsMessage:(id)arg0 ;
-(void)handleFetchFaceCropDataRepresentationMessage:(id)arg0 ;
-(void)handleFetchFaceCropURLMessage:(id)arg0 ;
-(void)handleFetchHeroFrameDataRepresentationMessage:(id)arg0 ;
-(void)handleFetchHeroFrameURLMessage:(id)arg0 ;
-(void)handleFetchSignificantEventsMessage:(id)arg0 ;
-(void)handleFetchVideoSegmentsAssetContextMessage:(id)arg0 ;
-(void)handleHandleFaceMisclassificationMessage:(id)arg0 ;
-(void)handleHomePersonManagerSettingsDidChangeNotification:(id)arg0 ;
-(void)handleImportClipsMessage:(id)arg0 ;
-(void)handlePerformCloudPullMessage:(id)arg0 ;
-(void)handleRemoteHandleFaceMisclassificationMessage:(id)arg0 ;
-(void)handleSubscribeMessage:(id)arg0 ;
-(void)handleUnsubscribeMessage:(id)arg0 ;
-(void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg0 ;
-(void)handleUserPrivilegeDidChangeNotification:(id)arg0 ;
-(void)handleUserRemoteAccessDidChangeNotification:(id)arg0 ;
-(void)submitLogEvent:(id)arg0 error:(id)arg1 ;
-(void)zoneManager:(id)arg0 didReceiveMessageWithUserInfo:(id)arg1 ;
-(void)zoneManagerDidStart:(id)arg0 ;
-(void)zoneManagerDidStop:(id)arg0 ;


@end


#endif