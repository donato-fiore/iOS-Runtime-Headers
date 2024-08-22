// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECNWCONNECTIONWRAPPER_H
#define ECNWCONNECTIONWRAPPER_H

@class NSConditionLock, NSData, NSString, NSArray, NSError;
@protocol ECNWConnectionWrapper, OS_dispatch_queue, OS_nw_connection, OS_dispatch_semaphore, OS_nw_endpoint, OS_dispatch_group, OS_nw_error;

#import <Foundation/Foundation.h>


@interface ECNWConnectionWrapper : NSObject <ECNWConnectionWrapper>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_connection> *_connection;
    int _connectionState;
    NSObject<OS_dispatch_semaphore> *_eventSemaphore;
    os_unfair_lock_s _lock;
    NSObject<OS_nw_endpoint> *_endpoint;
    NSConditionLock *_readBufferLock;
    NSObject<OS_dispatch_group> *_writeGroup;
    BOOL _readScheduled;
    NSObject<OS_nw_error> *_readError;
    NSData *_buffer;
    NSUInteger _bufferOffset;
    NSString *_securityProtocol;
    BOOL _readable;
    BOOL _writable;
    CGFloat _connectTime;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL allowsTrustPrompt; // ivar: _allowsTrustPrompt
@property (copy) id *bytesAvailableHandler; // ivar: _bytesAvailableHandler
@property (retain, nonatomic) NSArray *clientCertificates; // ivar: _clientCertificates
@property (copy, nonatomic) NSString *connectionServiceType; // ivar: _connectionServiceType
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers; // ivar: _disableEphemeralDiffieHellmanCiphers
@property (retain) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isConstrained;
@property (nonatomic) BOOL isNonAppInitiated; // ivar: _isNonAppInitiated
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isWritable;
@property (copy, nonatomic) NSString *networkAccountIdentifier; // ivar: _networkAccountIdentifier
@property (copy, nonatomic) id *networkActivityChangeBlock; // ivar: _networkActivityChangeBlock
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, copy, nonatomic) NSArray *serverCertificates; // ivar: _serverCertificates
@property (copy, nonatomic) id *serverTrustHandler; // ivar: _serverTrustHandler
@property (readonly, copy, nonatomic) NSString *service; // ivar: _service
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (readonly) Class superclass;
@property (nonatomic) unsigned int timeout; // ivar: _timeout
@property (nonatomic) BOOL usesOpportunisticSockets; // ivar: _usesOpportunisticSockets


+(id)log;
-(BOOL)_connectToEndpoint:(id)arg0 service:(id)arg1 ;
-(BOOL)connectToHost:(id)arg0 withPort:(unsigned int)arg1 service:(id)arg2 ;
-(BOOL)setSecurityProtocol:(id)arg0 ;
-(BOOL)test_connectToUNIXSocket:(id)arg0 service:(id)arg1 ;
-(NSInteger)readBytesIntoBuffer:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(NSInteger)writeBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)_createConnectionWithEndpoint:(id)arg0 error:(*int)arg1 ;
-(id)_negotiatedSecurityProtocol;
-(id)init;
-(id)securityProtocol;
-(void)_closeWithError:(id)arg0 ;
-(void)_closeWithErrorDomain:(id)arg0 code:(NSInteger)arg1 ;
-(void)_configureTLS:(id)arg0 ;
-(void)_handleConnectionFailure:(int)arg0 ;
-(void)_handleConnectionReady;
-(void)_networkActivityEnded;
-(void)_networkActivityStarted;
-(void)_scheduleNextRead;
-(void)cancel;
-(void)close;
-(void)dealloc;
-(void)enableThroughputMonitoring:(BOOL)arg0 ;
-(void)registerForBytesAvailableWithHandler:(id)arg0 ;
-(void)startActivity;
-(void)stopActivity;
-(void)unregisterForBytesAvailable;


@end


#endif