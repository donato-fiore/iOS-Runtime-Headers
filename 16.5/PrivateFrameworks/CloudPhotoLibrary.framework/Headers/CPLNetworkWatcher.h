// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPLNETWORKWATCHER_H
#define CPLNETWORKWATCHER_H

@class RadiosPreferences, NSString;
@protocol RadiosPreferencesDelegate, OS_dispatch_queue, OS_nw_path_monitor, CPLNetworkWatcherDelegate;

#import <Foundation/Foundation.h>

#import "CPLNetworkState.h"

@interface CPLNetworkWatcher : NSObject <RadiosPreferencesDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_nw_path_monitor> *_monitor;
    *network_usage_policy_client_s _networkPolicyClient;
    RadiosPreferences *_radiosPreferences;
}


@property (weak, nonatomic) NSObject<CPLNetworkWatcherDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSString *endPoint; // ivar: _endPoint
@property (readonly, nonatomic) CPLNetworkState *networkState; // ivar: _networkState


-(BOOL)_isRestrictedPath:(id)arg0 policies:(id)arg1 ;
-(id)initWithQueue:(id)arg0 ;
-(void)_getCellularPolicyWithClient:(struct network_usage_policy_client_s *)arg0 ;
-(void)_updateAirplaneMode;
-(void)_updateCellularPolicy:(id)arg0 ;
-(void)_updateCellularPolicyFromPolicies:(id)arg0 ;
-(void)_updateNetworkState:(id)arg0 ;
-(void)airplaneModeChanged;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif