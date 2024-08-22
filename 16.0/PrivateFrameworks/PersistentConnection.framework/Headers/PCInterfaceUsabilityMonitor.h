// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCINTERFACEUSABILITYMONITOR_H
#define PCINTERFACEUSABILITYMONITOR_H

@class CUTWeakReference, NSMutableArray, NSRecursiveLock, NSString;
@protocol PCInterfaceUsabilityMonitorProtocol, OS_dispatch_queue, OS_nw_parameters, OS_nw_path_evaluator, OS_nw_interface, PCInterfaceUsabilityMonitorDelegate;

#import <Foundation/Foundation.h>


@interface PCInterfaceUsabilityMonitor : NSObject <PCInterfaceUsabilityMonitorProtocol>

 {
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_scQueue;
    NSInteger _interfaceIdentifier;
    CUTWeakReference *_delegateReference;
    NSObject<OS_nw_parameters> *_pathParameters;
    NSObject<OS_nw_path_evaluator> *_evaluator;
    NSObject<OS_nw_interface> *_lastInterface;
    NSObject<OS_nw_interface> *_lastDelegateInterface;
    BOOL _isPathSatisfied;
    *void _dynamicStore;
    *__CFString _lqKey;
    int _linkQuality;
    BOOL _trackUsability;
    NSUInteger _thresholdOffTransitionCount;
    CGFloat _trackedTimeInterval;
    NSMutableArray *_offTransitions;
    NSRecursiveLock *_recursiveLock;
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


+(BOOL)isBadLinkQuality:(int)arg0 ;
+(BOOL)isPoorLinkQuality:(int)arg0 ;
+(id)stringForLinkQuality:(int)arg0 ;
-(BOOL)_createLinkQualityMonitor:(BOOL)arg0 ;
-(id)currentInterfaceName;
-(id)init;
-(id)initWithInterfaceIdentifier:(NSInteger)arg0 delegateQueue:(id)arg1 ;
-(void)_callDelegateWithBlock:(id)arg0 ;
-(void)_createPathEvaluator;
-(void)_dynamicStoreCallback:(id)arg0 ;
-(void)_dynamicStoreCallbackForKeys:(id)arg0 ;
-(void)_flushStaleTransitions;
-(void)_pathUpdate:(id)arg0 ;
-(void)_processLinkQualityUpdateWithChangedKey:(id)arg0 updatedLinkQuality:(int)arg1 ;
-(void)_unscheduleLinkQualityMonitor;
-(void)_unschedulePathEvaluator;
-(void)_updateOffTransitionsForLinkQualityChange;
-(void)_updatePathParameters;
-(void)dealloc;
-(void)setThresholdOffTransitionCount:(NSUInteger)arg0 ;
-(void)setTrackUsability:(BOOL)arg0 ;
-(void)setTrackedTimeInterval:(CGFloat)arg0 ;


@end


#endif