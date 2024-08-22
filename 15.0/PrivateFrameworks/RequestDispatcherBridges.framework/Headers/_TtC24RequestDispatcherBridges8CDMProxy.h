// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC24REQUESTDISPATCHERBRIDGES8CDMPROXY_H
#define _TTC24REQUESTDISPATCHERBRIDGES8CDMPROXY_H

@class SwiftObject;



@interface _TtC24RequestDispatcherBridges8CDMProxy : SwiftObject {
    ? cdmClient;
    ? queue;
    ? setupResultQueue;
    ? startRequestIdToProcessor;
    ? nluRequestIdToStartRequestId;
    ? cdmSetupSucceeded;
    ? cdmSetupTimedout;
    ? cdmObserverSuccessFromSetup;
    ? cdmObserverErrorFromSetup;
    ? setupSemaphore;
    ? sessionEnded;
    ? cdmSetupTimeoutMillis;
    ? instrumentationUtil;
    ? sandboxId;
}






@end


#endif