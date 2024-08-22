// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTUNNELFLOWDNS_H
#define NPTUNNELFLOWDNS_H



#import "NPTunnelFlowUDP.h"
#import "NSPDNSPacket.h"

@interface NPTunnelFlowDNS : NPTunnelFlowUDP

@property (retain) NSPDNSPacket *directDNSResponse; // ivar: _directDNSResponse
@property NSInteger directResult; // ivar: _directResult
@property (retain) NSPDNSPacket *query; // ivar: _query
@property BOOL telemetryReported; // ivar: _telemetryReported
@property (retain) NSPDNSPacket *tunnelDNSResponse; // ivar: _tunnelDNSResponse
@property *void tunnelResponseTimer; // ivar: _tunnelResponseTimer
@property NSInteger tunnelResult; // ivar: _tunnelResult


-(BOOL)checkAndReportTelemetry;
-(BOOL)shouldSendDataToClient:(id)arg0 fromTunnel:(BOOL)arg1 ;
-(id)addDNSInfoToTelemetry:(id)arg0 ;
-(id)createStateDictionaryWithResult:(NSInteger)arg0 response:(id)arg1 ;
-(id)resultToString:(NSInteger)arg0 ;
-(void)cleanupLosingConnection:(BOOL)arg0 ;
-(void)closeFromDirectConnectionWithError:(int)arg0 ;
-(void)closeFromTunnel;
-(void)handleAppData:(id)arg0 ;
-(void)handleTunnelConnected;
-(void)sendDataToClient:(id)arg0 fromTunnel:(BOOL)arg1 ;


@end


#endif