// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7FMFCORE14FMFDATAMANAGER_H
#define _TTC7FMFCORE14FMFDATAMANAGER_H

@class SwiftObject;



@interface _TtC7FMFCore14FMFDataManager : SwiftObject {
    ? identifier;
    ? delegate;
    ? configuration;
    ? dataManagerUpdateQueue;
    ? dataManagerDelegateQueue;
    ? cacheBlobQueue;
    ? pendingDataManager;
    ? followers;
    ? pendingFollowers;
    ? futureFollowing;
    ? futureFollowers;
    ? internalFriends;
    ? locatesInProgress;
    ? liveLocatesInProgress;
    ? shallowLocatesInProgress;
    ? fallbackToLegacyLocatesInProgress;
    ? intermediateLocations;
    ? internalLocations;
    ? internalUnshiftedLocations;
    ? locationAlertsOnMeByMe;
    ? locationAlertsOnMeByFriends;
    ? locationAlertsOnFriendsByMe;
    ? locationAlertsOnFriendsByFriends;
    ? isSnapshotMode;
    ? following;
    ? internalLocationAlerts;
    ? permanentDataCache;
    ? _cacheBlob;
    ? initializedFromCache;
    ? contactsController;
    ? contactMatchingCache;
    ? prefetchedContactCache;
    ? reverseGeocoder;
    ? internalPreferences;
    ? internalFeatures;
    ? internalConfig;
    ? internalMyInfo;
    ? internalDevices;
    ? internalLabelledLocations;
    ? internalLabels;
}






@end


#endif