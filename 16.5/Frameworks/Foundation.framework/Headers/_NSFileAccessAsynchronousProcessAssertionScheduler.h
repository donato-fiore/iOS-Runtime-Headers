// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NSFILEACCESSASYNCHRONOUSPROCESSASSERTIONSCHEDULER_H
#define _NSFILEACCESSASYNCHRONOUSPROCESSASSERTIONSCHEDULER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _NSFileAccessAsynchronousProcessAssertionScheduler : NSObject {
    NSMutableDictionary *_assertionsPerPID;
    os_unfair_lock_s _lock;
}




+(id)sharedInstance;
-(id)addAssertionWithName:(id)arg0 forPID:(int)arg1 ;
-(id)init;
-(void)removeAssertionWithToken:(id)arg0 ;


@end


#endif