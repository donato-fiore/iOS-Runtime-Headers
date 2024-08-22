// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFUNFAIRLOCK_H
#define NFUNFAIRLOCK_H

@protocol NFLocking;

#import <Foundation/Foundation.h>


@interface NFUnfairLock : NSObject <NFLocking>

 {
    os_unfair_lock_s _unfairLock;
    unsigned int _unfairLockOptions;
}




-(id)init;
-(id)initWithOptions:(NSInteger)arg0 ;
-(void)lock;
-(void)performWithLockSync:(id)arg0 ;
-(void)unlock;


@end


#endif