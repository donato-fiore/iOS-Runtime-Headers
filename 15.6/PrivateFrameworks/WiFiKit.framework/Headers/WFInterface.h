// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFINTERFACE_H
#define WFINTERFACE_H

@class CWFInterface, NSRunLoop, NSThread, NSSet, NSArray, NSOperationQueue, NSString, NSNumber;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFNetworkScanRecord.h"
#import "WFIPMonitor.h"
#import "WFClient.h"

@interface WFInterface : NSObject

@property (retain, nonatomic) CWFInterface *cInterface; // ivar: _cInterface
@property (retain, nonatomic) NSRunLoop *callbackRunLoop; // ivar: _callbackRunLoop
@property (retain, nonatomic) NSThread *callbackThread; // ivar: _callbackThread
@property (retain, nonatomic) WFNetworkScanRecord *coreWiFiCurrentNetwork; // ivar: _coreWiFiCurrentNetwork
@property (retain, nonatomic) WFNetworkScanRecord *currentNetwork; // ivar: _currentNetwork
@property (nonatomic) BOOL currentNetworkIsDirected; // ivar: _currentNetworkIsDirected
@property (retain, nonatomic) NSSet *currentNetworkIssues; // ivar: _currentNetworkIssues
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *currentNetworkQueue; // ivar: _currentNetworkQueue
@property (nonatomic) *__WiFiDeviceClient device; // ivar: _device
@property (retain, nonatomic) NSArray *deviceScanChannels; // ivar: _deviceScanChannels
@property (retain, nonatomic) NSOperationQueue *gasQueue; // ivar: _gasQueue
@property (nonatomic) BOOL hasNoGatewayIP; // ivar: _hasNoGatewayIP
@property (copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName
@property (retain, nonatomic) WFIPMonitor *ipMonitor; // ivar: _ipMonitor
@property (nonatomic) int ipState; // ivar: _ipState
@property (nonatomic) BOOL ipv4SelfAssigned; // ivar: _ipv4SelfAssigned
@property (retain, nonatomic) NSOperationQueue *joinQueue; // ivar: _joinQueue
@property (retain, nonatomic) WFNetworkScanRecord *mobileWiFiCurrentNetwork; // ivar: _mobileWiFiCurrentNetwork
@property BOOL monitoringEvents; // ivar: _monitoringEvents
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *networkProcessingQueue; // ivar: _networkProcessingQueue
@property (nonatomic) NSNumber *rssiThreshold; // ivar: _rssiThreshold
@property (retain, nonatomic) NSOperationQueue *scanQueue; // ivar: _scanQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *scanQueueDispatchQueue; // ivar: _scanQueueDispatchQueue
@property BOOL scanning; // ivar: _scanning
@property (nonatomic) BOOL usingCoreWiFi; // ivar: _usingCoreWiFi
@property (weak, nonatomic) WFClient *wifiClient; // ivar: _wifiClient


-(BOOL)isReadyForConnectionVelocityTest;
-(id)_debugLQMString:(id)arg0 ;
-(id)initWithDevice:(struct __WiFiDeviceClient *)arg0 ;
-(id)initWithDevice:(struct __WiFiDeviceClient *)arg0 coreWiFiInterface:(id)arg1 ;
-(void)_currentNetworkDidChangeWithReason:(NSUInteger)arg0 previousNetwork:(id)arg1 ;
-(void)_hostAPStateDidChange:(id)arg0 ;
-(void)_initCurrentNetwork;
-(void)_linkChangedWithInfo:(id)arg0 ;
-(void)_linkQualityChanged:(id)arg0 ;
-(void)_startMonitoringWiFiEvents;
-(void)_startScanOperation:(id)arg0 ;
-(void)_stopMonitoringWiFiEvents;
-(void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork *)arg0 callback:(id)arg1 ;
// -(void)_updateCurrentNetworkWithNetwork:(struct __WiFiNetwork *)arg0 forceUpdateNetwork:(BOOL)arg1 callback:(id)arg2 userInfo:(unk)arg3  ;
-(void)_wifiManagerRestarted:(id)arg0 ;
-(void)_wifiScanComplete:(id)arg0 error:(int)arg1 ;
-(void)asyncAssociateToNetwork:(id)arg0 password:(id)arg1 reply:(id)arg2 ;
-(void)asyncAssociateToNetwork:(id)arg0 profile:(id)arg1 reply:(id)arg2 ;
-(void)asyncCurrentNetwork:(id)arg0 ;
-(void)asyncGASQueryForNetworks:(id)arg0 elements:(NSUInteger)arg1 reply:(id)arg2 ;
-(void)asyncHS20Supported:(id)arg0 ;
-(void)asyncScanRequest:(id)arg0 reply:(id)arg1 ;
-(void)cancelAllScans;
-(void)dealloc;
-(void)disassociateFromCarPlayUserConfiguredNetwork;
-(void)disassociateFromCurrentNetwork;
-(void)notifyNoNetworksFound;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif