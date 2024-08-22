// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef KVXPCCLIENT_H
#define KVXPCCLIENT_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface KVXPCClient : NSObject

@property (readonly, nonatomic) NSString *clientId; // ivar: _clientId
@property (retain) NSXPCConnection *connection; // ivar: _connection
@property unsigned short failureCode; // ivar: _failureCode
@property (readonly, nonatomic) unsigned short interruptionCode; // ivar: _interruptionCode


+(void)initialize;
-(id)_errorHandlerWithCompletion:(SEL)arg0 ;
-(id)_failureHandlerWithResponse:(SEL)arg0 ;
-(id)_remoteObjectProxy:(BOOL)arg0 errorCompletion:(id)arg1 ;
-(id)init;
-(id)initWithServiceProtocol:(id)arg0 machServiceName:(id)arg1 clientId:(id)arg2 interruptionCode:(unsigned short)arg3 invalidationCode:(unsigned short)arg4 ;
-(void)dealloc;
// -(void)serviceArrayRespondingRequestWithCompletion:(id)arg0 usingBlock:(unk)arg1  ;
// -(void)serviceOptionsRespondingRequest:(BOOL)arg0 completion:(id)arg1 usingBlock:(unk)arg2  ;
// -(void)serviceRequest:(BOOL)arg0 completion:(id)arg1 usingBlock:(unk)arg2  ;
// -(void)serviceVersionRespondingRequest:(BOOL)arg0 completion:(id)arg1 usingBlock:(unk)arg2  ;


@end


#endif