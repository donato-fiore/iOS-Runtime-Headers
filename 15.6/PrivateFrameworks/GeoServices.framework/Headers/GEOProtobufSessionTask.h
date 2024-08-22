// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOPROTOBUFSESSIONTASK_H
#define GEOPROTOBUFSESSIONTASK_H

@class NSString, NSError, PBCodable;
@protocol GEODataSessionTaskDelegate, GEODataSessionTask, GEOProtobufSessionTaskDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GEOApplicationAuditToken.h"
#import "GEODataRequestThrottlerToken.h"
#import "GEOClientMetrics.h"
#import "GEOProtobufSession.h"

@interface GEOProtobufSessionTask : NSObject <GEODataSessionTaskDelegate>

 {
    ? _requestKind;
    GEOApplicationAuditToken *_auditToken;
    GEODataRequestThrottlerToken *_throttleToken;
}


@property (readonly, nonatomic) GEOClientMetrics *clientMetrics;
@property (readonly, nonatomic) BOOL completedAsCancelled;
@property (nonatomic) BOOL completedAsCancelled; // ivar: _completedAsCancelled
@property (retain, nonatomic) NSObject<GEODataSessionTask> *dataTask; // ivar: _dataTask
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<GEOProtobufSessionTaskDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger incomingPayloadSize;
@property (readonly, nonatomic) BOOL mptcpNegotiated;
@property (readonly, nonatomic) NSUInteger outgoingPayloadSize;
@property (readonly, nonatomic) BOOL receivedRNFNotification;
@property (readonly, nonatomic) NSString *remoteAddressAndPort;
@property (readonly, nonatomic) ? requestKind;
@property (readonly, nonatomic) unsigned int requestTypeCode; // ivar: _requestTypeCode
@property (readonly, nonatomic) NSUInteger requestedMultipathServiceType;
@property (readonly, nonatomic) PBCodable *response;
@property (retain, nonatomic) PBCodable *response; // ivar: _response
@property (readonly, nonatomic) Class responseClass; // ivar: _responseClass
@property (weak, nonatomic) GEOProtobufSession *session; // ivar: _session
@property (readonly) Class superclass;


-(BOOL)parsePreambleWithReader:(id)arg0 ;
-(BOOL)parseProtocolVersionWithReader:(id)arg0 ;
-(BOOL)parseResponseTypeWithReader:(id)arg0 ;
-(id)init;
-(id)initWithSession:(id)arg0 requestTypeCode:(unsigned int)arg1 responseClass:(Class)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 requestKind:(struct ? )arg5 auditToken:(id)arg6 throttleToken:(id)arg7 ;
-(id)parseInnerProtobufFromData:(id)arg0 ;
-(id)parseResponseFromResponseData:(id)arg0 ;
-(void)_decodeResponseFromTask:(id)arg0 completion:(id)arg1 ;
-(void)cancel;
-(void)completeWithCancelled:(BOOL)arg0 error:(id)arg1 response:(id)arg2 ;
-(void)completeWithErrorCode:(NSInteger)arg0 ;
-(void)dataSession:(id)arg0 didCompleteSubtask:(id)arg1 completion:(id)arg2 ;
-(void)dataSession:(id)arg0 didCompleteTask:(id)arg1 ;
-(void)dataSession:(id)arg0 willSendRequest:(id)arg1 forTask:(id)arg2 completionHandler:(id)arg3 ;
-(void)start;


@end


#endif