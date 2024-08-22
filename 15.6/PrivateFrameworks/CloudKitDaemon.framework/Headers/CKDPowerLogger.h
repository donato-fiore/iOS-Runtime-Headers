// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDPOWERLOGGER_H
#define CKDPOWERLOGGER_H

@class NSString;
@protocol CKDSystemAvailabilityWatcher;

#import <Foundation/Foundation.h>


@interface CKDPowerLogger : NSObject <CKDSystemAvailabilityWatcher>



@property (nonatomic, getter=isActivityRegistered) BOOL activityRegistered; // ivar: _activityRegistered
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger stateHandle; // ivar: _stateHandle
@property (readonly) Class superclass;


+(BOOL)isEnabled;
+(id)sharedLogger;
-(BOOL)systemAvailabilityChanged:(NSUInteger)arg0 ;
-(id)init;
-(void)_cacheFlush;
-(void)_registerCacheFlushActivity;
-(void)_unregisterCacheFlushActivity;
-(void)cacheOperationCombinedMetrics:(id)arg0 forOperationID:(id)arg1 operationType:(NSInteger)arg2 operationGroupID:(id)arg3 operationGroupName:(id)arg4 operationGroupQuantity:(NSUInteger)arg5 operationQualityOfService:(NSInteger)arg6 appContainerTuple:(id)arg7 ;
-(void)dealloc;
-(void)logOperationCombinedMetrics:(id)arg0 forOperationID:(id)arg1 operationType:(NSInteger)arg2 operationGroupID:(id)arg3 operationGroupName:(id)arg4 operationGroupQuantity:(NSUInteger)arg5 operationQualityOfService:(NSInteger)arg6 appContainerTuple:(id)arg7 ;
-(void)registerPowerLoggingXPCActivity;


@end


#endif