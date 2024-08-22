// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDXCLIENTSESSION_H
#define CDXCLIENTSESSION_H

@class NSData, NSIndexSet;
@protocol OS_dispatch_source, CDXClientSessionDelegate;

#import <Foundation/Foundation.h>

#import "CDXClient.h"

@interface CDXClientSession : NSObject {
    NSData *sessionKeyPrepped_;
    NSInteger retransmitAttempts_;
    NSData *lastSent_;
    unsigned short seq_;
    unsigned char pid_;
    *unsigned short ack_;
    NSObject<OS_dispatch_source> *retransmitTimer_;
}


@property (readonly, retain, nonatomic) CDXClient *CDXClient; // ivar: CDXClient_
@property (nonatomic) NSObject<CDXClientSessionDelegate> *delegate; // ivar: delegate_
@property (copy, nonatomic) id *inboundHandler; // ivar: inboundHandler_
@property (readonly, copy, nonatomic) NSIndexSet *participantsInFlight; // ivar: participantsInFlight_
@property (readonly, copy, nonatomic) NSData *sessionKey; // ivar: sessionKey_
@property (copy, nonatomic) NSData *ticket; // ivar: ticket_


-(BOOL)retransmitEvent;
-(BOOL)sendData:(id)arg0 ;
-(BOOL)sendData:(id)arg0 toParticipants:(id)arg1 ;
-(BOOL)sendRaw:(id)arg0 toParticipants:(id)arg1 ;
-(id)decrypt:(id)arg0 ticket:(id)arg1 ;
-(id)encrypt:(id)arg0 ;
-(id)initWithCDXClient:(id)arg0 ticket:(id)arg1 sessionKey:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)recvRaw:(id)arg0 ticket:(id)arg1 ;
-(void)resetRetransmitTimer;
-(void)stopRetransmitTimer;


@end


#endif