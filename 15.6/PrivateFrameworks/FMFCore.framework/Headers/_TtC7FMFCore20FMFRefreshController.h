// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7FMFCORE20FMFREFRESHCONTROLLER_H
#define _TTC7FMFCORE20FMFREFRESHCONTROLLER_H

@class SwiftObject;



@interface _TtC7FMFCore20FMFRefreshController : SwiftObject {
    ? identifier;
    ? delegate;
    ? selectedFriend;
    ? refreshReason;
    ? interactionController;
    ? apsConnectionHandler;
    ? isSnapshotMode;
    ? useOptimizedFetch;
    ? dataManager;
    ? tapContexts;
    ? liveSessionStatistics;
    ? legacyFallbackData;
    ? refreshQueue;
    ? callbackInterval;
    ? minCallbackInterval;
    ? maxCallbackInterval;
    ? lastRefreshTime;
    ? refreshTimer;
    ? initializedOnce;
    ? initializationInProgress;
    ? firstRefreshCompleted;
    ? isRefreshing;
}




-(void)refreshTimerFired;


@end


#endif