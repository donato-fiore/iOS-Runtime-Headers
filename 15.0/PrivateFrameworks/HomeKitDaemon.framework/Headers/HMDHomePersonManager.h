// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDHOMEPERSONMANAGER_H
#define HMDHOMEPERSONMANAGER_H

@class NSString, HMIHomePersonManager, HMHomePersonManagerSettings;
@protocol HMFLogging, HMDDatabaseZoneManagerDataSource;


#import "HMDPersonManager.h"
#import "HMDHome.h"

@interface HMDHomePersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIHomePersonManager *hmiPersonManager;
@property (weak) HMDHome *home; // ivar: _home
@property (readonly, copy) HMHomePersonManagerSettings *settings;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)manager:(id)arg0 shouldGrantWriteAccessToUser:(id)arg1 ;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(BOOL)sharesFaceClassifications;
-(BOOL)syncsPersonData;
-(BOOL)zoneManager:(id)arg0 shouldRequestShareInvitationFromUser:(id)arg1 ;
-(id)initWithHome:(id)arg0 zoneUUID:(id)arg1 workQueue:(id)arg2 ;
-(id)initWithUUID:(id)arg0 zoneManager:(id)arg1 dataReceivers:(id)arg2 workQueue:(id)arg3 home:(id)arg4 ;
-(void)configureWithHome:(id)arg0 ;
-(void)handleUpdatedSettings:(id)arg0 ;
-(void)handleUserCamerasAccessLevelDidChangeNotification:(id)arg0 ;
-(void)handleUserRemoteAccessDidChangeNotification:(id)arg0 ;


@end


#endif