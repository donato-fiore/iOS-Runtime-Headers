// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APUNFAIRLOCK_H
#define APUNFAIRLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface APUnfairLock : NSObject <NSLocking>



@property (nonatomic) os_unfair_lock_s unfairLock; // ivar: _unfairLock
@property (nonatomic) unsigned int unfairLockOptions; // ivar: _unfairLockOptions


-(id)initWithOptions:(NSInteger)arg0 ;
-(void)lock;
-(void)unlock;


@end


#endif