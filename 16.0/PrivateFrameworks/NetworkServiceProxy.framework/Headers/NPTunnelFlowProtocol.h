// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPTUNNELFLOWPROTOCOL_H
#define NPTUNNELFLOWPROTOCOL_H

@protocol OS_dispatch_data;


#import "NPTunnelFlow.h"

@interface NPTunnelFlowProtocol : NPTunnelFlow {
    BOOL _disconnectedByTunnel;
    NSObject<OS_dispatch_data> *_inputBuffer;
    BOOL _discardFirstData;
    BOOL _connectedOnTunnelReadyForData;
    BOOL _connectedOnInitialData;
}


@property (readonly, nonatomic) *nw_protocol inputProtocol; // ivar: _inputProtocol
@property (readonly, nonatomic) BOOL waitingForOutput; // ivar: _waitingForOutput


-(?)addBufferToFrameArraybufferSize;
-(?)initWithTunnel:(?)arg0 appRule:(?)arg1 inputProtocolextraProperties;
-(BOOL)connect;
-(BOOL)isClientFlowClosed;
-(unsigned int)addInputFramesToArray:(struct nw_frame_array_s *)arg0 limitMinimumBytes:(unsigned int)arg1 limitMaximumBytes:(unsigned int)arg2 limitMaximumFrames:(unsigned int)arg3 ;
-(unsigned int)addOutputFramesToArray:(struct nw_frame_array_s *)arg0 limitMinimumBytes:(unsigned int)arg1 limitMaximumBytes:(unsigned int)arg2 limitMaximumFrames:(unsigned int)arg3 ;
-(void)closeClientFlowWithError:(int)arg0 ;
-(void)disconnect;
-(void)dropInputProtocol;
-(void)handleAppData:(id)arg0 ;
-(void)handleOutputFrame:(id)arg0 send:(BOOL)arg1 ;
-(void)handleTunnelReadyForData;
-(void)notifyClientConnected;
-(void)readDataFromClient;
-(void)sendDataToClient:(id)arg0 fromTunnel:(BOOL)arg1 ;


@end


#endif