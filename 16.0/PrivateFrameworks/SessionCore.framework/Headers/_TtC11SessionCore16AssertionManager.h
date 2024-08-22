// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC11SESSIONCORE16ASSERTIONMANAGER_H
#define _TTC11SESSIONCORE16ASSERTIONMANAGER_H

@class SwiftObject;



@interface _TtC11SessionCore16AssertionManager : SwiftObject {
    ? _qosPublisher;
    ? _prominencePublisher;
    ? _presentationPublisher;
    ? lock;
    ? _lock_clients;
    ? _lock_qos;
    ? _lock_prominentActivityIdentifiers;
    ? _lock_prominenceSubscriptions;
    ? _lock_presentationSubscriptions;
    ? _lock_fakeForegroundSubscriptions;
    ? _lock_presenters;
    ? queue;
    ? store;
    ? timer;
    ? firstLaunchDetector;
    ? activityStore;
}






@end


#endif