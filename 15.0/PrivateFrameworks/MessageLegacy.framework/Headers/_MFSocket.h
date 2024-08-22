// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFSOCKET_H
#define _MFSOCKET_H

@class NSCondition, NSString, NSInvocation, NSArray, NSData;

#import <Foundation/Foundation.h>

#import "MFStream.h"

@interface _MFSocket : NSObject {
    NSCondition *_condition;
    NSString *_protocol;
    NSString *_host;
    NSString *_service;
    *__CFString _connectionServiceType;
    NSInvocation *_eventHandler;
    int _lowThroughputCounter;
    BOOL _socketCanRead;
    BOOL _socketCanWrite;
}


@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) BOOL allowsTrustPrompt; // ivar: _allowsTrustPrompt
@property (retain, nonatomic) NSArray *clientCertificates; // ivar: _clientCertificates
@property (nonatomic) BOOL disableEphemeralDiffieHellmanCiphers; // ivar: _disableEphemeralDiffieHellmanCiphers
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isWritable;
@property (copy, nonatomic) NSString *networkAccountIdentifier; // ivar: _networkAccountIdentifier
@property (readonly, nonatomic) NSString *remoteHostname;
@property (readonly, nonatomic) unsigned int remotePortNumber;
@property (readonly, nonatomic) NSArray *serverCertificates;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // ivar: _sourceApplicationBundleIdentifier
@property (readonly, nonatomic) NSData *sourceIPAddress;
@property (retain) MFStream *stream; // ivar: _stream
@property (nonatomic) int timeout; // ivar: _numTimeoutSecs
@property (nonatomic) BOOL usesOpportunisticSockets; // ivar: _usesOpportunisticSockets


-(BOOL)_certificateIsTrustedForAccount:(id)arg0 ;
-(BOOL)_evaluateTrust:(struct __SecTrust *)arg0 errorPtr:(*id)arg1 ;
-(BOOL)_startSSLHandshakeWithProtocol:(id)arg0 errorPtr:(*id)arg1 ;
-(BOOL)_waitForSocketOpenAndFlag:(*BOOL)arg0 ;
-(BOOL)connectToHost:(id)arg0 withPort:(unsigned int)arg1 service:(id)arg2 ;
-(BOOL)setSecurityProtocol:(id)arg0 ;
-(NSInteger)readBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(NSInteger)writeBytes:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)_negotiatedProtocolVersion;
-(id)init;
-(id)securityProtocol;
-(unsigned int)_bufferedByteCount;
-(void)_setCertificateIsTrusted:(BOOL)arg0 forAccount:(id)arg1 ;
-(void)abort;
-(void)dealloc;
-(void)enableThroughputMonitoring:(BOOL)arg0 ;
-(void)setConnectionServiceType:(struct __CFString *)arg0 ;
-(void)setEventHandler:(id)arg0 ;


@end


#endif