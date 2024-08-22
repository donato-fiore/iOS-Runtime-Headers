// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXIPCCLIENT_H
#define AXIPCCLIENT_H

@class NSLock, NSMutableArray, NSString, AXAccessQueue;

#import <Foundation/Foundation.h>


@interface AXIPCClient : NSObject {
    NSLock *_serverPortLock;
    unsigned int _assignedServerMachPort;
    os_unfair_lock_s _clientIdentifierLock;
    *__CFRunLoopSource _clientSource;
    NSUInteger _connectionAttempts;
    NSMutableArray *_outstandingAsyncRequests;
}


@property (readonly, nonatomic) unsigned int clientCallbackPort; // ivar: clientCallbackPort
@property (readonly, nonatomic) *__CFRunLoopSource clientCallbackSource; // ivar: clientCallbackSource
@property (copy, nonatomic) NSString *clientIdentifier; // ivar: _clientIdentifier
@property (nonatomic, getter=isConnected) BOOL connected; // ivar: _connected
@property (retain, nonatomic) AXAccessQueue *connectionQueue; // ivar: _connectionQueue
@property (nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) AXAccessQueue *portDeathAccessQueue; // ivar: _portDeathAccessQueue
@property (copy, nonatomic) id *portDeathHandler; // ivar: _portDeathHandler
@property (retain, nonatomic) NSMutableArray *postConnectionTasks; // ivar: _postConnectionTasks
@property (nonatomic) *__CFMachPort serverPort; // ivar: _serverPort
@property (readonly, nonatomic) unsigned int serviceMachPort;
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (nonatomic) BOOL shouldRegisterCallbackSourceOnMainRunloop; // ivar: shouldRegisterCallbackSourceOnMainRunloop
@property (nonatomic) float timeout; // ivar: _timeout
@property (nonatomic) BOOL usesPerPidLookup; // ivar: _usesPerPidLookup


+(id)allClients;
+(void)initialize;
-(BOOL)_handleErrorWithMessage:(id)arg0 machError:(int)arg1 outError:(*id)arg2 ;
-(BOOL)_handleErrorWithMessage:(id)arg0 outError:(*id)arg1 ;
-(BOOL)_prepareToSendMessage:(id)arg0 withError:(*id)arg1 prepSuccessHandler:(id)arg2 ;
-(BOOL)_verifyConnectionWithError:(*id)arg0 ;
-(BOOL)connectWithError:(*id)arg0 ;
-(BOOL)disconnectWithError:(*id)arg0 ;
-(BOOL)sendAsyncMessage:(id)arg0 replyOnQueue:(id)arg1 replyHandler:(id)arg2 ;
-(BOOL)sendAsyncMessage:(id)arg0 withReplyHandler:(id)arg1 ;
-(BOOL)sendSimpleMessage:(id)arg0 synchronizationPort:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)sendSimpleMessage:(id)arg0 withError:(*id)arg1 ;
-(BOOL)verifyConnectionExists;
-(id)_createRegistrationWithReplyMachPort:(unsigned int)arg0 forAsyncReplyOnQueue:(id)arg1 responseHandler:(id)arg2 ;
-(id)_descriptionForMachError:(int)arg0 ;
-(id)description;
-(id)initWithPort:(unsigned int)arg0 ;
-(id)initWithServiceName:(id)arg0 ;
-(id)sendMessage:(id)arg0 withError:(*id)arg1 ;
-(void)_attemptToEstablishConnection;
-(void)_commonInit;
-(void)_registerWithServer;
-(void)_sendRegistrationMessageWithRetries:(int)arg0 ;
-(void)_serverDied;
-(void)dealloc;
-(void)establishConnectionWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)sendSimpleMessage:(id)arg0 ;


@end


#endif