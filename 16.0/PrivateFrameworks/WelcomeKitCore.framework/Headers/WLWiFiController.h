// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLWIFICONTROLLER_H
#define WLWIFICONTROLLER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WLWiFiManager.h"
#import "WLWiFiNetwork.h"
#import "WLNETRBClient.h"

@interface WLWiFiController : NSObject {
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSUInteger _lastRequestID;
    WLWiFiManager *_wifiManager;
    BOOL _didConsultPreferencesForStartedNetwork;
    WLWiFiNetwork *_startedNetwork;
    WLNETRBClient *_netrbClient;
}


@property (readonly, nonatomic) BOOL hasSoftAPCapability;


+(id)sharedInstance;
-(BOOL)isIPAddressInRange:(id)arg0 ;
-(NSUInteger)_newRequestID;
-(id)_initWithWiFiManager:(id)arg0 netrbClient:(id)arg1 ;
-(id)_networkRecordFromSSID:(id)arg0 password:(id)arg1 channel:(id)arg2 ;
-(id)_startedNetwork;
-(id)init;
-(void)_disableSoftAPWithCompletion:(id)arg0 ;
-(void)_enableSoftAPWithSSID:(id)arg0 password:(id)arg1 channel:(id)arg2 completion:(id)arg3 ;
-(void)_ensureStartedNetworkReflectsPreferences;
-(void)_startWiFiWithSSID:(id)arg0 password:(id)arg1 channel:(id)arg2 completion:(id)arg3 ;
-(void)_stopWiFiWithCompletion:(id)arg0 ;
-(void)disableSoftAPWithCompletion:(id)arg0 ;
-(void)enableSoftAPWithSSID:(id)arg0 password:(id)arg1 channel:(id)arg2 completion:(id)arg3 ;


@end


#endif