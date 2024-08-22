// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8FMIPCORE24FMIPREFRESHINGCONTROLLER_H
#define _TTC8FMIPCORE24FMIPREFRESHINGCONTROLLER_H

@class SwiftObject;



@interface _TtC8FMIPCore24FMIPRefreshingController : SwiftObject {
    ? identifier;
    ? delegate;
    ? selectedDevice;
    ? interactionController;
    ? apsConnectionHandler;
    ? refreshQueue;
    ? tapContexts;
    ? callbackInterval;
    ? minCallbackInterval;
    ? maxCallbackInterval;
    ? lastRefreshTime;
    ? refreshTimer;
    ? isInitializing;
    ? ownerPhoneNumber;
    ? isRefreshing;
    ? rangingParameters;
}




-(void)refreshTimerFired;


@end


#endif