// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8FMIPCORE11FMIPMANAGER_H
#define _TTC8FMIPCORE11FMIPMANAGER_H

@class SwiftObject;



@interface _TtC8FMIPCore11FMIPManager : SwiftObject {
    ? identifier;
    ? delegate;
    ? siriDelegate;
    ? refreshingController;
    ? beaconRefreshingController;
    ? safeLocationRefreshingController;
    ? isDevicesSnapshotMode;
    ? isItemsSnapshotMode;
    ? configuration;
    ? garbageCollector;
    ? locationController;
    ? authenticationUIProvider;
    ? ownerSession;
    ? urlHandler;
    ? locationShifter;
    ? dataQueue;
    ? unknownItemQueue;
    ? delegateQueue;
    ? dataManager;
    ? interactionController;
    ? actionsController;
    ? snapshotDevicesResponseReceived;
    ? itemActionsController;
    ? snapshotItemsResponseReceived;
    ? snapshotItemsLocatedResponseReceived;
    ? stopRefreshTimestamp;
    ? isUpdatingSingleDevices;
    ? isRefreshingItems;
    ? isRefreshingDevices;
    ? isUTAppAlertDisabled;
    ? useRealtimeForItems;
    ? connectionStateProvider;
    ? selectedDevice;
    ? initializedSubsystems;
}






@end


#endif