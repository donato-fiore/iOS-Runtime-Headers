// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11SESSIONCORE6DAEMON_H
#define _TTC11SESSIONCORE6DAEMON_H

@class SwiftObject;



@interface _TtC11SessionCore6Daemon : SwiftObject {
    ? workloop;
    ? taskScheduler;
    ? syncEngine;
    ? alertAppService;
    ? alertService;
    ? alertPresenter;
    ? alertManager;
    ? authorizationService;
    ? pushFrequentUpdatesObservationServer;
    ? qosManager;
    ? lockStateObserver;
    ? assertionManager;
    ? assertionService;
    ? qosObservationServer;
    ? presentationObservationServer;
    ? prominenceObservationServer;
    ? activityAuthorizer;
    ? inputServer;
    ? processManager;
    ? outputServer;
    ? pushServer;
    ? pushTokenServer;
    ? activityManager;
    ? stateCaptureService;
    ? stateCaptureServer;
    ? appEventObserver;
    ? stuckClientBugCapturer;
}






@end


#endif