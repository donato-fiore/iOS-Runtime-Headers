// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHVISUALIZATION23AGGREGATECHANGEDETECTOR_H
#define _TTC19HEALTHVISUALIZATION23AGGREGATECHANGEDETECTOR_H


#import <Foundation/Foundation.h>


@interface _TtC19HealthVisualization23AggregateChangeDetector : NSObject {
    ? healthStore;
    ? includeChangeDetails;
    ? name;
    ? deliveryQueue;
    ? changesHandler;
    ? queries;
    ? otherChangePublishers;
    ? otherChanges;
    ? lock;
    ? lock_pendingChangeSet;
    ? lock_pendingError;
    ? lock_dispatchPending;
    ? lock_state;
}




-(id)init;


@end


#endif