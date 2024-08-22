// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFDETAILSCONTEXT_H
#define WFDETAILSCONTEXT_H

@class NSString, NetworkQualityExecutions, UIViewController<WFNetworkView>, NSArray;
@protocol WFDetailsProviderContext, WFContextPresenting;

#import <Foundation/Foundation.h>

#import "WFDiagnosticsContext.h"
#import "WFIPMonitor.h"
#import "WFKnownNetworkStore.h"
#import "WFNetworkScanRecord.h"
#import "WFNetworkProfile.h"

@interface WFDetailsContext : NSObject <WFDetailsProviderContext, WFContextPresenting>



@property (nonatomic, getter=isWiFiOutranked) BOOL WiFiOutranked; // ivar: _WiFiOutranked
@property (copy, nonatomic) id *actionHandler; // ivar: _actionHandler
@property (nonatomic) BOOL autoJoinEnabled; // ivar: _autoJoinEnabled
@property (nonatomic) BOOL autoLoginEnabled; // ivar: _autoLoginEnabled
@property (nonatomic, getter=isConnectedWithHardwareAddress) BOOL connectedWithHardwareAddress; // ivar: _connectedWithHardwareAddress
@property (nonatomic, getter=isCurrent) BOOL current; // ivar: _current
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL diagnosable; // ivar: _diagnosable
@property (retain, nonatomic) WFDiagnosticsContext *diagnosticsContext; // ivar: _diagnosticsContext
@property (nonatomic) *ct_green_tea_logger_s greenTeaLogger; // ivar: _greenTeaLogger
@property (copy, nonatomic) NSString *hardwareMACAddress; // ivar: _hardwareMACAddress
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WFIPMonitor *ipMonitor; // ivar: _ipMonitor
@property (nonatomic) BOOL isInSaveDataMode; // ivar: _isInSaveDataMode
@property (nonatomic) BOOL isPrivacyProxyEnabled; // ivar: _isPrivacyProxyEnabled
@property (nonatomic, getter=isKnownNetwork) BOOL knownNetwork; // ivar: _knownNetwork
@property (retain, nonatomic) WFKnownNetworkStore *knownNetworkStore; // ivar: _knownNetworkStore
@property (readonly, nonatomic) BOOL needsDismissal;
@property (retain, nonatomic) WFNetworkScanRecord *network; // ivar: _network
@property (retain, nonatomic) NetworkQualityExecutions *networkQualityExecution; // ivar: _networkQualityExecution
@property (nonatomic, getter=isPrivacyProxyConfigurable) BOOL privacyProxyConfigurable; // ivar: _privacyProxyConfigurable
@property (retain, nonatomic) WFNetworkProfile *profile; // ivar: _profile
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider; // ivar: _provider
@property (readonly, copy, nonatomic) NSString *randomMACAddress; // ivar: _randomMACAddress
@property (readonly, nonatomic, getter=isRandomMACAddressConfigurable) BOOL randomMACAddressConfigurable; // ivar: _randomMACAddressConfigurable
@property (nonatomic, getter=isRandomMACAddressDisabled) BOOL randomMACAddressDisabled; // ivar: _randomMACAddressDisabled
@property (readonly, nonatomic, getter=isRandomMACFeatureEnabled) BOOL randomMACFeatureEnabled; // ivar: _randomMACFeatureEnabled
@property (nonatomic, getter=isRandomMACSwitchOn) BOOL randomMACSwitchOn; // ivar: _randomMACSwitchOn
@property (retain, nonatomic) NSArray *recommendations; // ivar: _recommendations
@property (nonatomic) NSInteger requestedFields; // ivar: _requestedFields
@property (copy, nonatomic) NSString *staticPrivateMACFooterText; // ivar: _staticPrivateMACFooterText
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAirportManagement; // ivar: _supportsAirportManagement
@property (copy, nonatomic) NSString *turnOFFPrivateMACFooterText; // ivar: _turnOFFPrivateMACFooterText
@property (copy, nonatomic) NSString *turnONPrivateMACFooterText; // ivar: _turnONPrivateMACFooterText


-(id)initWithNetwork:(id)arg0 profile:(id)arg1 knownNetworkStore:(id)arg2 ipMonitor:(id)arg3 privateMACConfig:(id)arg4 ;
-(void)cancel;
-(void)cancelNetworkQualityRun;
-(void)dealloc;
-(void)disableRandomMAC;
-(void)enableRandomMAC;
-(void)forget;
-(void)join;
-(void)manage;
-(void)openRecommendationLink;
-(void)overrideWiFiOutrank;
-(void)renewLease;
-(void)runNetworkQualityWithCompletionHandler:(id)arg0 ;


@end


#endif