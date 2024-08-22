// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSMALLOCBLOCK_H
#define __NSMALLOCBLOCK_H



#import "NSBlock.h"

@interface __NSMallocBlock : NSBlock



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)retain;
-(void)release;


@end


#endif