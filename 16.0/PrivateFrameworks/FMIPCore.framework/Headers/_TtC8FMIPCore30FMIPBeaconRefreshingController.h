// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8FMIPCORE30FMIPBEACONREFRESHINGCONTROLLER_H
#define _TTC8FMIPCORE30FMIPBEACONREFRESHINGCONTROLLER_H

@class SwiftObject;



@interface _TtC8FMIPCore30FMIPBeaconRefreshingController : SwiftObject {
    ? identifier;
    ? refreshQueue;
    ? filterQueue;
    ? beacons;
    ? unknownBeacons;
    ? itemGroups;
    ? ownerSession;
    ? currentlyRefreshing;
    ? nextRefreshQueued;
    ? lastRefreshTime;
    ? delegate;
    ? lastActiveTimestamp;
    ? callbackInterval;
    ? defaultCallbackInterval;
    ? initialCallbackInterval;
    ? refreshTimer;
    ? utAlertState;
    ? separationMonitoringState;
    ? clientConfiguration;
    ? refreshingPolicy;
    ? isThrottled;
    ? isRefreshing;
}




-(void)handleBeaconsChanged;
-(void)handleUnknownBeaconsChanged;
-(void)refreshTimerFired;


@end


#endif