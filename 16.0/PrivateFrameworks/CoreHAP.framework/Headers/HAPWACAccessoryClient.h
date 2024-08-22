// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPWACACCESSORYCLIENT_H
#define HAPWACACCESSORYCLIENT_H

@class HMFObject, NSMutableSet, NSDictionary, NSString, NSDate;
@protocol HMFLogging, HAPWACAccessoryClientDelegate, OS_dispatch_queue;


#import "HAPWACAccessoryBrowser.h"
#import "HAPEasyConfigDevice.h"
#import "HAPWACAccessory.h"
#import "HAPAccessoryServer.h"

@interface HAPWACAccessoryClient : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, weak, nonatomic) HAPWACAccessoryBrowser *brower; // ivar: _brower
@property (readonly, weak, nonatomic) NSObject<HAPWACAccessoryClientDelegate> *clientDelegate; // ivar: _clientDelegate
@property (readonly, nonatomic) NSMutableSet *compatible2Pt4Networks; // ivar: _compatible2Pt4Networks
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (nonatomic) CGFloat configurationLatency; // ivar: _configurationLatency
@property (retain, nonatomic) NSDictionary *currentNetworkInfo; // ivar: _currentNetworkInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HAPEasyConfigDevice *ezConfigDevice; // ivar: _ezConfigDevice
@property (readonly, nonatomic) HAPWACAccessory *hapWACAccessory; // ivar: _hapWACAccessory
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat joinLatency; // ivar: _joinLatency
@property (nonatomic) BOOL metricSubmitted; // ivar: _metricSubmitted
@property (nonatomic) CGFloat postConfigDiscoveryTime; // ivar: _postConfigDiscoveryTime
@property (nonatomic) CGFloat preConfigDiscoveryTime; // ivar: _preConfigDiscoveryTime
@property (copy, nonatomic) id *restartEasyConfigBlock; // ivar: _restartEasyConfigBlock
@property (nonatomic) NSUInteger restartPairingCount; // ivar: _restartPairingCount
@property (nonatomic) CGFloat restoreLatency; // ivar: _restoreLatency
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (readonly, weak, nonatomic) HAPAccessoryServer *server; // ivar: _server
@property (nonatomic) CGFloat setupCodeDelay; // ivar: _setupCodeDelay
@property (retain, nonatomic) NSDate *setupCodeRequestTime; // ivar: _setupCodeRequestTime
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_setupEeasyConfigWithDeviceInfo:(id)arg0 ;
-(id)continuePairingWithSetupCode:(id)arg0 ;
-(id)init;
-(id)initWithWACAccessory:(id)arg0 server:(id)arg1 browser:(id)arg2 compatible2Pt4Networks:(id)arg3 ;
-(id)joinAccessoryNetworkWithCompletion:(id)arg0 ;
-(id)logIdentifier;
-(id)performEasyConfigWithParingPrompt:(*unk)arg0 performPairSetup:(BOOL)arg1 isSplit:(BOOL)arg2 pairingRequest:(id)arg3 completion:(id)arg4 ;
-(id)restoreNetworkWithCompletion:(id)arg0 ;
// -(void)_callJoinCompletion:(id)arg0 withError:(unk)arg1  ;
// -(void)_callRestoreCompletion:(id)arg0 withError:(unk)arg1  ;
-(void)_continuePairingWithSetupCode:(id)arg0 ;
-(void)_joinAccessory:(id)arg0 completion:(id)arg1 ;
-(void)_joinAccessoryNetworkWithCompletion:(id)arg0 ;
-(void)_joinCompleteWithStatus:(int)arg0 ;
-(void)_performEasyConfigWithPairingPrompt:(*unk)arg0 performPairSetup:(BOOL)arg1 isSplit:(BOOL)arg2 pairingRequest:(id)arg3 completion:(id)arg4 ;
-(void)_performPostConfig;
-(void)_reportProgress:(NSUInteger)arg0 ;
-(void)_restoreNetworkWithCompletion:(id)arg0 ;
-(void)_retoreNetworkAndReportError:(id)arg0 withCompletion:(id)arg1 ;
-(void)dumpStatsWithError:(id)arg0 ;
-(void)registerClientDelegate:(id)arg0 ;
-(void)restart;
-(void)stopEasyConfig;


@end


#endif