// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVROUTEDETECTORINTERNAL_H
#define AVROUTEDETECTORINTERNAL_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceDiscoverySession.h"

@interface AVRouteDetectorInternal : NSObject {
    BOOL multipleRoutesDetected;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
    id *outputDevicesChangeNotificationToken;
}






@end


#endif