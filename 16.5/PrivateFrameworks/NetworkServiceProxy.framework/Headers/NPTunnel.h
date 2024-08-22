// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTUNNEL_H
#define NPTUNNEL_H

@class NSDate, NSMutableDictionary, NSUUID;
@protocol OS_dispatch_data, NPTunnelDelegate, OS_nw_endpoint, OS_nw_interface, OS_nw_parameters, OS_nw_path;

#import <Foundation/Foundation.h>

#import "NSPAppRule.h"

@interface NPTunnel : NSObject {
    ? _protocol;
    NSObject<OS_dispatch_data> *_savedData;
    *void _idleTimer;
}


@property (readonly, nonatomic) NSPAppRule *appRule; // ivar: _appRule
@property (readonly, nonatomic) BOOL canHandleMoreData;
@property (retain, nonatomic) NSDate *connectionStartDate; // ivar: _connectionStartDate
@property (nonatomic) NSInteger connectionState; // ivar: _connectionState
@property (readonly, weak, nonatomic) NSObject<NPTunnelDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableIdleTimeout; // ivar: _disableIdleTimeout
@property (readonly, nonatomic) NSObject<OS_nw_endpoint> *endpoint; // ivar: _endpoint
@property (nonatomic) BOOL eof; // ivar: _eof
@property (nonatomic) int error; // ivar: _error
@property (nonatomic) NSInteger fallbackReason; // ivar: _fallbackReason
@property (readonly, nonatomic) NSMutableDictionary *flows; // ivar: _flows
@property (nonatomic) BOOL handledDisconnected; // ivar: _handledDisconnected
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSUInteger initialWindowSize;
@property (nonatomic) BOOL isCancelled; // ivar: _isCancelled
@property (readonly, nonatomic) BOOL isConnectionAlive;
@property (readonly, nonatomic) BOOL isReadyForData; // ivar: _isReadyForData
@property (readonly, nonatomic) BOOL isTFOProbeSucceeded; // ivar: _isTFOProbeSucceeded
@property (retain, nonatomic) NSObject<OS_nw_endpoint> *localEndpoint; // ivar: _localEndpoint
@property (readonly, nonatomic) NSObject<OS_nw_interface> *outputInterface;
@property (readonly, nonatomic) NSObject<OS_nw_parameters> *parameters; // ivar: _parameters
@property (retain, nonatomic) NSObject<OS_nw_path> *path; // ivar: _path
@property (readonly, nonatomic) *nw_protocol protocol;
@property (nonatomic) CGFloat timeToFirstByte; // ivar: _timeToFirstByte
@property (nonatomic) CGFloat timeToFirstRequest; // ivar: _timeToFirstRequest
@property (readonly, nonatomic) *NSUInteger timestamps; // ivar: _timestamps


+(void)initializeProtocol;
-(?)handleReadData;
-(BOOL)addNewFlow:(id)arg0 ;
-(BOOL)flowIsFirstFlow:(id)arg0 ;
-(BOOL)hasFlow:(NSUInteger)arg0 ;
-(BOOL)start;
-(NSInteger)sendData:(id)arg0 forFlow:(id)arg1 ;
-(NSUInteger)allocateFlowID;
-(NSUInteger)maxDataSendSizeForFlow:(id)arg0 ;
-(id)createConnectionInfo;
-(id)handleFlowClosed:(NSUInteger)arg0 withFallbackReason:(NSInteger)arg1 ;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 appRule:(id)arg2 flowProperties:(id)arg3 delegate:(id)arg4 ;
-(void)acknowledgeData:(NSUInteger)arg0 sentToFlow:(id)arg1 ;
-(void)cancelConnection;
-(void)closeFlow:(id)arg0 ;
-(void)dealloc;
-(void)destroyConnection;
-(void)handleCanHandleMoreData;
-(void)handleConnected;
-(void)handleConnectionIsDisconnected;
-(void)handleDataWrittenWithError:(int)arg0 ;
-(void)handleDisconnected;
-(void)handleEOF;
-(void)handleFallbackForFlow:(id)arg0 ;
-(void)handleFlowUsedTunnel;
-(void)handleInputAvailable;
-(void)handleOutputAvailable;
-(void)handleReady;
-(void)increaseWindowSizeForFlow:(NSUInteger)arg0 byBytes:(NSUInteger)arg1 ;
-(void)readMinimumLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 ;
-(void)removeFlow:(NSUInteger)arg0 ;
-(void)sendData:(id)arg0 toClientFlow:(NSUInteger)arg1 ;
-(void)startIdleTimer;
-(void)teardownOutputHandler;
-(void)write:(id)arg0 ;
-(void)writeInitialData;


@end


#endif