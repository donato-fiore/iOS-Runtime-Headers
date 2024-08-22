// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SDDIRTYIDLETIMER_H
#define SDDIRTYIDLETIMER_H

@protocol OS_dispatch_source, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>


@interface SDDirtyIdleTimer : NSObject

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) unsigned int dirtyCount; // ivar: _dirtyCount
@property (nonatomic) NSUInteger dirtyTimeout; // ivar: _dirtyTimeout
@property (nonatomic) NSUInteger idleStartTime; // ivar: _idleStartTime
@property (nonatomic) NSUInteger idleTimeout; // ivar: _idleTimeout
@property (retain, nonatomic) NSObject<OS_dispatch_source> *idleTimer; // ivar: _idleTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) unsigned int resetCount; // ivar: _resetCount
@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)description;
-(id)initWithQueue:(id)arg0 timeoutBlock:(id)arg1 ;
-(void)_stop;
-(void)cancel;
-(void)dirty;


@end


#endif