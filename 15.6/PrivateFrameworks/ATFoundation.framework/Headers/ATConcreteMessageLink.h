// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATCONCRETEMESSAGELINK_H
#define ATCONCRETEMESSAGELINK_H

@class ATMessageLink, NSMapTable, NSMutableDictionary, NSMutableSet, NSString, NSHashTable;
@protocol ATSocketDelegate, OS_dispatch_source, OS_dispatch_queue, OS_dispatch_group;


#import "ATMessageParser.h"
#import "ATSignatureProvider.h"
#import "ATSocket.h"

@interface ATConcreteMessageLink : ATMessageLink <ATSocketDelegate>

 {
    ATMessageParser *_parser;
    NSMapTable *_outputStreamsToInputStreams;
    NSMutableDictionary *_sentRequestsByID;
    NSMutableDictionary *_receivedRequestsByID;
    NSMutableDictionary *_receivedResponsesByID;
    NSMutableDictionary *_completionHandlersByRequestID;
    NSMutableDictionary *_completionHandlersByResponseID;
    NSMutableDictionary *_requestWritersByID;
    NSMutableDictionary *_responseWritersByID;
    NSMutableDictionary *_streamReadersByID;
    NSMutableSet *_requestWritersPendingStopByID;
    NSMutableSet *_responseWritersPendingStopByID;
    NSMutableSet *_requestReadersPendingStopByID;
    NSMutableDictionary *_requestHandlersByDataClass;
    NSObject<OS_dispatch_source> *_requestTimeoutTimer;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_handlerAccessQueue;
    NSObject<OS_dispatch_group> *_stopReadersAndWritersGroup;
    BOOL _open;
    NSInteger _idleTimeoutExceptionCount;
    NSInteger _keepAliveExceptionCount;
    unsigned int _nextMessageID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int endpointType; // ivar: _endpointType
@property (readonly, copy, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic, getter=isInitialized) BOOL initialized; // ivar: _initialized
@property (nonatomic) CGFloat lastActivityTime; // ivar: _lastActivityTime
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) ATSignatureProvider *signatureProvider; // ivar: _signatureProvider
@property (readonly, nonatomic) ATSocket *socket; // ivar: _socket
@property (readonly) Class superclass;


-(BOOL)_isWriterPendingStopForforMessage:(id)arg0 ;
-(BOOL)_sendMessage:(id)arg0 error:(*id)arg1 ;
-(BOOL)idleTimeoutEnabled;
-(BOOL)isOpen;
-(BOOL)open;
-(id)_getObservers;
-(id)initWithSocket:(id)arg0 ;
-(unsigned int)_nextRequestID;
-(void)_checkMessageTimeouts;
-(void)_invokeCompletionHandlerForResponseID:(NSUInteger)arg0 withError:(id)arg1 ;
-(void)_prepareStreamReaderForMessage:(id)arg0 withProgress:(id)arg1 ;
-(void)_processIncomingDataRequest:(id)arg0 ;
-(void)_processIncomingDataResponse:(id)arg0 ;
-(void)_processIncomingMessage:(id)arg0 ;
-(void)_processIncomingPartialResponse:(id)arg0 ;
-(void)_processIncomingRequest:(id)arg0 ;
-(void)_processIncomingResponse:(id)arg0 ;
-(void)_stopWriter:(id)arg0 byInjectingStreamError:(struct ? *)arg1 forMessageId:(unsigned int)arg2 type:(int)arg3 ;
-(void)addKeepAliveException;
-(void)addObserver:(id)arg0 ;
-(void)addRequestHandler:(id)arg0 forDataClass:(id)arg1 ;
-(void)addTimeoutException;
-(void)close;
-(void)dealloc;
-(void)removeKeepAliveException;
-(void)removeObserver:(id)arg0 ;
-(void)removeRequestHandlerForDataClass:(id)arg0 ;
-(void)removeTimeoutException;
-(void)sendPartialResponse:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendRequest:(id)arg0 withCompletion:(id)arg1 ;
-(void)sendResponse:(id)arg0 withCompletion:(id)arg1 ;
// -(void)sendResponse:(id)arg0 withProgress:(id)arg1 completion:(unk)arg2  ;
-(void)socket:(id)arg0 hasDataAvailable:(char *)arg1 length:(NSInteger)arg2 ;
-(void)socketDidClose:(id)arg0 ;


@end


#endif