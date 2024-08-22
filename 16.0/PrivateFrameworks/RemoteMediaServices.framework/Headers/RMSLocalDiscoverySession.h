// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMSLOCALDISCOVERYSESSION_H
#define RMSLOCALDISCOVERYSESSION_H

@class NSMutableSet, NSArray, NSString;
@protocol RMSServiceProviderDelegate, RMSDiscoverySession, RMSDiscoverySessionDelegate;

#import <Foundation/Foundation.h>

#import "Reachability.h"

@interface RMSLocalDiscoverySession : NSObject <RMSServiceProviderDelegate, RMSDiscoverySession>

 {
    Reachability *_reachability;
    NSMutableSet *_availableServices;
    NSArray *_providers;
}


@property (readonly, nonatomic) NSArray *availableServices;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<RMSDiscoverySessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger discoveryTypes; // ivar: _discoveryTypes
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isNetworkAvailable) BOOL networkAvailable; // ivar: _networkAvailable
@property (retain, nonatomic) NSArray *pairedNetworkNames; // ivar: _pairedNetworkNames
@property (readonly) Class superclass;


-(id)_providerForDiscoveryType:(NSInteger)arg0 ;
-(id)init;
-(void)_enableProviders;
-(void)_handleHSGroupIDDidChangeNotification:(id)arg0 ;
-(void)_handleReachabilityChangedNotification:(id)arg0 ;
-(void)_updateWifiAvailability;
-(void)beginDiscovery;
-(void)dealloc;
-(void)endDiscovery;
-(void)serviceProvider:(id)arg0 serviceDidBecomeAvailable:(id)arg1 ;
-(void)serviceProvider:(id)arg0 serviceDidBecomeUnavailable:(id)arg1 ;


@end


#endif