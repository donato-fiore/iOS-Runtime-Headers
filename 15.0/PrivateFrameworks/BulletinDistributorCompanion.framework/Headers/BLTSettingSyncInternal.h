// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTSETTINGSYNCINTERNAL_H
#define BLTSETTINGSYNCINTERNAL_H

@class NSString, BBObserver, BBSettingsGateway;
@protocol BBObserverDelegate, BLTSettingSyncingClient;

#import <Foundation/Foundation.h>

#import "BLTWristStateObserver.h"
#import "BLTSettingSyncServer.h"
#import "BLTMuteSync.h"
#import "BLTRemoteGlobalSettingsSyncServer.h"
#import "BLTSectionConfiguration.h"
#import "BLTSpokenSettingSync.h"

@interface BLTSettingSyncInternal : NSObject <BBObserverDelegate, BLTSettingSyncingClient>

 {
    BLTWristStateObserver *_wristStateObserver;
}


@property (retain, nonatomic) BLTSettingSyncServer *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isWristDetectDisabled;
@property (retain, nonatomic) BLTMuteSync *muteSync; // ivar: _muteSync
@property (retain, nonatomic) BBObserver *observer; // ivar: _observer
@property (retain, nonatomic) BLTRemoteGlobalSettingsSyncServer *remoteGlobalSettingsSyncServer; // ivar: _remoteGlobalSettingsSyncServer
@property (readonly, nonatomic) BLTSectionConfiguration *sectionConfiguration; // ivar: _sectionConfiguration
@property (retain, nonatomic) BBSettingsGateway *settingsGateway; // ivar: _settingsGateway
@property (retain, nonatomic) BLTSpokenSettingSync *spokenSettingSync; // ivar: _spokenSettingSync
@property (readonly) Class superclass;


-(NSUInteger)willNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 subtype:(NSInteger)arg2 ;
-(NSUInteger)willNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 subtype:(NSInteger)arg2 category:(id)arg3 ignoresDowntime:(BOOL)arg4 isCritical:(BOOL)arg5 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg0 ;
-(id)init;
-(id)initWithSectionConfiguration:(id)arg0 queue:(id)arg1 ;
-(void)connect;
-(void)dealloc;
-(void)disableStandaloneTestMode;
-(void)enableNotifications:(BOOL)arg0 sectionID:(id)arg1 mirror:(BOOL)arg2 ;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(NSUInteger)arg0 maximumSendDelay:(NSUInteger)arg1 minimumResponseDelay:(NSUInteger)arg2 maximumResponseDelay:(NSUInteger)arg3 ;
-(void)observer:(id)arg0 updateGlobalSettings:(id)arg1 ;
-(void)removeSectionWithSectionID:(id)arg0 ;
-(void)setNotificationsCriticalAlertEnabled:(int)arg0 sectionID:(id)arg1 ;
-(void)setNotificationsGrouping:(int)arg0 sectionID:(id)arg1 ;
-(void)setNotificationsLevel:(NSUInteger)arg0 sectionID:(id)arg1 mirror:(BOOL)arg2 ;
-(void)setNotificationsLevel:(NSUInteger)arg0 sectionID:(id)arg1 mirror:(BOOL)arg2 fromRemote:(BOOL)arg3 ;
-(void)setNotificationsSoundEnabled:(int)arg0 sectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg0 completion:(id)arg1 ;
-(void)setSectionInfo:(id)arg0 keypaths:(id)arg1 completion:(id)arg2 ;
-(void)setSectionSubtypeParametersIcon:(id)arg0 forSectionID:(id)arg1 forSubtypeID:(NSInteger)arg2 ;
-(void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)arg0 date:(id)arg1 ;
-(void)updateGlobalSettings:(id)arg0 ;


@end


#endif