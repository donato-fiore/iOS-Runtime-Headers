// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDXCLIENT_H
#define CDXCLIENT_H

@class NSMutableDictionary, NSString, NSError, NSData;
@protocol OS_dispatch_source, CDXClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CDXClient : NSObject {
    NSInteger holePunchAttemptCount_;
    NSMutableDictionary *sessionLookup_;
    int fd_;
    NSUInteger holePunchSID_;
    NSUInteger prevHolePunchSID_;
    NSString *server_;
    unsigned short port_;
    unsigned short localPort_;
    NSInteger restartCount_;
    sockaddr_in cdxaddr_ipv4;
    *addrinfo cdxMappedIPv4Addr;
    CGFloat holePunchInterval_;
    BOOL preblobIsUpToDate_;
    BOOL willReconfigureShortly_;
    *__SCDynamicStore scDynamicStore_;
    *__CFRunLoopSource scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_source> *source_;
    NSObject<OS_dispatch_source> *holePunchTimer_;
    *void padding_;
}


@property (nonatomic) NSObject<CDXClientDelegate> *delegate; // ivar: delegate_
@property (readonly, nonatomic) NSError *error; // ivar: error_
@property (readonly) NSData *preblob; // ivar: preblob_
@property (copy, nonatomic) id *preblobCallback; // ivar: preblobCallback_
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: queue_


+(id)sharedClient;
-(BOOL)handleHolePunchEvent;
-(BOOL)sendRaw:(id)arg0 ;
-(id)createSessionWithTicket:(id)arg0 sessionKey:(id)arg1 ;
-(id)initWithOptions:(id)arg0 delegate:(id)arg1 ;
-(struct sockaddr *)currentSockAddr;
-(unsigned char)currentSockAddrLen;
-(void)dealloc;
-(void)handleFDEvent;
-(void)invalidate;
-(void)invalidateSession:(id)arg0 ;
-(void)mapIPv4AddrToIPv6:(struct sockaddr_in *)arg0 ;
-(void)networkDidChange;
-(void)resetHolepunchTimer;
-(void)restart;
-(void)sendHolePunch;
-(void)start;
-(void)startListeningOnSockets;
-(void)stopHolePunchTimer;
-(void)stopListeningOnSockets;


@end


#endif