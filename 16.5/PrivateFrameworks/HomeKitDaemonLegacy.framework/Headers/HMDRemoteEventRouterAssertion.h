// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDREMOTEEVENTROUTERASSERTION_H
#define HMDREMOTEEVENTROUTERASSERTION_H

@class HMFObject;
@protocol HMFCancellable, HMDRemoteEventRouterClientActiveStateDelegate;



@interface HMDRemoteEventRouterAssertion : HMFObject <HMFCancellable>

 {
    os_unfair_lock_s _lock;
}


@property (weak, nonatomic) NSObject<HMDRemoteEventRouterClientActiveStateDelegate> *activeStateDelegate; // ivar: _activeStateDelegate
@property (nonatomic) BOOL isActive; // ivar: _isActive


-(id)initWithAssertionController:(id)arg0 ;
-(void)cancel;
-(void)dealloc;


@end


#endif