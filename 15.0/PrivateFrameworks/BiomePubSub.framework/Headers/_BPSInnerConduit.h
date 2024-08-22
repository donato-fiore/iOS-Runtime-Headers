// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BPSINNERCONDUIT_H
#define _BPSINNERCONDUIT_H

@protocol BPSSubscriber;


#import "BMBookmarkableSubscription.h"
#import "BPSPassThroughSubject.h"

@interface _BPSInnerConduit : BMBookmarkableSubscription {
    os_unfair_lock_s _lock;
    os_unfair_recursive_lock_s _downstreamLock;
}


@property (nonatomic) NSInteger demand; // ivar: _demand
@property (retain, nonatomic) NSObject<BPSSubscriber> *downstream; // ivar: _downstream
@property (nonatomic) NSInteger identity; // ivar: _identity
@property (retain, nonatomic) BPSPassThroughSubject *parent; // ivar: _parent
@property (nonatomic) BOOL released; // ivar: _released


-(id)initWithParent:(id)arg0 downstream:(id)arg1 ;
-(id)upstreamSubscriptions;
-(void)assignIdentity:(NSInteger)arg0 ;
-(void)cancel;
-(void)finishWithCompletion:(id)arg0 ;
-(void)offerInput:(id)arg0 ;
-(void)requestDemand:(NSInteger)arg0 ;


@end


#endif