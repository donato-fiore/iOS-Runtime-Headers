// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRICORENETWORKMANAGER_H
#define SIRICORENETWORKMANAGER_H

@class NSHashTable, CoreTelephonyClient, NSString, NSNumber, WRM_iRATInterface;
@protocol CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate, OS_dispatch_queue, OS_nw_path_evaluator;

#import <Foundation/Foundation.h>

#import "SiriCoreWiFiManagerClient.h"
#import "SiriCoreLinkRecommendationInfo.h"

@interface SiriCoreNetworkManager : NSObject <CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, CoreTelephonyClientSubscriberDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;
    int _pathStatus;
    BOOL _pathUsesCellular;
    SiriCoreWiFiManagerClient *_wiFiManagerClient;
    BOOL _hasSymptomsBasedInstantCellQuality;
    BOOL _symptomsBasedInstantCellQualityIsGood;
    BOOL _hasSymptomsBasedInstantWiFiQuality;
    BOOL _symptomsBasedInstantWiFiQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalCellQuality;
    BOOL _symptomsBasedHistoricalCellQualityIsGood;
    BOOL _hasSymptomsBasedHistoricalWiFiQuality;
    BOOL _symptomsBasedHistoricalWiFiQualityIsGood;
    BOOL _lastFetchInProgress;
    os_unfair_lock_s _ctLock;
    CoreTelephonyClient *_coreTelephonyClient;
    NSInteger _lastDataSubscriptionSlot;
    NSString *_subscriptionSlotOneStatus;
    NSString *_subscriptionSlotTwoStatus;
    CGFloat _lastSuccessfulSymptomsFetch;
    NSNumber *_lastSignalStrength;
    NSUInteger _subscriptionCount;
    NSString *_carrierName;
    WRM_iRATInterface *_interface;
    BOOL _iRATCallInProgress;
    NSUInteger _iRATCallNumber;
    CGFloat _lastiRATFetch;
    SiriCoreLinkRecommendationInfo *_linkRecommendationInfo;
    SiriCoreLinkRecommendationInfo *_linkMetricsInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)connectionSubTypeForCellularInterface;
+(NSInteger)connectionTypeForInterface:(id)arg0 ;
+(id)connectionTypeForInterfaceName:(id)arg0 isCellular:(BOOL)arg1 ;
+(id)sharedInstance;
+(void)_ifnameTypeForName:(char *)arg0 isWiFi:(*BOOL)arg1 isCellular:(*BOOL)arg2 ;
+(void)acquireDormancySuspendAssertion:(**void)arg0 ;
+(void)getCarrierName:(*id)arg0 signalStrength:(*id)arg1 subscriptionCount:(*id)arg2 ;
+(void)releaseDormancySuspendAssertion:(*void)arg0 ;
-(BOOL)_defaultBTLinkRecommendation;
-(BOOL)_defaultWiFiLinkRecommendation;
-(BOOL)_getConnectionSuccessRate:(id)arg0 hasMetric:(*BOOL)arg1 ;
-(NSInteger)_reportCellularHistoricalQuality;
-(NSInteger)_reportCellularInstantQuality;
-(NSInteger)_reportWiFiHistoricalQuality;
-(NSInteger)_reportWiFiInstantQuality;
-(NSInteger)anyNetworkQuality;
-(NSInteger)cellularNetworkQuality;
-(NSInteger)wifiNetworkQuality;
-(id)_init;
-(id)_wiFiManagerClient;
-(void)_dataSubscriptionContextChange:(id)arg0 ;
-(void)_getCarrierName:(*id)arg0 ;
-(void)_getLinkRecommendationSafe:(BOOL)arg0 recommendation:(id)arg1 ;
-(void)_getNetworkPerformanceFeed;
-(void)_pathUpdated:(id)arg0 ;
-(void)_stopMonitoringNetwork;
-(void)_subscribeToLinkRecommendations:(id)arg0 ;
-(void)acquireWiFiAssertion:(NSInteger)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)deRegisterWithWirelessCoexManager;
-(void)dealloc;
-(void)forceFastDormancy;
-(void)getLinkRecommendation:(BOOL)arg0 recommendation:(id)arg1 ;
-(void)getNetworkPerformanceFeed;
-(void)getQualityReport:(id)arg0 ;
-(void)getSignalStrength:(*id)arg0 subscriptionCount:(*NSUInteger)arg1 ;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)registerWithWirelessCoexManager;
-(void)releaseWiFiAssertion;
-(void)removeObserver:(id)arg0 ;
-(void)resetLinkMetrics;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;
-(void)startMonitoringNetworkForHost:(id)arg0 ;
-(void)stopMonitoringNetwork;
-(void)updateLinkMetrics:(id)arg0 completion:(id)arg1 ;


@end


#endif