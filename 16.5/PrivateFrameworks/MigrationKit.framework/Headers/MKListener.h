// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKLISTENER_H
#define MKLISTENER_H

@class NSMutableArray, NSMutableDictionary, NSData, NSString;
@protocol OS_nw_listener, OS_dispatch_queue, MKListenerDelegate;

#import <Foundation/Foundation.h>

#import "MKCertificate.h"

@interface MKListener : NSObject {
    NSObject<OS_nw_listener> *_listener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSInteger _lastUsedThreadIndex;
    NSMutableArray *_connectionQueuePool;
    NSMutableDictionary *_connections;
}


@property (retain, nonatomic) MKCertificate *certificate; // ivar: _certificate
@property (retain, nonatomic) MKCertificate *clientCertificate; // ivar: _clientCertificate
@property (copy, nonatomic) NSData *clientCertificateHash; // ivar: _clientCertificateHash
@property (weak, nonatomic) NSObject<MKListenerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) NSUInteger numberOfThreads; // ivar: _numberOfThreads
@property (nonatomic) NSUInteger port; // ivar: _port
@property (copy, nonatomic) NSString *service; // ivar: _service
@property (nonatomic) BOOL useTLS; // ivar: _useTLS


-(void)cancel;
-(void)connection:(id)arg0 DidChangeState:(int)arg1 error:(id)arg2 queue:(id)arg3 ;
-(void)connection:(id)arg0 didReceiveContent:(id)arg1 context:(id)arg2 completed:(BOOL)arg3 queue:(id)arg4 error:(id)arg5 ;
-(void)didReceiveSecureOptions:(id)arg0 ;
-(void)didReceiveTCPOptions:(id)arg0 ;
-(void)didReceiveTrust:(id)arg0 complete:(id)arg1 ;
-(void)listen;
-(void)listenerDidReceiveConnection:(id)arg0 ;
-(void)listenerDidReceiveState:(int)arg0 error:(id)arg1 ;
-(void)read:(id)arg0 queue:(id)arg1 ;
-(void)readData:(id)arg0 ;
-(void)sendData:(id)arg0 throughConnection:(id)arg1 close:(BOOL)arg2 ;


@end


#endif