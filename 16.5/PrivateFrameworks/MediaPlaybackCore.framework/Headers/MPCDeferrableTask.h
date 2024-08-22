// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCDEFERRABLETASK_H
#define MPCDEFERRABLETASK_H

@class MSVBlockGuard, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPCDeferrableTask : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) BOOL deallocating; // ivar: _deallocating
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (retain, nonatomic) MSVBlockGuard *guard; // ivar: _guard
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(BOOL)cancel;
-(id)description;
-(id)initWithIdentifier:(id)arg0 timeout:(CGFloat)arg1 queue:(id)arg2 block:(id)arg3 ;
-(void)dealloc;
-(void)execute:(NSInteger)arg0 ;
-(void)taskDidExecute;


@end


#endif