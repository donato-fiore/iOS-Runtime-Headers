// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VCCLIENTRELAY_H
#define VCCLIENTRELAY_H

@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VCClientRelay : NSObject {
    int _vtpSocket;
    int _idsSocket;
    NSObject<OS_dispatch_source> *_idsReadSource;
    NSObject<OS_dispatch_queue> *_idsReadQueue;
    BOOL _isConnectionResultSet;
    tagCONNRESULT _connectionResult;
    sockaddr_storage _vtpDestination;
    unsigned int _vtpDestinationLength;
    *OpaqueFigThread _vtpReceiveTID;
}


@property (readonly) BOOL stopVTPReceiveThread; // ivar: _stopVTPReceiveThread


-(BOOL)relayIDSPacket;
-(BOOL)relayVTPPacket;
-(id)initWithIDSSocket:(int)arg0 ;
-(int)setupVTPSocket;
-(int)startRelay;
-(int)stopRelay;
-(void)dealloc;
-(void)setConnectionResult:(struct tagCONNRESULT *)arg0 ;


@end


#endif