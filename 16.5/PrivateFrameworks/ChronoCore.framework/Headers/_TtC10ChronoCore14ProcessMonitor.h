// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC10CHRONOCORE14PROCESSMONITOR_H
#define _TTC10CHRONOCORE14PROCESSMONITOR_H


#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore14ProcessMonitor : NSObject {
    ? _queue;
    ? _calloutQueue;
    ? _configurationService;
    ? _extensionManager;
    ? _subscriptions;
    ? _lock;
    ? _lock_processMonitor;
    ? _lock_knownExtensionBundleIdentifiers;
    ? _lock_knownApplicationBundleIdentifiers;
    ? _lock_runningBundleIdentifiersToPIDs;
    ? _lock_runningBundleIdentifiersWithVisibleScenes;
    ? _lock_runningBundleIdentifiersWithExemptions;
    ? _lock_formerlyVisibleBundleIdentifiers;
    ? _lock_bundleIdentifiersToSuspensionObservers;
    ? _lock_graceExpirationTimer;
    ? _lock_observers;
}




-(id)init;


@end


#endif