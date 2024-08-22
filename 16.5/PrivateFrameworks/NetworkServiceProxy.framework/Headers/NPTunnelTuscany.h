// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTUNNELTUSCANY_H
#define NPTUNNELTUSCANY_H

@class NSDate;
@protocol OS_nw_connection;


#import "NPTunnel.h"
#import "NPTuscanyOnRamp.h"

@interface NPTunnelTuscany : NPTunnel {
    NSUInteger _nextFlowID;
    NSObject<OS_nw_connection> *_UDPSession;
    *void _connectionTimer;
    BOOL _shouldReportUsage;
    *void _pingTimer;
    *void _usageReportTimer;
    NPTuscanyOnRamp *_onRamp;
    unsigned int _waldoTimestamp;
}


@property (nonatomic) *void clientRef; // ivar: _clientRef
@property (readonly, nonatomic) NSInteger currentMTU;
@property (readonly, nonatomic) NSDate *dayPassCreationDate;
@property (readonly, nonatomic) unsigned int dayPassSessionCounter;
@property (nonatomic) BOOL ignoreWaldoTimestamp; // ivar: _ignoreWaldoTimestamp
@property (nonatomic) BOOL isFirstTunnel; // ivar: _isFirstTunnel
@property (readonly, nonatomic) NSUInteger maxFrameSize;
@property (copy, nonatomic) id *pendingPingCompletionHandler; // ivar: _pendingPingCompletionHandler


-(?)handleReadData;
-(BOOL)canHandleMoreData;
-(BOOL)flowIsFirstFlow:(id)arg0 ;
-(BOOL)isTFOProbeSucceeded;
-(BOOL)start;
-(NSInteger)sendData:(id)arg0 forFlow:(id)arg1 ;
-(NSUInteger)allocateFlowID;
-(NSUInteger)initialWindowSize;
-(NSUInteger)maxDataSendSizeForFlow:(id)arg0 ;
-(id)createConnectionInfo;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 appRule:(id)arg2 flowProperties:(id)arg3 onRamp:(id)arg4 delegate:(id)arg5 ;
-(void)acknowledgeData:(NSUInteger)arg0 sentToFlow:(id)arg1 ;
-(void)cancelConnection;
-(void)cancelConnectionTimer;
-(void)closeFlow:(id)arg0 ;
-(void)createTuscanyClient;
-(void)dealloc;
-(void)destroyConnection;
-(void)handleConnected;
-(void)handleConnectionError;
-(void)handleDataWrittenWithError:(int)arg0 ;
-(void)handleDisconnected;
-(void)handleEOF;
-(void)handleFallbackForFlow:(id)arg0 ;
-(void)handleFlowUsedTunnel;
-(void)handleHelloAck:(unsigned int)arg0 ;
-(void)handleInputAvailable;
-(void)handlePingResponseRTT:(NSUInteger)arg0 geohash:(id)arg1 ;
-(void)pingWithCompletionHandler:(id)arg0 ;
-(void)sendDataOnUDPSession:(id)arg0 ;
-(void)sendUsageReportWithRTT:(NSUInteger)arg0 geohash:(id)arg1 fallbackReason:(NSInteger)arg2 ;
-(void)startConnectionTimer;
-(void)writeInitialData;


@end


#endif