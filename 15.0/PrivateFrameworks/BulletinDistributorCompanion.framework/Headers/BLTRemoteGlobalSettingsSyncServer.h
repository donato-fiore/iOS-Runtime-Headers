// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTREMOTEGLOBALSETTINGSSYNCSERVER_H
#define BLTREMOTEGLOBALSETTINGSSYNCSERVER_H

@protocol BLTRemoteGlobalSettingsSyncServerLocalEndpoint><BLTRemoteGlobalSettingsProvider, BLTRemoteGlobalSettingsSyncServerRemoteEndpoint;

#import <Foundation/Foundation.h>


@interface BLTRemoteGlobalSettingsSyncServer : NSObject

@property (weak, nonatomic) NSObject<BLTRemoteGlobalSettingsSyncServerLocalEndpoint><BLTRemoteGlobalSettingsProvider> *localEndpoint; // ivar: _localEndpoint
@property (weak, nonatomic) NSObject<BLTRemoteGlobalSettingsSyncServerRemoteEndpoint> *remoteEndpoint; // ivar: _remoteEndpoint


+(id)remoteGlobalSettingsSyncServerWithLocalEndpoint:(id)arg0 remoteEndpoint:(id)arg1 ;
+(id)remoteGlobalSettingsSyncServerWithLocalEndpoint:(id)arg0 remoteEndpoint:(id)arg1 initialSyncCompletion:(id)arg2 ;
-(id)initWithLocalEndpoint:(id)arg0 remoteEndpoint:(id)arg1 initialSyncCompletion:(id)arg2 ;
-(void)checkAndThenSendGlobalSettings:(id)arg0 ;
-(void)observer:(id)arg0 updateGlobalSettings:(id)arg1 ;
-(void)sendInitialChangsetWithCompletion:(id)arg0 ;
-(void)updateLocalSettingsWithProvider:(id)arg0 ;


@end


#endif