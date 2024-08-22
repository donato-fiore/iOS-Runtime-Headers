// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMREADWRITELOCK_H
#define FMREADWRITELOCK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FMReadWriteLock : NSObject

@property (nonatomic) _opaque_pthread_rwlock_t lock; // ivar: _lock
@property (retain, nonatomic) NSString *lockName; // ivar: _lockName


-(id)init;
-(id)initWithLockName:(id)arg0 ;
-(void)performWithReadLock:(id)arg0 ;
-(void)performWithWriteLock:(id)arg0 ;


@end


#endif