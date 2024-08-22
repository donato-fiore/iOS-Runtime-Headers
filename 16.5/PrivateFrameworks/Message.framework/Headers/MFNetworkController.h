// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFNETWORKCONTROLLER_H
#define MFNETWORKCONTROLLER_H

@class CXCallObserver, MFLock, RadiosPreferences, CoreTelephonyClient, AWDMailNetworkDiagnosticsReport, NSString, EFObservable;
@protocol RadiosPreferencesDelegate, CXCallObserverDelegate, EFCancelable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MFNetworkController : NSObject <RadiosPreferencesDelegate, CXCallObserverDelegate>

 {
    id<EFCancelable> *_stateCancelable;
    *__SCNetworkReachability _reachability;
    *__SCDynamicStore _store;
    *__CFRunLoopSource _store_source;
    CXCallObserver *_callObserver;
    MFLock *_lock;
    *__CFRunLoop _rl;
    unsigned int _flags;
    BOOL _hasDNS;
    NSUInteger _activeCalls;
    *__SCPreferences _wiFiPreferences;
    BOOL _hasCellDataCapability;
    BOOL _hasWiFiCapability;
    BOOL _isWiFiEnabled;
    BOOL _isRoamingAllowed;
    RadiosPreferences *_radiosPreferences;
    NSObject<OS_dispatch_queue> *_prefsQueue;
    int _symptomsToken;
    CoreTelephonyClient *_ctc;
    NSObject<OS_dispatch_queue> *_dataStatusQueue;
    BOOL _cellularDataAvailable;
    os_unfair_lock_s _dataStatusInitializerLock;
    BOOL _dataStatusInitialized;
    BOOL _callObserverInitialized;
}


@property (readonly, nonatomic) AWDMailNetworkDiagnosticsReport *awdNetworkDiagnosticReport;
@property (readonly) int dataIndicator; // ivar: _dataIndicator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL inAirplaneMode;
@property (readonly) BOOL is3GConnection;
@property (readonly) BOOL is4GConnection;
@property (readonly) BOOL isDataAvailable;
@property (readonly) BOOL isFatPipe;
@property (readonly) BOOL isNetworkUp;
@property (readonly) BOOL isOnWWAN;
@property (readonly, nonatomic) EFObservable *networkObservable;
@property (readonly) Class superclass;
@property (readonly) NSInteger transportType;
@property (readonly, nonatomic) EFObservable *wifiObservable;


// +(id)addNetworkObserverBlock:(id)arg0 queue:(unk)arg1  ;
+(id)networkAssertionWithIdentifier:(id)arg0 ;
+(id)observers;
+(id)sharedInstance;
+(id)signpostLog;
+(void)performExecuteOnObservers;
+(void)removeNetworkObserver:(id)arg0 ;
-(BOOL)_simulationOverrideForType:(NSUInteger)arg0 actualValue:(BOOL)arg1 ;
-(NSUInteger)signpostID;
-(id)_networkAssertionWithIdentifier:(id)arg0 ;
-(id)copyCarrierBundleValue:(id)arg0 ;
-(id)init;
-(int)dataStatus;
-(void)_carrierBundleDidChange;
-(void)_checkKeys:(id)arg0 forStore:(struct __SCDynamicStore *)arg1 ;
-(void)_handleWiFiNotification:(unsigned int)arg0 ;
-(void)_initializeDataStatus;
-(void)_registerStateCaptureHandler;
-(void)_resetDataStatusInitialized;
-(void)_setDataStatus_nts:(id)arg0 ;
-(void)_setFlags:(unsigned int)arg0 forReachability:(struct __SCNetworkReachability *)arg1 ;
-(void)_setupSymptoms;
-(void)_updateActiveCalls;
-(void)airplaneModeChanged;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)connectionActivationError:(id)arg0 connection:(int)arg1 error:(int)arg2 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)preferredDataSimChanged:(id)arg0 ;
-(void)simStatusDidChange:(id)arg0 status:(id)arg1 ;


@end


#endif