// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSUDISPATCHLOCK_H
#define TSUDISPATCHLOCK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSUDispatchLock : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingQueue; // ivar: _underlyingQueue


-(id)init;
-(id)initWithLabel:(id)arg0 ;
-(void)assertHasReadLock;
-(void)assertHasWriteLock;
-(void)performAsynchronousRead:(id)arg0 ;
-(void)performAsynchronousWrite:(id)arg0 ;
-(void)performSynchronousRead:(id)arg0 ;
-(void)performSynchronousWrite:(id)arg0 ;


@end


#endif