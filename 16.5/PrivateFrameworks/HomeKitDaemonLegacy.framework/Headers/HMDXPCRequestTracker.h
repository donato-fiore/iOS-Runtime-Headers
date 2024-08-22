// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDXPCREQUESTTRACKER_H
#define HMDXPCREQUESTTRACKER_H

@class HMFObject, HMFTimer, NSString, NSMutableDictionary, NSSet;
@protocol HMFTimerDelegate, OS_dispatch_queue;



@interface HMDXPCRequestTracker : HMFObject <HMFTimerDelegate>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
    HMFTimer *_timer;
}


@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *pendingRequests; // ivar: _pendingRequests
@property (readonly, copy) NSSet *requestIdentifiers;
@property (readonly) Class superclass;


-(BOOL)containsMessageWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)__sendReponseForRequest:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)addRequestWithIdentifier:(id)arg0 messageName:(id)arg1 qualityOfService:(NSInteger)arg2 responseHandler:(id)arg3 ;
-(void)clear;
-(void)removeRequestWithIdentifier:(id)arg0 response:(id)arg1 error:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif