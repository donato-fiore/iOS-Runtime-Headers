// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7NEWSUI223TELEMETRYSESSIONMANAGER_H
#define _TTC7NEWSUI223TELEMETRYSESSIONMANAGER_H

@class SwiftObject;
@protocol FCNetworkEventObserving;



@interface _TtC7NewsUI223TelemetrySessionManager : SwiftObject <FCNetworkEventObserving>

 {
    ? sessionManager;
    ? sessionObserver;
    ? sessionRestartingGroup;
}




-(void)networkEventMonitor:(id)arg0 loggedEvent:(id)arg1 inSession:(id)arg2 ;


@end


#endif