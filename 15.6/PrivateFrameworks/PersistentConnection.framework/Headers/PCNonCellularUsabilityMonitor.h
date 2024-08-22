// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCNONCELLULARUSABILITYMONITOR_H
#define PCNONCELLULARUSABILITYMONITOR_H

@class CUTWeakReference, NSString;
@protocol PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PCInterfaceUsabilityMonitor.h"

@interface PCNonCellularUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol, PCInterfaceUsabilityMonitorDelegate>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_queue> *_monitorDelegateQueue;
    CUTWeakReference *_delegateReference;
    NSString *_demoOverrideInterface;
    int _previousLinkQuality;
    BOOL _trackUsability;
    NSUInteger _thresholdOffTransitionCount;
    CGFloat _trackedTimeInterval;
    PCInterfaceUsabilityMonitor *_monitor;
}


@property (readonly, nonatomic) int currentRAT;
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


-(id)initWithDelegateQueue:(id)arg0 ;
-(void)_addMonitor;
-(void)_callDelegateOnIvarQueueWithBlock:(id)arg0 ;
-(void)_forwardConfigurationOnIvarQueue;
-(void)dealloc;
-(void)interfaceLinkQualityChanged:(id)arg0 previousLinkQuality:(int)arg1 ;
-(void)interfaceReachabilityChanged:(id)arg0 ;
-(void)setThresholdOffTransitionCount:(NSUInteger)arg0 ;
-(void)setTrackUsability:(BOOL)arg0 ;
-(void)setTrackedTimeInterval:(CGFloat)arg0 ;


@end


#endif