// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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


-(?)addInputFramesToArray:(?)arg0 limitMinimumBytes:(?)arg1 limitMaximumByteslimitMaximumFrames;
-(?)addOutputFramesToArray:(?)arg0 limitMinimumBytes:(?)arg1 limitMaximumByteslimitMaximumFrames;
-(?)initWithTunnel:(?)arg0 appRule:(?)arg1 inputProtocolextraProperties;
-(BOOL)addBufferToFrameArray:(struct nw_frame_array_s *)arg0 bufferSize:(NSUInteger)arg1 ;
-(BOOL)connect;
-(BOOL)isClientFlowClosed;
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