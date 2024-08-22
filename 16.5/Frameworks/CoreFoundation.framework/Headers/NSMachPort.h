// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSMACHPORT_H
#define NSMACHPORT_H

@protocol NSMachPortDelegate;


#import "NSPort.h"

@interface NSMachPort : NSPort {
    id<NSMachPortDelegate> *_delegate;
    NSUInteger _flags;
    NSUInteger _retainCount;
}


@property (readonly) unsigned int machPort; // ivar: _machPort


-(NSUInteger)_flags;
-(NSUInteger)_retainCount;
-(id)_delegate;
-(void)_decreaseRetainCountAndMaybeDeallocWithLock:(struct os_unfair_lock_s *)arg0 andPerformWhenZero:(id)arg1 ;
-(void)_increaseRetainCountWithLock:(struct os_unfair_lock_s *)arg0 ;
-(void)_setDelegate:(id)arg0 ;
-(void)_setFlags:(NSUInteger)arg0 ;


@end


#endif