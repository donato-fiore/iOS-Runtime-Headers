// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EFLAZYCACHECONDITIONLOCK_H
#define _EFLAZYCACHECONDITIONLOCK_H

@class NSConditionLock;



@interface _EFLazyCacheConditionLock : NSConditionLock {
    uint8_t _waiterCount;
}


@property (readonly) NSInteger waiterCount;


-(id)initWithCondition:(NSInteger)arg0 ;
-(void)decrementWaiterCount;
-(void)incrementWaiterCount;


@end


#endif