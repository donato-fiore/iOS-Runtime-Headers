// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDIAGNOSTICSCONTEXT_H
#define WFDIAGNOSTICSCONTEXT_H

@class NSString, NSNumber, NSDate;
@protocol WFDiagnosticsProviderContext;

#import <Foundation/Foundation.h>

#import "WFDetailsContext.h"
#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"

@interface WFDiagnosticsContext : NSObject <WFDiagnosticsProviderContext>



@property (readonly, nonatomic) NSString *BSSID; // ivar: _BSSID
@property (readonly, nonatomic) NSString *adviceString; // ivar: _adviceString
@property (readonly, nonatomic) NSString *awdl; // ivar: _awdl
@property (readonly, nonatomic) NSString *beaconPER; // ivar: _beaconPER
@property (readonly, nonatomic) NSString *bluetooth; // ivar: _bluetooth
@property (readonly, nonatomic) BOOL captive; // ivar: _captive
@property (readonly, nonatomic) NSString *cca; // ivar: _cca
@property (readonly, nonatomic) NSNumber *channel; // ivar: _channel
@property (readonly, nonatomic) NSString *channelPerformance; // ivar: _channelPerformance
@property (readonly, nonatomic) NSString *channelString; // ivar: _channelString
@property (readonly, nonatomic) NSString *channelWidth; // ivar: _channelWidth
@property (readonly, nonatomic) NSString *coexFooter; // ivar: _coexFooter
@property (retain, nonatomic) WFDetailsContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *deployment; // ivar: _deployment
@property (readonly, copy) NSString *description;
@property (nonatomic) *__WiFiDeviceClient device; // ivar: _device
@property (readonly, nonatomic) NSString *gateway; // ivar: _gateway
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *internet; // ivar: _internet
@property (readonly, nonatomic) BOOL managed; // ivar: _managed
@property (nonatomic) *__WiFiManagerClient manager; // ivar: _manager
@property (readonly, nonatomic) NSString *motion; // ivar: _motion
@property (readonly, nonatomic) BOOL multiAP; // ivar: _multiAP
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) NSDate *networkQualityDate; // ivar: _networkQualityDate
@property (nonatomic) CGFloat networkQualityResponsiveness; // ivar: _networkQualityResponsiveness
@property (readonly, nonatomic) NSString *probeFooter; // ivar: _probeFooter
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile
@property (readonly, nonatomic) NSString *recvFrames; // ivar: _recvFrames
@property (copy, nonatomic) id *refreshHandler; // ivar: refreshHandler
@property (readonly, nonatomic) NSInteger requestedFields; // ivar: requestedFields
@property (readonly, nonatomic) NSString *rssi; // ivar: _rssi
@property (readonly, nonatomic) NSString *rssiPerformance; // ivar: _rssiPerformance
@property (readonly, nonatomic) NSString *scan; // ivar: _scan
@property (readonly, nonatomic) NSString *security; // ivar: _security
@property (readonly, nonatomic) NSString *securityAdvice; // ivar: _securityAdvice
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *transmitPER; // ivar: _transmitPER


-(id)initWithNetwork:(id)arg0 profile:(id)arg1 detailsContext:(id)arg2 ;
-(void)cancel;
-(void)updateInfo:(id)arg0 ;


@end


#endif