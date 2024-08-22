// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DT_GCDASYNCSOCKET_H
#define _DT_GCDASYNCSOCKET_H

@class NSData, NSMutableArray, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "_DT_GCDAsyncReadPacket.h"
#import "_DT_GCDAsyncWritePacket.h"
#import "_DT_GCDAsyncSocketPreBuffer.h"

@interface _DT_GCDAsyncSocket : NSObject {
    unsigned int flags;
    unsigned short config;
    id *delegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    int socket4FD;
    int socket6FD;
    int stateIndex;
    NSData *connectInterface4;
    NSData *connectInterface6;
    NSObject<OS_dispatch_queue> *socketQueue;
    NSObject<OS_dispatch_source> *accept4Source;
    NSObject<OS_dispatch_source> *accept6Source;
    NSObject<OS_dispatch_source> *connectTimer;
    NSObject<OS_dispatch_source> *readSource;
    NSObject<OS_dispatch_source> *writeSource;
    NSObject<OS_dispatch_source> *readTimer;
    NSObject<OS_dispatch_source> *writeTimer;
    NSMutableArray *readQueue;
    NSMutableArray *writeQueue;
    _DT_GCDAsyncReadPacket *currentRead;
    _DT_GCDAsyncWritePacket *currentWrite;
    NSUInteger socketFDBytesAvailable;
    _DT_GCDAsyncSocketPreBuffer *preBuffer;
    ? streamContext;
    *__CFReadStream readStream;
    *__CFWriteStream writeStream;
    *SSLContext sslContext;
    _DT_GCDAsyncSocketPreBuffer *sslPreBuffer;
    NSUInteger sslWriteCachedLength;
    int sslErrCode;
    *void IsOnSocketQueueOrTargetQueueKey;
    id *userData;
}


@property (getter=isIPv4Enabled) BOOL IPv4Enabled;
@property (getter=isIPv4PreferredOverIPv6) BOOL IPv4PreferredOverIPv6;
@property (getter=isIPv6Enabled) BOOL IPv6Enabled;
@property BOOL autoDisconnectOnClosedReadStream;
@property (readonly) NSData *connectedAddress;
@property (readonly) NSString *connectedHost;
@property (readonly) unsigned short connectedPort;
@property (weak) id *delegate;
@property (retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) BOOL isConnected;
@property (readonly) BOOL isDisconnected;
@property (readonly) BOOL isIPv4;
@property (readonly) BOOL isIPv6;
@property (readonly) BOOL isSecure;
@property (readonly) NSData *localAddress;
@property (readonly) NSString *localHost;
@property (readonly) unsigned short localPort;
@property (retain) id *userData;


