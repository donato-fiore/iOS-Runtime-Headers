// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUNETWORKMONITOR_H
#define SUNETWORKMONITOR_H

@class NSHashTable, CoreTelephonyClient, NWPathEvaluator, NSString;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SUNetworkMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientCarrierBundleDelegate, CoreTelephonyClientDataDelegate>

 {
    *__SCNetworkReachability _reachability;
    NSHashTable *_observers;
    int _currentNetworkType;
    int _currentCellularType;
    BOOL _roaming;
    CoreTelephonyClient *_ctClient;
    NSObject<OS_dispatch_queue> *_ctQueue;
    NWPathEvaluator *_pathEvaluator;
    int _overriddenCurrentNetworkType;
    int _overriddenCurrentCellularType;
    BOOL _overriddenRoaming;
    BOOL _overriddenExpensive;
    BOOL _pathSatisfied;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)holdsWiFiAssertion;
+(id)sharedInstance;
+(void)setHoldsWiFiAssertion:(BOOL)arg0 ;
-(BOOL)_isCurrentlyRoaming;
-(BOOL)_overriddenByPreferences;
-(BOOL)isBootstrap;
-(BOOL)isCellularDataRoamingEnabled;
-(BOOL)isCellularRoaming;
-(BOOL)isCurrentNetworkTypeCellular;
-(BOOL)isCurrentNetworkTypeExpensive;
-(BOOL)isNetworkTypeCellular:(int)arg0 ;
-(BOOL)isPathSatisfied;
-(BOOL)usingWifi;
-(id)init;
-(id)telephonyClient;
-(int)_networkTypeFromCurrentCellularData;
-(int)_networkTypeFromCurrentCellularDataRespectingWifiAssist:(BOOL)arg0 ;
-(int)_networkTypeFromCurrentCellularDataWithError:(*id)arg0 ;
-(int)_networkTypeFromFlags:(unsigned int)arg0 ;
-(int)_queue_currentCellularType;
-(int)_queue_currentNetworkType;
-(int)currentCellularType;
-(int)currentNetworkType;
-(void)_carrierBundleChanged;
-(void)_initNetworkObservation;
-(void)_operatorBundleChanged;
-(void)_resetCtClient;
-(void)addObserver:(id)arg0 ;
-(void)carrierBundleChange:(id)arg0 ;
-(void)dealloc;
-(void)detectOverriddenNetwork;
-(void)displayStatusChanged:(id)arg0 status:(id)arg1 ;
-(void)internetDataStatus:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)operatorBundleChange:(id)arg0 ;
-(void)refreshCellularType;
-(void)refreshNetworkAndCellularTypesWithFlags:(unsigned int)arg0 ;
-(void)refreshNetworkTypeWithFlags:(unsigned int)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)setCellularRoaming:(BOOL)arg0 ;
-(void)setCurrentCellularType:(int)arg0 ;
-(void)setCurrentNetworkType:(int)arg0 ;


@end


#endif