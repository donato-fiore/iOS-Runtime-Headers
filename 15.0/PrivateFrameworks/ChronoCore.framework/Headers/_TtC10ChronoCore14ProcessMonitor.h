// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC10CHRONOCORE14PROCESSMONITOR_H
#define _TTC10CHRONOCORE14PROCESSMONITOR_H


#import <Foundation/Foundation.h>


@interface _TtC10ChronoCore14ProcessMonitor : NSObject {
    ? gracePeriodForFormerlyVisibleApplications;
    ? queue;
    ? configurationService;
    ? extensionManager;
    ? subscriptions;
    ? _lock;
    ? _locked_processMonitor;
    ? _locked_knownExtensionBundleIdentifiers;
    ? _locked_knownApplicationBundleIdentifiers;
    ? _locked_runningBundleIdentifiersToPIDs;
    ? _locked_runningBundleIdentifiersWithVisibleScenes;
    ? _locked_runningBundleIdentifiersWithExemptions;
    ? _locked_formerlyVisibleBundleIdentifiers;
    ? _locked_bundleIdentifiersToSuspensionObservers;
    ? _locked_graceExpirationTimer;
}




-(id)init;


@end


#endif