// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREFETCHHELPER_H
#define HMDNETWORKROUTERFIREWALLRULEMANAGERBACKINGSTOREFETCHHELPER_H

@class HMFObject, NAPromise, HMFActivity, NSString, CKOperationGroup, NSDate, HMBProcessingOptions;
@protocol HMFLogging;



@interface HMDNetworkRouterFirewallRuleManagerBackingStoreFetchHelper : HMFObject <HMFLogging>

 {
    NAPromise *_promise;
}


@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CKOperationGroup *operationGroup; // ivar: _operationGroup
@property (retain, nonatomic) NSDate *operationStartTime; // ivar: _operationStartTime
@property (readonly, nonatomic) HMBProcessingOptions *options; // ivar: _options
@property (nonatomic) NSUInteger retryCount; // ivar: _retryCount
@property (nonatomic) CGFloat retryIntervalSeconds; // ivar: _retryIntervalSeconds
@property (nonatomic) BOOL shouldRetry;
@property (readonly) Class superclass;


+(NSUInteger)__integerForPreferenceKey:(id)arg0 defaultValue:(NSUInteger)arg1 ;
+(NSUInteger)maxOperationDurationSeconds;
+(NSUInteger)maxRetryCount;
+(id)logCategory;
-(id)initWithActivity:(id)arg0 options:(id)arg1 container:(id)arg2 useAnonymousRequests:(BOOL)arg3 promise:(id)arg4 ;
-(void)dealloc;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithResult:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;


@end


#endif