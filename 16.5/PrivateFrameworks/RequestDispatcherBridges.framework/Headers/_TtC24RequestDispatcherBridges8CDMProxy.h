// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES8CDMPROXY_H
#define _TTC24REQUESTDISPATCHERBRIDGES8CDMPROXY_H

@class SwiftObject;



@interface _TtC24RequestDispatcherBridges8CDMProxy : SwiftObject {
    ? cdmClient;
    ? cdmClientNotification;
    ? queue;
    ? locale;
    ? cdmActiveServiceGraph;
    ? cdmSetupSucceeded;
    ? cdmSetupTimeout;
    ? setupTimeSignpostId;
    ? activeSessionId;
    ? lastAccessTime;
    ? assetsChanged;
    ? startRequestIdToProcessor;
    ? nluRequestIdToStartRequestId;
    ? cdmObserverSuccessFromSetup;
    ? cdmObserverErrorFromSetup;
    ? setupSemaphore;
    ? instrumentationUtil;
    ? cdmSetupTimeoutMillis;
    ? cdmProxyExpirationInSeconds;
    ? isDecoupleFromSession;
    ? shouldAssetsTimeout;
}






@end


#endif