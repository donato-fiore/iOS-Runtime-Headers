// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSMAINTHREAD_H
#define _NSMAINTHREAD_H



#import "NSThread.h"

@interface _NSMainThread : NSThread



-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)retain;
-(void)release;


@end


#endif