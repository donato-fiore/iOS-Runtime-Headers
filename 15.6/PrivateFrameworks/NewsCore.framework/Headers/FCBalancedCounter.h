// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCBALANCEDCOUNTER_H
#define FCBALANCEDCOUNTER_H

@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FCBalancedCounter : NSObject

@property (nonatomic) NSInteger count; // ivar: _count
@property (retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // ivar: _dispatchGroup
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock


-(id)init;
-(void)_bumpCounterPositively:(BOOL)arg0 ;
-(void)decrement;
-(void)increment;
-(void)notifyWhenCountReachesZeroOnQueue:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif