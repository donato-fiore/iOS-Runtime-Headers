// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCWWANUSABILITYMONITOR_H
#define PCWWANUSABILITYMONITOR_H

@class CUTWeakReference, NSString, CoreTelephonyClient, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PCInterfaceUsabilityMonitor.h"

@interface PCWWANUsabilityMonitor : NSObject <CoreTelephonyClientDataDelegate, PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    BOOL _isInCall;
    BOOL _isInHighPowerState;
    BOOL _trackUsability;
    NSUInteger _thresholdOffTransitionCount;
    CGFloat _trackedTimeInterval;
    NSString *_interfaceName;
    PCInterfaceUsabilityMonitor *_interfaceMonitor;
    unsigned int _currentDataBearerSoMask;
    int _powerlogCDRXToken;
    *__CTServerConnection _ctServerConnection;
    CoreTelephonyClient *_ctClient;
    int _wwanContextID;
    NSObject<OS_dispatch_queue> *_ctServerQueue;
    CTXPCServiceSubscriptionContext *_currentDataSimContext;
}


@property (readonly, nonatomic) int currentRAT; // ivar: _currentRAT
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<PCInterfaceUsabilityMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger interface5GMode;
@property (readonly, nonatomic) NSInteger interfaceIdentifier;
@property (readonly, nonatomic) BOOL isBadLinkQuality;
@property (readonly, nonatomic) BOOL isInterfaceHistoricallyUsable;
@property (readonly, nonatomic) BOOL isInterfaceUsable;
@property (readonly, nonatomic) BOOL isInternetReachable;
@property (readonly, nonatomic) BOOL isLTEWithCDRX;
@property (readonly, nonatomic) BOOL isNetworkingPowerExpensiveToUse;
@property (readonly, nonatomic) BOOL isPoorLinkQuality;
@property (readonly, nonatomic) BOOL isRadioHot;
@property (readonly, nonatomic) int linkQuality;
@property (readonly, retain, nonatomic) NSString *linkQualityString;
@property (readonly, nonatomic) NSString *networkCode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) *__CFString wwanInterfaceName;


-(BOOL)_isCurrentDataSimContextOnIvarQueue:(id)arg0 ;
-(id)_currentDataSimContext;
-(id)initWithDelegateQueue:(id)arg0 ;
-(void)_adjustInterfaceNameForWWANContextID:(int)arg0 interfaceName:(id)arg1 forContext:(id)arg2 ;
-(void)_callDelegateOnIvarQueueWithBlock:(id)arg0 ;
-(void)_forwardConfigurationOnIvarQueue;
-(void)_processCallStatusChanged:(id)arg0 ;
-(void)_processDataConnectionStatus:(id)arg0 forContext:(id)arg1 ;
-(void)_processDataStatus:(id)arg0 forContext:(id)arg1 ;
-(void)_setupWWANMonitor;
-(void)connectionStateChanged:(id)arg0 connection:(int)arg1 dataConnectionStatusInfo:(id)arg2 ;
-(void)currentDataSimChanged:(id)arg0 ;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1 ;
-(void)interfaceReachabilityChanged:(id)arg0 ;
-(void)setThresholdOffTransitionCount:(NSUInteger)arg0 ;
-(void)setTrackUsability:(BOOL)arg0 ;
-(void)setTrackedTimeInterval:(CGFloat)arg0 ;


@end


#endif