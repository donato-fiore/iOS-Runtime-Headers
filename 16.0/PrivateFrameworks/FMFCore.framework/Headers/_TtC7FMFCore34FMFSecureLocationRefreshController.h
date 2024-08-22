// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC7FMFCORE34FMFSECURELOCATIONREFRESHCONTROLLER_H
#define _TTC7FMFCORE34FMFSECURELOCATIONREFRESHCONTROLLER_H

@class SwiftObject;



@interface _TtC7FMFCore34FMFSecureLocationRefreshController : SwiftObject {
    ? dataManager;
    ? secureLocationsManager;
    ? shallowHandles;
    ? shallowHandlesClientApp;
    ? liveHandles;
    ? liveHandlesClientApp;
    ? pendingIdentifiers;
    ? fallenbackIdentifiers;
    ? liveTimers;
    ? shallowTimeoutTimers;
    ? secureRecoveryTimers;
    ? subscribeTimer;
    ? locationShifter;
    ? subscribeQueue;
    ? delegateQueue;
    ? expiryTimers;
    ? errorRetryInterval;
    ? delegate;
    ? liveDelegate;
    ? overrideLiveAnimationTimeoutDuration;
    ? dateFormatter;
}






@end


#endif