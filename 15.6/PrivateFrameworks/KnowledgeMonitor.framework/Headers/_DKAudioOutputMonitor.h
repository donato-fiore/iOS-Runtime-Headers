// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKAUDIOOUTPUTMONITOR_H
#define _DKAUDIOOUTPUTMONITOR_H

@class DKMonitor, AVAudioSession;



@interface _DKAudioOutputMonitor : DKMonitor {
    AVAudioSession *_outputMonitor;
}




+(id)_eventWithState:(id)arg0 type:(id)arg1 name:(id)arg2 identifier:(id)arg3 routeChangeReason:(id)arg4 ;
+(id)contextValueForAudioOutputConnectionStatus:(BOOL)arg0 type:(id)arg1 name:(id)arg2 identifier:(id)arg3 routeChangeReason:(id)arg4 ;
+(id)entitlements;
+(id)eventStream;
-(id)init;
-(void)deactivate;
-(void)dealloc;
-(void)onAudioRouteChangeNotification:(id)arg0 ;
-(void)start;
-(void)stop;


@end


#endif