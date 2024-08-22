// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEPROVIDERAPPCONFIGURATIONCLIENT_H
#define NEPROVIDERAPPCONFIGURATIONCLIENT_H

@class NSXPCConnection, NSMutableArray, NSString, NSXPCListener, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, NEConfigurationCommandHandling;


#import "NEUtilConfigurationClient.h"
#import "NEVPNManager.h"
#import "NEDNSProxyManager.h"
#import "NEDNSSettingsManager.h"
#import "NEFilterManager.h"

@interface NEProviderAppConfigurationClient : NEUtilConfigurationClient <NSXPCListenerDelegate>



@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (retain) NSMutableArray *createdManagers; // ivar: _createdManagers
@property (retain) NEVPNManager *currentManager; // ivar: _currentManager
@property (retain) NSMutableArray *currentManagers; // ivar: _currentManagers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NEDNSProxyManager *dnsProxyManager; // ivar: _dnsProxyManager
@property (retain) NEDNSSettingsManager *dnsSettingsManager; // ivar: _dnsSettingsManager
@property (retain) NEFilterManager *filterManager; // ivar: _filterManager
@property (readonly) NSUInteger hash;
@property BOOL isServerMode; // ivar: _isServerMode
@property (readonly) NSXPCListener *listener; // ivar: _listener
@property (readonly) NSXPCListenerEndpoint *listenerEndpoint;
@property (retain) NSObject<NEConfigurationCommandHandling> *remoteObject; // ivar: _remoteObject
@property (readonly) Class superclass;
@property (retain) NSString *targetAppBundleID; // ivar: _targetAppBundleID


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
-(id)initForServerMode;
-(id)initWithClientName:(id)arg0 ;
-(id)onDemandRules;
-(id)protocolForParameters:(id)arg0 ;
-(int)deleteKeychainItemWithPersistentReference:(id)arg0 ;
-(int)setKeychainItemData:(id)arg0 withName:(id)arg1 persistentReference:(*id)arg2 ;
-(void)handleCommand:(int)arg0 forConfigWithName:(id)arg1 withParameters:(id)arg2 completionHandler:(id)arg3 ;
-(void)handleConfigChanged:(id)arg0 ;
-(void)loadAllWithCompletionHandler:(id)arg0 ;
-(void)loadConfigurationWithName:(id)arg0 completionHandler:(id)arg1 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setOnDemandEnabled:(BOOL)arg0 ;
-(void)setOnDemandRules:(id)arg0 ;


@end


#endif