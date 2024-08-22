// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLSOURCEDEVICESCONTROLLER_H
#define WLSOURCEDEVICESCONTROLLER_H

@protocol WLSourceDevicesDelegate;


#import "WLDaemonConnection.h"

@interface WLSourceDevicesController : WLDaemonConnection

@property (weak, nonatomic) NSObject<WLSourceDevicesDelegate> *delegate; // ivar: _delegate


-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)attemptDirectConnectionToAddress:(id)arg0 ;
-(void)dealloc;
-(void)startWiFiAndDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)stopDeviceDiscoveryWithCompletion:(id)arg0 ;
-(void)stopWiFiAndDeviceDiscoveryWithCompletion:(id)arg0 ;


@end


#endif