// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSCONTROLLER_H
#define TPSCONTROLLER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TPSController : NSObject

@property (nonatomic) os_unfair_lock_s delegateLock; // ivar: _delegateLock
@property (readonly, nonatomic) NSMapTable *delegateToQueue; // ivar: _delegateToQueue


-(id)init;
-(void)addDelegate:(id)arg0 queue:(id)arg1 ;
-(void)performAtomicDelegateBlock:(id)arg0 ;
-(void)removeDelegate:(id)arg0 ;


@end


#endif