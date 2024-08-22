// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONDITIONLOCK_H
#define NSCONDITIONLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSCondition.h"
#import "NSString.h"

@interface NSConditionLock : NSObject <NSLocking>

 {
    NSCondition *cond;
    *_opaque_pthread_t t;
    NSInteger v;
    NSString *n;
}


@property (readonly) NSInteger condition;
@property (copy) NSString *name;


-(BOOL)lockBeforeDate:(id)arg0 ;
-(BOOL)lockWhenCondition:(NSInteger)arg0 beforeDate:(id)arg1 ;
-(BOOL)tryLock;
-(BOOL)tryLockWhenCondition:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCondition:(NSInteger)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)lockWhenCondition:(NSInteger)arg0 ;
-(void)unlock;
-(void)unlockWithCondition:(NSInteger)arg0 ;


@end


#endif