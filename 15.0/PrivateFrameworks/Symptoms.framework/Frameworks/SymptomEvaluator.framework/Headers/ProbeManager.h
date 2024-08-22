// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROBEMANAGER_H
#define PROBEMANAGER_H

@class NSString, NSMutableDictionary;
@protocol BonjourProbeDelegate, ICMPPingProbeDelegate, AWDLPeerProbeDelegate, ProbeManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ProbeManager : NSObject <BonjourProbeDelegate, ICMPPingProbeDelegate, AWDLPeerProbeDelegate>

 {
    NSUInteger probeSequenceNumber;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<ProbeManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) id *probeDetails; // ivar: _probeDetails
@property (readonly, nonatomic) NSMutableDictionary *probes; // ivar: _probes
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


-(id)initWithQueue:(id)arg0 ;
-(id)probeCallbackFunctions;
-(void)awdlPeerPollProbe:(id)arg0 serviceAdded:(id)arg1 ;
-(void)awdlPeerPollProbe:(id)arg0 serviceRemoved:(id)arg1 ;
-(void)awdlPeerPollProbe:(id)arg0 serviceUpdated:(id)arg1 ;
-(void)awdlPeerPollProbeIsComplete:(id)arg0 ;
-(void)bonjourProbeComplete:(id)arg0 status:(unsigned int)arg1 ;
-(void)bonjourServiceAdded:(id)arg0 isUpdatedService:(BOOL)arg1 ;
-(void)bonjourServiceRemoved:(id)arg0 ;
-(void)cancelAllProbes;
-(void)dealloc;
-(void)icmpPingProbe:(id)arg0 completedIterations:(NSUInteger)arg1 successfulCount:(NSUInteger)arg2 withError:(id)arg3 ;
-(void)icmpPingProbe:(id)arg0 echoRequestSent:(id)arg1 success:(BOOL)arg2 ;
-(void)icmpPingProbe:(id)arg0 echoResponseReceived:(id)arg1 success:(BOOL)arg2 ;
-(void)startAWDLPeerPollingWithDiagSession:(id)arg0 services:(id)arg1 count:(id)arg2 interval:(id)arg3 ;
-(void)startAirDropBonjourScan:(id)arg0 duration:(id)arg1 ;
-(void)startGetNetworkInfo:(id)arg0 ;
-(void)startICMPPingForDiagSession:(id)arg0 hostName:(id)arg1 ipAddress:(id)arg2 interface:(id)arg3 pingCount:(id)arg4 interPingInterval:(id)arg5 burstCount:(id)arg6 interBurstInterval:(id)arg7 timeout:(id)arg8 ;
-(void)startTCPDumpForDiagSession:(id)arg0 duration:(id)arg1 ;
-(void)startTestHTTPForDiagSession:(id)arg0 url:(id)arg1 timeout:(id)arg2 interfaceName:(id)arg3 userAgent:(id)arg4 ;
-(void)startTestTCPConnectionForDiagSession:(id)arg0 url:(id)arg1 host:(id)arg2 port:(id)arg3 interfaceName:(id)arg4 timeout:(id)arg5 ;
-(void)stopTCPDump;


@end


#endif