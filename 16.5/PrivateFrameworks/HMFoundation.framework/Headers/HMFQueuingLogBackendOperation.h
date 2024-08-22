// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFQUEUINGLOGBACKENDOPERATION_H
#define HMFQUEUINGLOGBACKENDOPERATION_H

@class NSOperation, NSArray, NSString, NSUUID;
@protocol HMFRTCSessionFactory;



@interface HMFQueuingLogBackendOperation : NSOperation {
    os_unfair_lock_s _lock;
    NSInteger _operationState;
}


@property (readonly, nonatomic) BOOL isRealtime; // ivar: _isRealtime
@property (readonly, nonatomic) NSArray *messages; // ivar: _messages
@property (readonly, nonatomic) NSObject<HMFRTCSessionFactory> *rtcFactory; // ivar: _rtcFactory
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID
@property (readonly, nonatomic) id *staleSessionBlock; // ivar: _staleSessionBlock


+(id)logCategory;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)initWithMessages:(id)arg0 serviceName:(id)arg1 sessionUUID:(id)arg2 isRealtime:(BOOL)arg3 rtcFactory:(id)arg4 staleSessionBlock:(id)arg5 ;
-(void)changeOperationState:(NSInteger)arg0 ;
-(void)start;


@end


#endif