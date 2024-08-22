// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEPROVIDERAPPCONFIGURATIONCLIENT_H
#define NEPROVIDERAPPCONFIGURATIONCLIENT_H

@class NSXPCListener, NSMutableArray, NSString, NSXPCConnection;
@protocol NSXPCListenerDelegate, NEConfigurationCommandHandling;


#import "NEUtilConfigurationClient.h"
#import "NEVPNManager.h"
#import "NEFilterManager.h"
#import "NEDNSProxyManager.h"
#import "NEDNSSettingsManager.h"

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate>

 {
    BOOL _isServerMode;
    NSXPCListener *_listener;
    NEVPNManager *_currentManager;
    NEFilterManager *_filterManager;
    NEDNSProxyManager *_dnsProxyManager;
    NEDNSSettingsManager *_dnsSettingsManager;
    NSMutableArray *_createdManagers;
    NSMutableArray *_currentManagers;
    NSString *_targetAppBundleID;
    NSXPCConnection *_connection;
    id<NEConfigurationCommandHandling> *_remoteObject;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createConfigurationWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)enabled;
-(BOOL)isAlwaysOn;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(BOOL)onDemandEnabled;
-(BOOL)setPasswordWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProtocolWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setProviderTypeWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)setSharedSecretWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetPasswordWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(BOOL)unsetSharedSecretWithParameters:(id)arg0 errorStr:(*id)arg1 ;
-(id)dnsProxyConfiguration;
-(id)dnsSettingsBundle;
-(id)filterConfiguration;
-(id)initWithClientName:(id)arg0 ;
-(id)onDemandRules;
-(id)protocolForParameters:(id)arg0 ;
-(void)handleCommand:(int)arg0 forConfigWithName:(id)arg1 withParameters:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleConfigChanged:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setOnDemandEnabled:(BOOL)arg0 ;
-(void)setOnDemandRules:(id)arg0 ;


@end


#endif