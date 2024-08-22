// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSOURCEDEVICESCONTROLLERSURROGATE_H
#define WLSOURCEDEVICESCONTROLLERSURROGATE_H

@class NSString;
@protocol OS_dispatch_queue;


#import "WLSourceDevicesController.h"

@interface WLSourceDevicesControllerSurrogate : WLSourceDevicesController {
    NSObject<OS_dispatch_queue> *_serialQueue;
    BOOL _wifiStarted;
    NSString *_deviceDiscoverySession;
}




-(id)initWithDelegate:(id)arg0 ;
-(void)scheduleSurrogateDeviceDiscovery;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)stopDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(id)arg0 ;


@end


#endif