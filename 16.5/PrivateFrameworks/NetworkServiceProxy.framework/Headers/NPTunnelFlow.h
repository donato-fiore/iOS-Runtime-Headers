// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPTUNNELFLOW_H
#define NPTUNNELFLOW_H

@class NSDate;
@protocol OS_dispatch_data;

#import <Foundation/Foundation.h>

#import "NSPAppRule.h"
#import "NPFlowProperties.h"
#import "NPTunnel.h"

@interface NPTunnelFlow : NSObject {
    BOOL _hasTunnel;
    int _tunnelError;
    NSInteger _fallbackReason;
}


@property (readonly, nonatomic) NSPAppRule *appRule; // ivar: _appRule
@property (nonatomic) BOOL disconnectedByApp; // ivar: _disconnectedByApp
@property (readonly, nonatomic) BOOL enableDirectRace; // ivar: _enableDirectRace
@property (readonly, nonatomic) NPFlowProperties *extraFlowProperties; // ivar: _extraFlowProperties
@property (nonatomic) CGFloat fallbackDelay; // ivar: _fallbackDelay
@property (nonatomic) BOOL fallbackDisabled; // ivar: _fallbackDisabled
@property (nonatomic) NSInteger fallbackReason;
@property (nonatomic) *void fallbackTimer; // ivar: _fallbackTimer
@property (retain, nonatomic) NSDate *firstTxByteTimestamp; // ivar: _firstTxByteTimestamp
@property (readonly, nonatomic) NSUInteger hashKey; // ivar: _hashKey
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (nonatomic) NSUInteger initialBytesLeftOver; // ivar: _initialBytesLeftOver
@property (readonly, nonatomic) BOOL isBestEffort;
@property (readonly, nonatomic) BOOL isClientFlowClosed;
@property (nonatomic) BOOL isDirectConnectionViable; // ivar: _isDirectConnectionViable
@property (retain, nonatomic) NSObject<OS_dispatch_data> *savedData; // ivar: _savedData
@property (nonatomic) BOOL shouldComposeIntialData; // ivar: _shouldComposeIntialData
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (nonatomic) *void telemetryTimer; // ivar: _telemetryTimer
@property (readonly, nonatomic) NPTunnel *tunnel; // ivar: _tunnel
@property (readonly, nonatomic) *void window; // ivar: _window


-(BOOL)shouldSendDataToClient:(id)arg0 fromTunnel:(BOOL)arg1 ;
-(id)appData;
-(id)combineStateInfo:(id)arg0 andConnectionInfo:(id)arg1 ;
-(id)copyConnectionInfo;
-(id)createFallbackConnectionInfoWithFallbackReason:(NSInteger)arg0 ;
-(id)initWithTunnel:(id)arg0 appRule:(id)arg1 hashKey:(NSUInteger)arg2 extraFlowProperties:(id)arg3 ;
-(void)cleanupLosingConnection:(BOOL)arg0 ;
-(void)closeClientFlowWithError:(int)arg0 ;
-(void)closeFromDirectConnectionWithError:(int)arg0 ;
-(void)closeFromTunnel;
-(void)closeWithError:(int)arg0 ;
-(void)createTelemetryDataWithCompletionHandler:(id)arg0 ;
-(void)dealloc;
-(void)handleAppData:(id)arg0 ;
-(void)handleTunnelCanHandleMoreData;
-(void)handleTunnelConnected;
-(void)handleTunnelDisconnected;
-(void)handleTunnelReadyForData;
-(void)increaseWindowSize:(NSUInteger)arg0 ;
-(void)processConnectionInfo:(id)arg0 ;
-(void)readDataFromClient;
-(void)reportMetrics;
-(void)reportTelemetry:(id)arg0 withService:(id)arg1 url:(id)arg2 ;
-(void)sendDataToClient:(id)arg0 fromTunnel:(BOOL)arg1 ;
-(void)setAppData:(id)arg0 ;
-(void)startDirectConnection;
-(void)stopDirectConnection;


@end


#endif