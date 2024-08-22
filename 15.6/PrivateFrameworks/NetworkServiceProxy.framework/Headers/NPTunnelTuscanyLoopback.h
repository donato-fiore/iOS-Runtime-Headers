// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPTUNNELTUSCANYLOOPBACK_H
#define NPTUNNELTUSCANYLOOPBACK_H



#import "NPTunnelTuscany.h"
#import "NPTunnelFlow.h"

@interface NPTunnelTuscanyLoopback : NPTunnelTuscany

@property (retain) NPTunnelFlow *flow; // ivar: _flow
@property *void window; // ivar: _window


-(BOOL)addNewFlow:(id)arg0 ;
-(BOOL)selectBestEdge;
-(NSInteger)currentMTU;
-(NSUInteger)initialWindowSize;
-(NSUInteger)maxFrameSize;
-(id)initWithEndpoint:(id)arg0 parameters:(id)arg1 appRule:(id)arg2 flowProperties:(id)arg3 onRamp:(id)arg4 delegate:(id)arg5 ;
-(unsigned int)dayPassSessionCounter;
-(void)cancelConnection;
-(void)cancelConnectionTimer;
-(void)createTuscanyClient;
-(void)dealloc;
-(void)pingWithCompletionHandler:(id)arg0 ;
-(void)removeFlow:(NSUInteger)arg0 ;
-(void)sendUsageReportWithRTT:(NSUInteger)arg0 geohash:(id)arg1 fallbackReason:(NSInteger)arg2 ;
-(void)startConnectionTimer;
-(void)write:(id)arg0 ;


@end


#endif