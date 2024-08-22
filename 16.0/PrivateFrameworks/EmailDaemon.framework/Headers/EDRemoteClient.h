// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDREMOTECLIENT_H
#define EDREMOTECLIENT_H

@class NSXPCConnection, NSString;
@protocol EFLoggable, EMDaemonInterfaceXPC, EDReconciliationQueryProvider, EDServerRemoteClientsProvider, EMVIPManagerInterface;

#import <Foundation/Foundation.h>

#import "EDAccountRepository.h"
#import "EDActivityRegistry.h"
#import "EDClientResumer.h"
#import "EDClientState.h"
#import "EDDaemonInterfaceFactory.h"
#import "EDDiagnosticInfoGatherer.h"
#import "EDFetchController.h"
#import "EDInteractionLogger.h"
#import "EDMailboxRepository.h"
#import "EDMessageRepository.h"
#import "EDOutgoingMessageRepository.h"
#import "EDSearchableIndex.h"
#import "EDSenderRepository.h"

@interface EDRemoteClient : NSObject <EFLoggable, EMDaemonInterfaceXPC, EDReconciliationQueryProvider>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, nonatomic) EDAccountRepository *accountRepository; // ivar: _accountRepository
@property (readonly, nonatomic) EDActivityRegistry *activityRegistry; // ivar: _activityRegistry
@property (readonly, nonatomic) NSXPCConnection *clientConnection; // ivar: _clientConnection
@property (readonly, nonatomic) EDClientResumer *clientResumer; // ivar: _clientResumer
@property (readonly, nonatomic) EDClientState *clientState; // ivar: _clientState
@property (readonly, nonatomic) EDDaemonInterfaceFactory *daemonInterfaceFactory; // ivar: _daemonInterfaceFactory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) EDDiagnosticInfoGatherer *diagnosticInfoGatherer; // ivar: _diagnosticInfoGatherer
@property (readonly, nonatomic) EDFetchController *fetchController; // ivar: _fetchController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) EDInteractionLogger *interactionLogger; // ivar: _interactionLogger
@property (readonly, nonatomic) EDMailboxRepository *mailboxRepository; // ivar: _mailboxRepository
@property (readonly, nonatomic) EDMessageRepository *messageRepository; // ivar: _messageRepository
@property (readonly, nonatomic) EDOutgoingMessageRepository *outgoingMessageRepository; // ivar: _outgoingMessageRepository
@property (readonly, nonatomic) EDSearchableIndex *searchableIndex; // ivar: _searchableIndex
@property (readonly, nonatomic) EDSenderRepository *senderRepository; // ivar: _senderRepository
@property (readonly, weak, nonatomic) NSObject<EDServerRemoteClientsProvider> *serverRemoteClientsProvider; // ivar: _serverRemoteClientsProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<EMVIPManagerInterface> *vipManagerInterface; // ivar: _vipManagerInterface


+(id)exportedInterface;
+(id)log;
-(id)initWithConnection:(id)arg0 daemonInterfaceFactory:(id)arg1 serverRemoteClientsProvider:(id)arg2 ;
-(id)messageReconciliationQueries;
-(id)threadReconciliationQueries;
-(void)dealloc;
-(void)getAccountRepositoryInterface:(id)arg0 ;
-(void)getActivityRegistryInterface:(id)arg0 ;
-(void)getClientStateInterface:(id)arg0 ;
-(void)getDiagnosticInfoGathererInterface:(id)arg0 ;
-(void)getFetchControllerInterface:(id)arg0 ;
-(void)getInteractionLoggerInterface:(id)arg0 ;
-(void)getMailboxRepositoryInterface:(id)arg0 ;
-(void)getMessageRepositoryInterface:(id)arg0 ;
-(void)getOutgoingMessageRepositoryInterface:(id)arg0 ;
-(void)getSearchableIndexInterface:(id)arg0 ;
-(void)getSenderRepositoryInterface:(id)arg0 ;
-(void)getVIPManagerInterface:(id)arg0 ;
-(void)launchForEarlyRecovery:(id)arg0 ;
-(void)setAllowsBackgroundResume:(BOOL)arg0 ;
-(void)test_tearDown;


@end


#endif