// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PPNOTIFICATIONHANDLER_H
#define PPNOTIFICATIONHANDLER_H

@class _PASLock, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPNotificationHandler : NSObject {
    _PASLock *_lock;
    NSObject<OS_dispatch_queue> *_waiterQueue;
}


@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) CGFloat waitSeconds; // ivar: _waitSeconds


-(id)description;
-(id)initWithName:(id)arg0 waitSeconds:(CGFloat)arg1 ;
-(void)_delayedExecutionAfterSeconds:(CGFloat)arg0 ;
-(void)_executeBlocksWithGuardedData:(id)arg0 ;
// -(void)addObserverBlock:(id)arg0 forLifetimeOfObject:(unk)arg1  ;
-(void)fireWithObjects:(id)arg0 ;
-(void)waitOnQueueToDrain;


@end


#endif