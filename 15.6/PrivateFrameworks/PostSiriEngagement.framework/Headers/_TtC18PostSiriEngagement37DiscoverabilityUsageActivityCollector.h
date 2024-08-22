// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18POSTSIRIENGAGEMENT37DISCOVERABILITYUSAGEACTIVITYCOLLECTOR_H
#define _TTC18POSTSIRIENGAGEMENT37DISCOVERABILITYUSAGEACTIVITYCOLLECTOR_H

@class TtC18PostSiriEngagement35AbstractDuetStreamActivityCollector;



@interface _TtC18PostSiriEngagement37DiscoverabilityUsageActivityCollector : TtC18PostSiriEngagement35AbstractDuetStreamActivityCollector {
    ? DiscoverabilityUsageStateActiveSet;
    ? DiscoverabilityIneligibleReasonActiveSet;
    ? kCFDiscoverabilityUsageActivityCollectorIdentifier;
    ? DiscoverabilityUsageMetadataStateKey;
    ? DiscoverabilityUsageMetadataIneligibleReasonKey;
    ? DiscoverabilityEventDateKey;
    ? DiscoverabilityEventIdentifierKey;
    ? DiscoverabilityEventUsageStateKey;
    ? DiscoverabilityEventIneligibleReasonKey;
    ? DiscoverabilityEventDismissalLessThan30SecKey;
    ? DiscoverabilityDismissalBucketThreshold;
    ? DiscoverabilityDateFormat;
}






@end


#endif