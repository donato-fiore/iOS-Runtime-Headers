// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ACDSERVER_H
#define ACDSERVER_H

@class NSMutableArray, NSMutableDictionary, NSXPCListener, NSString;
@protocol ACDAccountStoreDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate, OS_dispatch_queue, ACDClientProviderProtocol, ACDDatabaseProtocol;

#import <Foundation/Foundation.h>

#import "ACDAccessPluginManager.h"
#import "ACDAccountNotifier.h"
#import "ACDAuthenticationDialogManager.h"
#import "ACDAuthenticationPluginManager.h"
#import "ACDDatabaseBackupActivity.h"
#import "ACDDataclassOwnersManager.h"
#import "ACRemoteDeviceProxy.h"

@interface ACDServer : NSObject <ACDAccountStoreDelegate, NSXPCConnectionDelegate, NSXPCListenerDelegate>

 {
    os_unfair_lock_s _propertyLock;
    NSMutableArray *_accountStoreClients;
    NSMutableArray *_oauthSignerClients;
    NSMutableArray *_authenticationDialogManagerClients;
    NSMutableDictionary *_clientsByConnection;
    unsigned int _clientCountMaximum;
    NSObject<OS_dispatch_queue> *_performMigrationQueue;
}


@property (retain, nonatomic) ACDAccessPluginManager *accessPluginManager; // ivar: _accessPluginManager
@property (retain, nonatomic) ACDAccountNotifier *accountNotifier; // ivar: _accountNotifier
@property (readonly, nonatomic) NSXPCListener *accountStoreListener; // ivar: _accountStoreListener
@property (readonly, nonatomic) NSXPCListener *authenticationDialogListener; // ivar: _authenticationDialogListener
@property (retain, nonatomic) ACDAuthenticationDialogManager *authenticationDialogManager; // ivar: _authenticationDialogManager
@property (retain, nonatomic) ACDAuthenticationPluginManager *authenticationPluginManager; // ivar: _authenticationPluginManager
@property (retain, nonatomic) NSObject<ACDClientProviderProtocol> *clientProvider; // ivar: _clientProvider
@property (retain, nonatomic) NSObject<ACDDatabaseProtocol> *database; // ivar: _database
@property (retain, nonatomic) ACDDatabaseBackupActivity *databaseBackupActivity; // ivar: _databaseBackupActivity
@property (retain, nonatomic) ACDDataclassOwnersManager *dataclassOwnersManager; // ivar: _dataclassOwnersManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSXPCListener *oauthSignerListener; // ivar: _oauthSignerListener
@property (retain, nonatomic) ACRemoteDeviceProxy *remoteDeviceProxy; // ivar: _remoteDeviceProxy
@property (readonly) Class superclass;


-(BOOL)_shouldNotifyClient:(id)arg0 ofChangesForAccountType:(id)arg1 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)_keyForConnection:(id)arg0 ;
-(id)_newDaemonAccountStoreFilterForClient:(id)arg0 ;
-(id)_newOAuthSignerForClient:(id)arg0 ;
-(id)clientForConnection:(id)arg0 ;
-(id)createClientForConnection:(id)arg0 ;
-(id)createDatabaseConnection;
-(id)init;
-(id)initWithAccountStoreListener:(id)arg0 oauthSignerListener:(id)arg1 authenticationDialogListener:(id)arg2 ;
-(void)_beginObservingIDSProxyNotifications;
-(void)_beginObservingLanguageChangeNotfication;
-(void)_endObservingLanguageChangeNotification;
-(void)_handleLanguageChangedDarwinNotification;
-(void)accountStore:(id)arg0 didSaveAccount:(id)arg1 changeType:(int)arg2 ;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;
-(void)credentialsDidChangeForAccount:(id)arg0 ;
-(void)dealloc;
-(void)shutdown;
-(void)start;


@end


#endif