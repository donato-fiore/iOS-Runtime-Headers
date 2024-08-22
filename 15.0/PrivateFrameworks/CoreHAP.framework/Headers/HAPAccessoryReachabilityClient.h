// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYREACHABILITYCLIENT_H
#define HAPACCESSORYREACHABILITYCLIENT_H

@class HMFObject, HMFTimer, NSString;
@protocol HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient, HAPAccessoryReachabilityDelegate, HAPAccessoryReachabilityProfile;


#import "HAP2SerializedOperationQueue.h"
#import "HAP2PropertyLock.h"
#import "HAPDeviceID.h"

@interface HAPAccessoryReachabilityClient : HMFObject <HMFLogging, HMFTimerDelegate, HAPAccessoryReachabilityClient>

 {
    HAP2SerializedOperationQueue *_operationQueue;
    HAP2PropertyLock *_propertyLock;
    HAPDeviceID *_identifier;
    HMFTimer *_activityTimer;
}


@property (readonly, nonatomic) CGFloat confirmInterval; // ivar: _confirmInterval
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HAPAccessoryReachabilityDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSObject<HAPAccessoryReachabilityProfile> *profile; // ivar: _profile
@property (nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)logCategory;
+(id)new;
+(id)shortDescription;
+(void)initialize;
-(BOOL)isRunning;
-(id)init;
-(id)initWithIdentifier:(id)arg0 profile:(id)arg1 operationQueue:(id)arg2 ;
-(id)shortDescription;
-(void)_enterState:(NSInteger)arg0 ;
-(void)_poll;
-(void)_processProfile;
-(void)_runStateMachine;
-(void)_stop;
-(void)_timerDidFire:(id)arg0 ;
-(void)_wait;
-(void)confirm;
-(void)kick;
-(void)startWithCompletionHandler:(id)arg0 ;
-(void)stopWithCompletionHandler:(id)arg0 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif