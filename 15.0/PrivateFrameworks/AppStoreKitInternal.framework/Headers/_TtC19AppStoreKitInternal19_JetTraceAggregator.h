// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC19APPSTOREKITINTERNAL19_JETTRACEAGGREGATOR_H
#define _TTC19APPSTOREKITINTERNAL19_JETTRACEAGGREGATOR_H

@class SwiftObject;



@interface _TtC19AppStoreKitInternal19_JetTraceAggregator : SwiftObject {
    ? didFinishEvent;
    ? shouldRecordActivity;
    ? signpostPredicate;
    ? aggregationWindow;
    ? signpostTimeout;
    ? activityTimeout;
    ? lock;
    ? eventQueue;
    ? bootstrapObserver;
    ? openIntervals;
    ? openActivities;
    ? ignoredActivityIds;
    ? openIntervalDeletionQueue;
    ? openActivityDeletionQueue;
    ? ignoredActivityDeletionQueue;
    ? currentAggregation;
}






@end


#endif