// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTORECLOUDFETCHSCHEDULER_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTORECLOUDFETCHSCHEDULER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate, OS_xpc_object;



@interface HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler : HMFObject <HMFLogging, HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchScheduler>



@property (readonly, nonatomic) CGFloat currentInterval; // ivar: _currentInterval
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDNetworkRouterFirewallRuleManagerBackingStoreCloudFetchSchedulerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (retain, nonatomic) NSObject<OS_xpc_object> *overrideCriteria; // ivar: _overrideCriteria
@property (readonly, nonatomic) CGFloat retryInterval; // ivar: _retryInterval
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (retain, nonatomic) NSObject<OS_xpc_object> *runningActivity; // ivar: _runningActivity
@property (readonly) Class superclass;


+(id)logCategory;
+(void)__unregisterActivity:(id)arg0 ;
-(id)__initialCriteria;
-(id)initWithIdentifier:(id)arg0 interval:(CGFloat)arg1 retryInterval:(CGFloat)arg2 delegate:(id)arg3 ;
-(void)__checkInActivity:(id)arg0 ;
-(void)__registerActivity;
-(void)__runActivity:(id)arg0 ;
-(void)__transitionActivity:(id)arg0 state:(NSInteger)arg1 ;
-(void)__unregisterActivity;
-(void)dealloc;
-(void)start;
-(void)stop;


@end


#endif