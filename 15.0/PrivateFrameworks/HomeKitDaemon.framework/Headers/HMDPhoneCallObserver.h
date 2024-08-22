// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDPHONECALLOBSERVER_H
#define HMDPHONECALLOBSERVER_H

@class HMFObject, NSString, HMFUnfairLock, CXCallObserver;
@protocol CXCallObserverDelegate;



@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFUnfairLock *lock; // ivar: _lock
@property (readonly) CXCallObserver *observer; // ivar: _observer
@property (readonly) Class superclass;


+(id)sharedPhoneCallObserver;
-(BOOL)hasActiveCalls;
-(BOOL)isActiveCall:(id)arg0 ;
-(id)init;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)startObserving;


@end


#endif