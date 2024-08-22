// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONDITIONLOCK_H
#define NSCONDITIONLOCK_H

@protocol NSLocking;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSConditionLock : NSObject <NSLocking>

 {
    *void _priv;
}


@property (readonly) NSInteger condition;
@property (copy) NSString *name;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
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