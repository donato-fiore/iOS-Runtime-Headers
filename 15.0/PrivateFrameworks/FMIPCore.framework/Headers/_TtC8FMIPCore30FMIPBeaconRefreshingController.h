// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMIPCORE30FMIPBEACONREFRESHINGCONTROLLER_H
#define _TTC8FMIPCORE30FMIPBEACONREFRESHINGCONTROLLER_H

@class SwiftObject;



@interface _TtC8FMIPCore30FMIPBeaconRefreshingController : SwiftObject {
    ? delegate;
    ? identifier;
    ? beacons;
    ? unknownBeacons;
    ? itemGroups;
    ? ownerSession;
    ? refreshQueue;
    ? filterQueue;
    ? callbackInterval;
    ? defaultCallbackInterval;
    ? initialCallbackInterval;
    ? refreshTimer;
    ? lastActiveTimestamp;
    ? utAlertState;
    ? separationMonitoringState;
    ? currentlyRefreshing;
    ? nextRefreshQueued;
    ? lastRefreshTime;
    ? refreshingPolicy;
    ? isThrottled;
    ? isRefreshing;
}




-(void)handleBeaconsChanged;
-(void)handleUnknownBeaconsChanged;
-(void)refreshTimerFired;


@end


#endif