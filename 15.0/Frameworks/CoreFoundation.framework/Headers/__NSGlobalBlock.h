// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSGLOBALBLOCK_H
#define __NSGLOBALBLOCK_H



#import "NSBlock.h"

@interface __NSGlobalBlock : NSBlock



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(void)release;


@end


#endif