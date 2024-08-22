// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef JEUNFAIRLOCK_H
#define JEUNFAIRLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>


@interface JEUnfairLock : NSObject <NSLocking>

 {
    os_unfair_lock_s _unfairLock;
}




+(void)initialize;
-(id)init;
-(void)lock;
-(void)unlock;


@end


#endif