// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCAUDIOSTREAMTRANSPORT_H
#define VCAUDIOSTREAMTRANSPORT_H

@protocol WRMClientDelegate;


#import "VCMediaStreamTransport.h"
#import "WRMClient.h"

@interface VCAudioStreamTransport : VCMediaStreamTransport <WRMClientDelegate>

 {
    WRMClient *_wrmClient;
    _VCAudioStreamTransportRealtimeContext _realtimeContext;
}


@property (readonly, nonatomic) *void realtimeContext;


-(id)initWithHandle:(struct tagHANDLE *)arg0 callId:(unsigned int)arg1 localSSRC:(unsigned int)arg2 ;
-(id)initWithHandle:(struct tagHANDLE *)arg0 callId:(unsigned int)arg1 localSSRC:(unsigned int)arg2 enableNetworkMonitor:(BOOL)arg3 ;
-(int)onStart;
-(void)dealloc;
-(void)onStop;
-(void)reportWRMMetrics:(struct ? *)arg0 ;
-(void)setPreWarmState:(BOOL)arg0 ;
-(void)setWRMCallId:(unsigned int)arg0 ;
-(void)setWRMCoexMetrics:(id)arg0 ;
-(void)setWRMMetricConfig:(struct ? *)arg0 ;
-(void)setWRMNotification:(struct ? *)arg0 ;
-(void)startWRM;
-(void)stopWRM;


@end


#endif