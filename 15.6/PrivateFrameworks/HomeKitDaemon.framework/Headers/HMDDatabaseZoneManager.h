// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATABASEZONEMANAGER_H
#define HMDDATABASEZONEMANAGER_H

@class HMFObject, HMBCloudZone, NSString, HMBLocalZone, NSUUID;
@protocol HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate, HMDDatabaseZoneManagerDataSource, HMDDatabase, HMDDatabaseZoneManagerDelegate, OS_dispatch_queue, HMBLocalZoneDelegate><HMBCloudZoneDelegate;


#import "HMDDatabaseZoneManagerConfiguration.h"
#import "HMDHome.h"
#import "HMDCloudShareParticipantsManager.h"
#import "HMDCloudShareMessenger.h"

@interface HMDDatabaseZoneManager : HMFObject <HMFLogging, HMDDatabaseDelegate, HMDCloudShareMessengerDelegate, HMDCloudShareParticipantsManagerDelegate>



@property (retain) HMBCloudZone *cloudZone; // ivar: _cloudZone
@property (readonly, copy) NSString *containerIdentifier;
@property (weak) NSObject<HMDDatabaseZoneManagerDataSource> *dataSource; // ivar: _dataSource
@property (readonly) NSObject<HMDDatabase> *database; // ivar: _database
@property (readonly, copy) NSString *debugDescription;
@property (copy) HMDDatabaseZoneManagerConfiguration *defaultConfiguration; // ivar: _defaultConfiguration
@property (weak) NSObject<HMDDatabaseZoneManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (retain) HMBLocalZone *localZone; // ivar: _localZone
@property (readonly, copy) NSUUID *messageTargetUUID;
@property (retain) HMDCloudShareParticipantsManager *participantsManager; // ivar: _participantsManager
@property (copy) id *participantsManagerFactory; // ivar: _participantsManagerFactory
@property (readonly) HMDCloudShareMessenger *shareMessenger; // ivar: _shareMessenger
@property NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue
@property (weak) NSObject<HMBLocalZoneDelegate><HMBCloudZoneDelegate> *zoneDelegate; // ivar: _zoneDelegate
@property (readonly, copy) NSString *zoneName; // ivar: _zoneName


+(id)logCategory;
-(BOOL)_fetchExistingPrivateZonesWithConfiguration:(id)arg0 ;
-(BOOL)_fetchPrivateZonesWithConfiguration:(id)arg0 ;
-(BOOL)_fetchSharedZonesWithConfiguration:(id)arg0 ;
-(BOOL)_handleFetchZonesResult:(id)arg0 configuration:(id)arg1 ;
-(BOOL)start;
-(BOOL)startWithConfiguration:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 zoneName:(id)arg1 home:(id)arg2 messageTargetUUID:(id)arg3 zoneDelegate:(id)arg4 workQueue:(id)arg5 ;
-(id)initWithDatabase:(id)arg0 zoneName:(id)arg1 home:(id)arg2 shareMessenger:(id)arg3 zoneDelegate:(id)arg4 workQueue:(id)arg5 ;
-(id)logIdentifier;
-(id)remove;
-(void)_sendShareInvitation:(id)arg0 toUser:(id)arg1 device:(id)arg2 ;
-(void)_tearDownState;
-(void)configure;
-(void)database:(id)arg0 didCreateZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)database:(id)arg0 didReceiveMessageWithUserInfo:(id)arg1 ;
-(void)database:(id)arg0 didRemoveZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(void)manager:(id)arg0 didRequestSendForInvitation:(id)arg1 toDevice:(id)arg2 ;
-(void)manager:(id)arg0 didRequestSendForInvitation:(id)arg1 toUser:(id)arg2 ;
-(void)messenger:(id)arg0 didReceiveInvitationData:(id)arg1 completion:(id)arg2 ;
-(void)messenger:(id)arg0 didReceiveInvitationRequestFromUser:(id)arg1 device:(id)arg2 ;
-(void)updateShareParticipants;


@end


#endif