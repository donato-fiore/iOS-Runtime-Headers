// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSDISCOVERYSESSIONPROXY_H
#define RMSDISCOVERYSESSIONPROXY_H

@class NSArray, NSString;
@protocol RMSDiscoverySession, RMSDiscoverySessionDelegate;


#import "RMSSessionProxy.h"
#import "RMSIDSClient.h"

@interface RMSDiscoverySessionProxy : RMSSessionProxy <RMSDiscoverySession>

 {
    RMSIDSClient *_idsClient;
    NSInteger _retryRate;
    BOOL _discovering;
    BOOL _wifiAvailable;
}


@property (readonly, nonatomic) NSArray *availableServices; // ivar: _availableServices
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSDiscoverySessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger discoveryTypes; // ivar: _discoveryTypes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable; // ivar: _networkAvailable
@property (retain, nonatomic) NSArray *pairedNetworkNames; // ivar: _pairedNetworkNames
@property (readonly) Class superclass;


-(id)init;
-(void)_availableServicesDidUpdateNotification:(id)arg0 ;
-(void)_companionAvailabilityDidChange:(id)arg0 ;
-(void)_handleSessionDidEndNotification:(id)arg0 ;
-(void)_updateNetworkAvailability;
-(void)_wifiAvailabilityDidChange:(id)arg0 ;
-(void)beginDiscovery;
-(void)dealloc;
-(void)endDiscovery;
-(void)heartbeatDidFail;


@end


#endif