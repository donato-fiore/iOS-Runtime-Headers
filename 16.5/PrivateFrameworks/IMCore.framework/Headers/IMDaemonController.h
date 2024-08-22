// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDAEMONCONTROLLER_H
#define IMDAEMONCONTROLLER_H

@class NSArray, NSString, NSMapTable, NSDictionary, IMDistributingProxy, NSMutableDictionary;
@protocol IMDaemonControlling_Private, IMDaemonControlling, IMDaemonProtocol;

#import <Foundation/Foundation.h>

#import "IMMultiplexedDaemonConnection.h"
#import "IMDaemonConnection.h"
#import "IMDaemonListener.h"
#import "IMDaemonQueryController.h"

@interface IMDaemonController : NSObject <IMDaemonControlling_Private, IMDaemonControlling>



@property (nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume; // ivar: __blocksConnectionAtResume
@property (retain, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // ivar: __servicesToAllow
@property (retain, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // ivar: __servicesToDeny
@property (retain, nonatomic) IMMultiplexedDaemonConnection *anonymousMultiplexedConnection; // ivar: _anonymousMultiplexedConnection
@property (readonly, nonatomic) unsigned int capabilities;
@property (readonly, nonatomic, getter=isConnected) BOOL connected;
@property (readonly, nonatomic) IMDaemonConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) IMDaemonListener *listener; // ivar: _listener
@property (retain, nonatomic, setter=_setListenerID:) NSString *listenerID; // ivar: _listenerID
@property (readonly, nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (readonly, nonatomic) NSMapTable *multiplexedConnections; // ivar: _multiplexedConnections
@property (readonly, nonatomic) NSUInteger processCapabilities;
@property (readonly, nonatomic) NSDictionary *processContext; // ivar: _processContext
@property (readonly, nonatomic) IMDaemonQueryController *queryController; // ivar: _queryController
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *remoteDaemon;
@property (readonly, nonatomic) IMDistributingProxy *remoteDaemonProxy; // ivar: _remoteDaemonProxy
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *replyingRemoteDaemon;
@property (readonly, nonatomic) NSMutableDictionary *retainedMultiplexedConnections; // ivar: _retainedMultiplexedConnections
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *synchronousRemoteDaemon;
@property (readonly, nonatomic) NSObject<IMDaemonProtocol> *synchronousReplyingRemoteDaemon;


+(id)sharedController;
+(id)sharedInstance;
-(BOOL)_clientRequiresSynchronousConnectionRescueWithListenerID:(id)arg0 ;
-(BOOL)_hasMultiplexedConnectionWithUniqueID:(id)arg0 ;
-(BOOL)addListenerID:(id)arg0 capabilities:(unsigned int)arg1 ;
-(BOOL)connectToDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 blockUntilConnected:(BOOL)arg2 ;
-(BOOL)hasListenerForID:(id)arg0 ;
-(BOOL)removeListenerID:(id)arg0 ;
-(NSUInteger)_capabilitiesForMultiplexedConnectionWithUniqueID:(id)arg0 ;
-(NSUInteger)_clientCapabilitiesForLegacyClientWithListenerID:(id)arg0 requestedCapabilities:(NSUInteger)arg1 ;
-(id)_multiplexedConnectionWithUniqueID:(id)arg0 label:(id)arg1 capabilities:(NSUInteger)arg2 context:(id)arg3 retain:(BOOL)arg4 ;
-(id)init;
-(id)multiplexedConnectionWithLabel:(id)arg0 capabilities:(NSUInteger)arg1 context:(id)arg2 ;
-(unsigned int)capabilitiesForListenerID:(id)arg0 ;
-(void)_capabilitiesDidChangeWithContextChange:(BOOL)arg0 ;
-(void)_connectWithCompletion:(id)arg0 ;
-(void)_connectWithContextChange:(BOOL)arg0 ;
-(void)_invalidateMultiplexedConnectionWithUniqueID:(id)arg0 ;
-(void)_noteSetupComplete;
-(void)_updateAnonymousMultiplexedConnectionWithAddedCapabilities:(NSUInteger)arg0 ;
-(void)disconnectFromDaemon;
-(void)killDaemon;
-(void)requestSetup;
-(void)sendQueryWithReply:(BOOL)arg0 query:(id)arg1 ;


@end


#endif