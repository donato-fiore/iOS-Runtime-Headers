// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMINTERNALSERVICECLIENT_H
#define RMINTERNALSERVICECLIENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "RMConnectionClient.h"

@interface RMInternalServiceClient : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) RMConnectionClient *spiClient; // ivar: _spiClient


-(id)initWithQueue:(id)arg0 ;
-(void)disconnectAllClientsWithReply:(id)arg0 ;
-(void)disconnectClient:(id)arg0 withReply:(id)arg1 ;
-(void)getNumClientsWithReply:(id)arg0 ;
-(void)handleSpiIncomingMessage:(id)arg0 data:(id)arg1 replyBlock:(id)arg2 ;
-(void)invalidate;
-(void)listClientsWithReply:(id)arg0 ;
-(void)parseSpiErrorReply:(id)arg0 forMessage:(id)arg1 ;


@end


#endif