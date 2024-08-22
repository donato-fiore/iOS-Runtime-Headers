// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTSPOKENSETTINGSYNC_H
#define BLTSPOKENSETTINGSYNC_H

@class NSDate, NSURL, BBSettingsGateway;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BLTSettingSyncServer.h"

@interface BLTSpokenSettingSync : NSObject

@property (retain, nonatomic) NSDate *localGlobalSpokenSettingDate; // ivar: _localGlobalSpokenSettingDate
@property (nonatomic) BOOL localGlobalSpokenSettingEnabled; // ivar: _localGlobalSpokenSettingEnabled
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSDate *remoteGlobalSpokenSettingDate; // ivar: _remoteGlobalSpokenSettingDate
@property (nonatomic) BOOL remoteGlobalSpokenSettingEnabled; // ivar: _remoteGlobalSpokenSettingEnabled
@property (retain, nonatomic) NSURL *remoteSettingStoreURL; // ivar: _remoteSettingStoreURL
@property (retain, nonatomic) BBSettingsGateway *settingsGateway; // ivar: _settingsGateway
@property (retain, nonatomic) BLTSettingSyncServer *syncServer; // ivar: _syncServer
@property (nonatomic) NSUInteger updatingLocalStateFromRemoteCount; // ivar: _updatingLocalStateFromRemoteCount


-(BOOL)_queue_updateLocalGlobalSpokenSettingEnabledFromUser:(BOOL)arg0 ;
-(id)initWithSettingsGateway:(id)arg0 syncServer:(id)arg1 ;
-(void)_queue_setNewLocalStateFromRemote:(BOOL)arg0 ;
-(void)_queue_synchronizeSettingsWithLocalEnabled:(BOOL)arg0 ;
-(void)bbUpdateLocalGlobalSpokenSettingEnabled:(NSInteger)arg0 ;
-(void)transportUpdateRemoteGlobalSpokenSettingEnabled:(BOOL)arg0 date:(id)arg1 ;


@end


#endif