+(BOOL)getHost:(*id)arg0 port:(*unsigned short)arg1 family:(char *)arg2 fromAddress:(id)arg3 ;
+(BOOL)getHost:(*id)arg0 port:(*unsigned short)arg1 fromAddress:(id)arg2 ;
+(BOOL)isIPv4Address:(id)arg0 ;
+(BOOL)isIPv6Address:(id)arg0 ;
+(id)CRData;
+(id)CRLFData;
+(id)LFData;
+(id)ZeroData;
+(id)gaiError:(int)arg0 ;
+(id)hostFromAddress:(id)arg0 ;
+(id)hostFromSockaddr4:(struct sockaddr_in *)arg0 ;
+(id)hostFromSockaddr6:(struct sockaddr_in6 *)arg0 ;
+(id)lookupHost:(id)arg0 port:(unsigned short)arg1 error:(*id)arg2 ;
+(unsigned short)portFromAddress:(id)arg0 ;
+(unsigned short)portFromSockaddr4:(struct sockaddr_in *)arg0 ;
+(unsigned short)portFromSockaddr6:(struct sockaddr_in6 *)arg0 ;
+(void)cfstreamThread;
+(void)ignore:(id)arg0 ;
+(void)scheduleCFStreams:(id)arg0 ;
+(void)startCFStreamThreadIfNeeded;
+(void)stopCFStreamThreadIfNeeded;
+(void)unscheduleCFStreams:(id)arg0 ;
-(BOOL)acceptOnInterface:(id)arg0 port:(unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)acceptOnPort:(unsigned short)arg0 error:(*id)arg1 ;
-(BOOL)addStreamsToRunLoop;
-(BOOL)connectToAddress:(id)arg0 error:(*id)arg1 ;
-(BOOL)connectToAddress:(id)arg0 viaInterface:(id)arg1 withTimeout:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)connectToAddress:(id)arg0 withTimeout:(CGFloat)arg1 error:(*id)arg2 ;
-(BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 viaInterface:(id)arg2 withTimeout:(CGFloat)arg3 error:(*id)arg4 ;
-(BOOL)connectToHost:(id)arg0 onPort:(unsigned short)arg1 withTimeout:(CGFloat)arg2 error:(*id)arg3 ;
-(BOOL)connectWithAddress4:(id)arg0 address6:(id)arg1 error:(*id)arg2 ;
-(BOOL)createReadAndWriteStream;
-(BOOL)doAccept:(int)arg0 ;
-(BOOL)openStreams;
-(BOOL)preConnectWithInterface:(id)arg0 error:(*id)arg1 ;
-(BOOL)registerForStreamCallbacksIncludingReadWrite:(BOOL)arg0 ;
-(BOOL)usingCFStreamForTLS;
-(BOOL)usingSecureTransportForTLS;
-(float)progressOfReadReturningTag:(*NSInteger)arg0 bytesDone:(*NSUInteger)arg1 total:(*NSUInteger)arg2 ;
-(float)progressOfWriteReturningTag:(*NSInteger)arg0 bytesDone:(*NSUInteger)arg1 total:(*NSUInteger)arg2 ;
-(id)badConfigError:(id)arg0 ;
-(id)badParamError:(id)arg0 ;
-(id)connectTimeoutError;
-(id)connectedHostFromSocket4:(int)arg0 ;
-(id)connectedHostFromSocket6:(int)arg0 ;
-(id)connectionClosedError;
-(id)errnoError;
-(id)errnoErrorWithReason:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(id)initWithDelegate:(id)arg0 delegateQueue:(id)arg1 socketQueue:(id)arg2 ;
-(id)initWithSocketQueue:(id)arg0 ;
-(id)localHostFromSocket4:(int)arg0 ;
-(id)localHostFromSocket6:(int)arg0 ;
-(id)otherError:(id)arg0 ;
-(id)readMaxedOutError;
-(id)readTimeoutError;
-(id)sslError:(int)arg0 ;
-(id)writeTimeoutError;
-(int)socket4FD;
-(int)socket6FD;
-(int)socketFD;
-(int)sslReadWithBuffer:(*void)arg0 length:(*NSUInteger)arg1 ;
-(int)sslWriteWithBuffer:(*void)arg0 length:(*NSUInteger)arg1 ;
-(struct SSLContext *)sslContext;
-(struct __CFReadStream *)readStream;
-(struct __CFWriteStream *)writeStream;
-(unsigned short)connectedPortFromSocket4:(int)arg0 ;
-(unsigned short)connectedPortFromSocket6:(int)arg0 ;
-(unsigned short)localPortFromSocket4:(int)arg0 ;
-(unsigned short)localPortFromSocket6:(int)arg0 ;
-(void)cf_abortSSLHandshake:(id)arg0 ;
-(void)cf_finishSSLHandshake;
-(void)cf_startTLS;
-(void)closeWithError:(id)arg0 ;
-(void)completeCurrentRead;
-(void)completeCurrentWrite;
-(void)dealloc;
-(void)didConnect:(int)arg0 ;
-(void)didNotConnect:(int)arg0 error:(id)arg1 ;
-(void)disconnect;
-(void)disconnectAfterReading;
-(void)disconnectAfterReadingAndWriting;
-(void)disconnectAfterWriting;
-(void)doConnectTimeout;
-(void)doReadData;
-(void)doReadEOF;
-(void)doReadTimeout;
-(void)doReadTimeoutWithExtension:(CGFloat)arg0 ;
-(void)doWriteData;
-(void)doWriteTimeout;
-(void)doWriteTimeoutWithExtension:(CGFloat)arg0 ;
-(void)endConnectTimeout;
-(void)endCurrentRead;
-(void)endCurrentWrite;
-(void)flushSSLBuffers;
-(void)getDelegate:(*id)arg0 delegateQueue:(*id)arg1 ;
-(void)getInterfaceAddress4:(*id)arg0 address6:(*id)arg1 fromDescription:(id)arg2 port:(unsigned short)arg3 ;
-(void)lookup:(int)arg0 didFail:(id)arg1 ;
-(void)lookup:(int)arg0 didSucceedWithAddress4:(id)arg1 address6:(id)arg2 ;
-(void)markSocketQueueTargetQueue:(id)arg0 ;
-(void)maybeClose;
-(void)maybeDequeueRead;
-(void)maybeDequeueWrite;
-(void)maybeStartTLS;
-(void)performBlock:(id)arg0 ;
-(void)readDataToData:(id)arg0 withTimeout:(CGFloat)arg1 buffer:(id)arg2 bufferOffset:(NSUInteger)arg3 maxLength:(NSUInteger)arg4 tag:(NSInteger)arg5 ;
-(void)readDataToData:(id)arg0 withTimeout:(CGFloat)arg1 buffer:(id)arg2 bufferOffset:(NSUInteger)arg3 tag:(NSInteger)arg4 ;
-(void)readDataToData:(id)arg0 withTimeout:(CGFloat)arg1 maxLength:(NSUInteger)arg2 tag:(NSInteger)arg3 ;
-(void)readDataToData:(id)arg0 withTimeout:(CGFloat)arg1 tag:(NSInteger)arg2 ;
-(void)readDataToLength:(NSUInteger)arg0 withTimeout:(CGFloat)arg1 buffer:(id)arg2 bufferOffset:(NSUInteger)arg3 tag:(NSInteger)arg4 ;
-(void)readDataToLength:(NSUInteger)arg0 withTimeout:(CGFloat)arg1 tag:(NSInteger)arg2 ;
-(void)readDataWithTimeout:(CGFloat)arg0 buffer:(id)arg1 bufferOffset:(NSUInteger)arg2 maxLength:(NSUInteger)arg3 tag:(NSInteger)arg4 ;
-(void)readDataWithTimeout:(CGFloat)arg0 buffer:(id)arg1 bufferOffset:(NSUInteger)arg2 tag:(NSInteger)arg3 ;
-(void)readDataWithTimeout:(CGFloat)arg0 tag:(NSInteger)arg1 ;
-(void)removeStreamsFromRunLoop;
-(void)resumeReadSource;
-(void)resumeWriteSource;
-(void)setupReadAndWriteSourcesForNewlyConnectedSocket:(int)arg0 ;
-(void)setupReadTimerWithTimeout:(CGFloat)arg0 ;
-(void)setupWriteTimerWithTimeout:(CGFloat)arg0 ;
-(void)ssl_continueSSLHandshake;
-(void)ssl_shouldTrustPeer:(BOOL)arg0 stateIndex:(int)arg1 ;
-(void)ssl_startTLS;
-(void)startConnectTimeout:(CGFloat)arg0 ;
-(void)startTLS:(id)arg0 ;
-(void)suspendReadSource;
-(void)suspendWriteSource;
-(void)synchronouslySetDelegate:(id)arg0 ;
-(void)synchronouslySetDelegate:(id)arg0 delegateQueue:(id)arg1 ;
-(void)synchronouslySetDelegateQueue:(id)arg0 ;
-(void)unmarkSocketQueueTargetQueue:(id)arg0 ;
-(void)writeData:(id)arg0 withTimeout:(CGFloat)arg1 tag:(NSInteger)arg2 ;


@end


#endif