// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC15REMINDERSUICORE26TTRACCOUNTSLISTSINTERACTOR_H
#define _TTC15REMINDERSUICORE26TTRACCOUNTSLISTSINTERACTOR_H


#import <Foundation/Foundation.h>


@interface _TtC15RemindersUICore26TTRAccountsListsInteractor : NSObject {
    ? delegate;
    ? store;
    ? isSettingSmartListsDisplayOrderInUserDefaults;
    ? isSettingSmartListsVisibilityInUserDefaults;
    ? committer;
    ? cloudKitMigrationManager;
    ? cloudKitNetworkActivityMonitor;
    ? perWindowLastSelectedListStorage;
    ? userDefaults;
    ? smartListsDisplayOrderObservationToken;
    ? smartListsVisibilityObservationToken;
    ? migrationPollingTimer;
    ? accountsEligibleForMigration_cached;
    ? cloudKitNetworkActivity;
    ? dataViewMonitor;
    ? modelCachablePropertyFetchInitiator;
    ? modelCachablePropertyFetchSubscription;
}




-(id)init;


@end


#endif