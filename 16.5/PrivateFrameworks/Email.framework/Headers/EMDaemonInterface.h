// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EMDAEMONINTERFACE_H
#define EMDAEMONINTERFACE_H

@class NSXPCConnection, NSHashTable, NSString, EMDonationController;
@protocol EFLoggable, EMRemoteProxyGenerator, OS_dispatch_queue, EFCancelable, NSXPCProxyCreating, EMVIPManager;

#import <Foundation/Foundation.h>

#import "EMAccountRepository.h"
#import "EMActivityRegistry.h"
#import "EMBlockedSenderManager.h"
#import "EMClientState.h"
#import "EMDiagnosticInfoGatherer.h"
#import "EMFetchController.h"
#import "EMInteractionLogger.h"
#import "EMMailboxRepository.h"
#import "EMMessageRepository.h"
#import "EMOutgoingMessageRepository.h"
#import "EMSearchableIndex.h"
#import "EMSenderRepository.h"

@interface EMDaemonInterface : NSObject <EFLoggable, EMRemoteProxyGenerator>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSHashTable *_connections;
    NSInteger _connectionState;
    id<EFCancelable> *_daemonLaunchToken;
    BOOL _allowsBackgroundResume;
    os_unfair_lock_s _lock;
    uint8_t _invalidated;
}


@property (readonly) EMAccountRepository *accountRepository; // ivar: _accountRepository
@property (readonly) EMActivityRegistry *activityRegistry; // ivar: _activityRegistry
@property BOOL allowsBackgroundResume;
@property (readonly) EMBlockedSenderManager *blockedSenderManager; // ivar: _blockedSenderManager
@property (readonly) EMClientState *clientState; // ivar: _clientState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) EMDiagnosticInfoGatherer *diagnosticInfoGatherer; // ivar: _diagnosticInfoGatherer
@property (readonly) EMDonationController *donationController; // ivar: _donationController
@property (readonly) EMFetchController *fetchController; // ivar: _fetchController
@property (readonly) NSUInteger hash;
@property (readonly) EMInteractionLogger *interactionLogger; // ivar: _interactionLogger
@property (readonly) EMMailboxRepository *mailboxRepository; // ivar: _mailboxRepository
@property (readonly) EMMessageRepository *messageRepository; // ivar: _messageRepository
@property (readonly) EMOutgoingMessageRepository *outgoingMessageRepository; // ivar: _outgoingMessageRepository
@property (readonly) NSObject<NSXPCProxyCreating> *proxyCreator;
@property (readonly) EMSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly) EMSenderRepository *senderRepository; // ivar: _senderRepository
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSXPCConnection *test_connection;
@property (readonly) NSObject<EMVIPManager> *vipManager; // ivar: _vipManager


+(BOOL)cachedMailAppIsInstalled;
+(id)_mailUninstalledFile;
+(id)log;
+(id)remoteObjectInterface;
+(void)setCachedMailAppIsInstalled:(BOOL)arg0 ;
-(id)_connectionForProtocol:(id)arg0 error:(*id)arg1 ;
-(id)_initByAdoptingConnection:(id)arg0 ;
-(id)connectionForProtocol:(id)arg0 ;
-(id)generateProxyForProtocol:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initForTesting;
-(id)initWithListenerEndpoint:(id)arg0 ;
-(void)_invalidate;
-(void)dealloc;
-(void)handleDaemonAvailability;
-(void)launchDaemon;
-(void)resetProtocolConnections;
-(void)test_tearDown;


@end


#endif