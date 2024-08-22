// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC13SIRIUTILITIES19NETWORKAVAILABILITY_H
#define _TTC13SIRIUTILITIES19NETWORKAVAILABILITY_H

@class SwiftObject;


#import "SUNetworkReachability.h"

@interface _TtC13SiriUtilities19NetworkAvailability : SwiftObject {
    ? mock;
    ? _status;
    ? _isAvailable;
    ? _isExpensive;
    ? _isConstrained;
    ? _isInAirplaneMode;
    ? monitor;
    ? pathUpdateHandler;
    ? radiosPreferences;
    ? airplaneModeUpdateHandler;
    ? lock;
}


@property (nonatomic, readonly) SUNetworkReachability *networkReachability; // ivar: networkReachability




@end


#endif