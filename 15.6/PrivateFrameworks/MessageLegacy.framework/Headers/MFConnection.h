// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCONNECTION_H
#define MFCONNECTION_H

@class NSArray, NSString;
@protocol MFDiagnosticsGenerator, MFSASLSecurityLayer;

#import <Foundation/Foundation.h>

#import "MFConnectionSettings.h"
#import "_MFSocket.h"

@interface MFConnection : NSObject <MFDiagnosticsGenerator>

 {
    id<MFSASLSecurityLayer> *_securityLayer;
    MFConnectionSettings *_connectionSettings;
    _MFSocket *_socket;
    CGFloat _lastUsedTime;
    char * _buffer;
    NSInteger _bufferRemainingBytes;
    NSUInteger _bufferStart;
    NSUInteger _bufferLength;
    NSUInteger _desiredBufferLength;
    *z_stream_s _deflater;
    *z_stream_s _inflater;
    char * _zbuffer;
    unsigned int _readBytesNotLogged;
    BOOL _isFetching;
    BOOL _allowFallbacks;
    BOOL _compressionEnabled;
}


@property (readonly, nonatomic) NSArray *authenticationMechanisms;
@property (readonly, nonatomic) NSArray *capabilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasBytesAvailable;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCellularConnection;
@property (nonatomic) BOOL isFetching;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) CGFloat lastUsedTime;
@property (readonly, nonatomic) BOOL loginDisabled;
@property (readonly, nonatomic) NSString *securityProtocol;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usesOpportunisticSockets;


+(BOOL)logAllSocketActivity;
+(BOOL)shouldTryFallbacksAfterError:(id)arg0 ;
+(id)logActivityOnHosts;
+(id)logActivityOnPorts;
+(id)logClasses;
+(void)flushLog;
+(void)initialize;
+(void)logConnection:(id)arg0 type:(NSInteger)arg1 data:(id)arg2 ;
+(void)readLoggingDefaults;
+(void)setLogActivityOnHosts:(id)arg0 ;
+(void)setLogActivityOnPorts:(id)arg0 ;
+(void)setLogAllSocketActivity:(BOOL)arg0 ;
+(void)setLogClasses:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 ;
-(BOOL)authenticateUsingAccount:(id)arg0 authenticator:(id)arg1 ;
-(BOOL)connectUsingAccount:(id)arg0 ;
-(BOOL)connectUsingFallbacksForAccount:(id)arg0 ;
-(BOOL)connectUsingSettings:(id)arg0 ;
-(BOOL)readBytesIntoData:(id)arg0 desiredLength:(NSUInteger)arg1 ;
-(BOOL)readLineIntoData:(id)arg0 ;
-(BOOL)startCompression;
-(BOOL)startTLSForAccount:(id)arg0 ;
-(BOOL)writeBytes:(char *)arg0 length:(NSUInteger)arg1 dontLogBytesInRange:(struct _NSRange )arg2 ;
-(BOOL)writeData:(id)arg0 ;
-(BOOL)writeData:(id)arg0 dontLogBytesInRange:(struct _NSRange )arg1 ;
-(id)connectionSettings;
-(id)copyDiagnosticInformation;
-(id)init;
-(void)_setupSocketWithSettings:(id)arg0 ;
-(void)dealloc;
-(void)disconnect;
-(void)enableThroughputMonitoring:(BOOL)arg0 ;
-(void)endCompression;
-(void)logReadChars:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)setAllowsFallbacks:(BOOL)arg0 ;
-(void)setConnectionSettings:(id)arg0 ;
-(void)setDesiredReadBufferLength:(NSUInteger)arg0 ;


@end


#endif