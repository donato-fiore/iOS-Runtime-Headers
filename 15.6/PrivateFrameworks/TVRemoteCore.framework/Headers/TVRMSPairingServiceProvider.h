// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVRMSPAIRINGSERVICEPROVIDER_H
#define TVRMSPAIRINGSERVICEPROVIDER_H

@class NSMutableDictionary, NSArray;


#import "TVRMSBonjourServiceProvider.h"

@interface TVRMSPairingServiceProvider : TVRMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
    NSMutableDictionary *_monitoredServices;
}


@property (retain, nonatomic) NSArray *pairedNetworkNames; // ivar: _pairedNetworkNames


-(NSInteger)serviceDiscoverySource;
-(NSInteger)serviceLegacyFlagsFromTXTDictionary:(id)arg0 ;
-(id)init;
-(id)searchType;
-(void)dealloc;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;


@end


#endif