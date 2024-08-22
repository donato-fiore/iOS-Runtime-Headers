// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATREMOTECONNECTION_H
#define CATREMOTECONNECTION_H

@class NSMutableArray, NSError, NSMutableData, NSArray, NSString, NSInputStream, NSOutputStream;
@protocol CATHTTPMessageParserDelegate, NSStreamDelegate, OS_dispatch_source, CATRemoteConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CATHTTPMessageParser.h"
#import "CATSerialOperationQueue.h"
#import "CATRemoteConnectionSocketOptions.h"

@interface CATRemoteConnection : NSObject <CATHTTPMessageParserDelegate, NSStreamDelegate>

 {
    CATHTTPMessageParser *mMessageParser;
    NSInteger mState;
    NSMutableArray *mPendingSendContexts;
    NSObject<OS_dispatch_source> *mConnectionTimeoutTimer;
    NSError *mInterruptionError;
    NSMutableData *mReadBuffer;
    NSArray *mTrustedCertificates;
    NSInteger mPeerTrustState;
    CATSerialOperationQueue *mStreamEventQueue;
}


@property (nonatomic) NSUInteger bufferSize; // ivar: _bufferSize
@property (nonatomic) CGFloat connectionTimeoutInterval; // ivar: _connectionTimeoutInterval
@property (copy, nonatomic) NSArray *customTrustEvaluationPolicies; // ivar: _customTrustEvaluationPolicies
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CATRemoteConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly, nonatomic) *__SecTrust peerTrust;
@property (copy, nonatomic) CATRemoteConnectionSocketOptions *socketOptions; // ivar: _socketOptions
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesSSL; // ivar: _usesSSL


+(void)createConnectionPairWithConnection:(*id)arg0 andConnection:(*id)arg1 ;
+(void)createConnectionPairWithConnection:(*id)arg0 andConnection:(*id)arg1 bufferSize:(NSUInteger)arg2 ;
-(BOOL)secureUsingIdentity:(struct __SecIdentity *)arg0 trustedCertificates:(id)arg1 isServer:(BOOL)arg2 ;
-(BOOL)trySendingDataWithContext:(id)arg0 error:(*id)arg1 ;
-(id)initWithInputStream:(id)arg0 outputStream:(id)arg1 ;
-(id)initWithInputStream:(id)arg0 outputStream:(id)arg1 bufferSize:(NSUInteger)arg2 ;
-(id)initWithNetService:(id)arg0 ;
-(int)applyCustomEvaluationPoliciesToTrust:(struct __SecTrust *)arg0 ;
-(void)_stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)close;
-(void)configureStreamSocketOptions;
-(void)connectionDidInterruptWithError:(id)arg0 ;
-(void)connectionDidReceiveData;
-(void)connectionShouldSendData;
-(void)connectionTimedOut;
-(void)dealloc;
-(void)delegateDidFailToSendData:(id)arg0 userInfo:(id)arg1 error:(id)arg2 ;
-(void)delegateDidFailToSendDataWithStream:(id)arg0 userInfo:(id)arg1 error:(id)arg2 ;
-(void)delegateDidInterruptWithError:(id)arg0 ;
-(void)delegateDidReceiveData:(id)arg0 ;
-(void)delegateDidReceiveDataRequestWithURL:(id)arg0 ;
-(void)delegateDidReceiveStreamData:(id)arg0 moreComing:(BOOL)arg1 ;
-(void)delegateDidSendData:(id)arg0 userInfo:(id)arg1 ;
-(void)delegateDidSendDataWithStream:(id)arg0 userInfo:(id)arg1 ;
-(void)delegateDidWriteDataForContextIfNeeded:(id)arg0 ;
-(void)delegateDidWriteDataFromStream:(id)arg0 totalBytesWritten:(NSUInteger)arg1 totalBytesExpectedToWrite:(NSUInteger)arg2 userInfo:(id)arg3 ;
-(void)enqueueSendContext:(id)arg0 ;
-(void)messageParser:(id)arg0 didParseRequestData:(id)arg1 ;
-(void)messageParser:(id)arg0 didParseRequestWithURL:(id)arg1 ;
-(void)messageParser:(id)arg0 didParseResponseData:(id)arg1 moreComing:(BOOL)arg2 ;
-(void)open;
-(void)scheduleStreams;
-(void)secureUsingClientIdentity:(struct __SecIdentity *)arg0 trustedCertificates:(id)arg1 ;
-(void)secureUsingServerIdentity:(struct __SecIdentity *)arg0 trustedCertificates:(id)arg1 ;
-(void)sendData:(id)arg0 userInfo:(id)arg1 ;
-(void)sendDataWithStream:(id)arg0 length:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)sendDidFail:(id)arg0 withError:(id)arg1 ;
-(void)sendDidSucceed:(id)arg0 ;
-(void)stream:(id)arg0 handleEvent:(NSUInteger)arg1 ;
-(void)trustDecisionDidRespondWithDecisionToAllowUntrustedConnection:(BOOL)arg0 ;
-(void)tryEvaluatingPeerTrustWithStream:(id)arg0 ;
-(void)unscheduleStreams;


@end


#endif