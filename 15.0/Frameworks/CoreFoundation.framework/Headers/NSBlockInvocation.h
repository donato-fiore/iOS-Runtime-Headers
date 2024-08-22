// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSBLOCKINVOCATION_H
#define NSBLOCKINVOCATION_H



#import "NSInvocation.h"

@interface NSBlockInvocation : NSInvocation



-(SEL)selector;
-(void)invoke;
-(void)invokeSuper;
-(void)invokeUsingIMP:(*unk)arg0 ;
-(void)setSelector:(SEL)arg0 ;


@end


#endif