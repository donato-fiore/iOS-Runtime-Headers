// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPHOTOSPERSONMANAGER_H
#define HMDPHOTOSPERSONMANAGER_H

@class HMPhotosPersonManagerSettings, NSString, HMIExternalPersonManager;
@protocol HMFLogging, HMDDatabaseZoneManagerDataSource;


#import "HMDPersonManager.h"
#import "HMDUser.h"

@interface HMDPhotosPersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>



@property (readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings; // ivar: _dataUnavailableExternalSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMIExternalPersonManager *hmiPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly) Class superclass;
@property (weak) HMDUser *user; // ivar: _user


+(id)logCategory;
-(BOOL)manager:(id)arg0 shouldShareWithUser:(id)arg1 ;
-(BOOL)sharesFaceClassifications;
-(BOOL)zoneManager:(id)arg0 shouldRequestShareInvitationFromUser:(id)arg1 ;
-(id)initWithUUID:(id)arg0 zoneManager:(id)arg1 dataReceivers:(id)arg2 workQueue:(id)arg3 user:(id)arg4 ;
-(id)initWithUser:(id)arg0 zoneUUID:(id)arg1 workQueue:(id)arg2 ;
-(void)handleUpdatedSettings:(id)arg0 ;


@end


#endif