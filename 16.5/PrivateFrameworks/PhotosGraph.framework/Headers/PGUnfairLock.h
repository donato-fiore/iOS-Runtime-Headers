// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGUNFAIRLOCK_H
#define PGUNFAIRLOCK_H


#import <Foundation/Foundation.h>


@interface PGUnfairLock : NSObject {
    os_unfair_lock_s _lock;
}




-(id)init;
-(void)lock;
-(void)unlock;


@end


#endif