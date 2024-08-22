// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVROUTEDETECTORINTERNAL_H
#define AVROUTEDETECTORINTERNAL_H

@class DADiscovery;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AVOutputDeviceDiscoverySession.h"

@interface AVRouteDetectorInternal : NSObject {
    BOOL routeDetectionEnabled;
    BOOL multipleRoutesDetected;
    BOOL detectsCustomRoutes;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    AVOutputDeviceDiscoverySession *outputDeviceDiscoverySession;
    id *outputDevicesChangeNotificationToken;
    id *didEnterBackgroundNotificationToken;
    id *didEnterForegroundNotificationToken;
    DADiscovery *customRouteDiscoverySession;
    BOOL customRoutesPresent;
    BOOL routeDetectionSuspended;
}






@end


#endif