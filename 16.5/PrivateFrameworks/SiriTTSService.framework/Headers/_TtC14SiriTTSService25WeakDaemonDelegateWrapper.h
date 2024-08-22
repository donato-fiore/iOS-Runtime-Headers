// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRITTSSERVICE25WEAKDAEMONDELEGATEWRAPPER_H
#define _TTC14SIRITTSSERVICE25WEAKDAEMONDELEGATEWRAPPER_H

@class SwiftObject;
@protocol _TtP14SiriTTSService22DaemonDelegateProtocol_;



@interface _TtC14SiriTTSService25WeakDaemonDelegateWrapper : SwiftObject <_TtP14SiriTTSService22DaemonDelegateProtocol_>

 {
    ? delegate;
}




-(void)didGenerateAudioWithRequestId:(NSUInteger)arg0 audio:(id)arg1 ;
-(void)didGenerateWordTimingsWithRequestId:(NSUInteger)arg0 wordTimingInfo:(id)arg1 ;
-(void)didReportInstrumentWithRequestId:(NSUInteger)arg0 instrumentationMetrics:(id)arg1 ;
-(void)didStartSpeakingWithRequestId:(NSUInteger)arg0 ;
-(void)pingWithReply:(id)arg0 ;


@end


#endif