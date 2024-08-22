// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMSPAIRINGSERVICEPROVIDER_H
#define RMSPAIRINGSERVICEPROVIDER_H

@class NSMutableDictionary, NSArray;


#import "RMSBonjourServiceProvider.h"

@interface RMSPairingServiceProvider : RMSBonjourServiceProvider {
    NSMutableDictionary *_unmonitoredServices;
}


@property (retain, nonatomic) NSArray *pairedNetworkNames; // ivar: _pairedNetworkNames


-(NSInteger)serviceDiscoverySource;
-(NSInteger)serviceFlagsFromTXTDictionary:(id)arg0 ;
-(id)init;
-(id)searchType;
-(void)dealloc;
-(void)netServiceBrowser:(id)arg0 didFindService:(id)arg1 moreComing:(BOOL)arg2 ;


@end


#endif