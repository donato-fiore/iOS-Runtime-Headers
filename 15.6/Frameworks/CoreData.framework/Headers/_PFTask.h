// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PFTASK_H
#define _PFTASK_H


#import <Foundation/Foundation.h>


@interface _PFTask : NSObject {
    int _cd_rc;
    *void _task;
    *void arguments;
    _opaque_pthread_mutex_t lock;
    _opaque_pthread_cond_t condition;
    int isFinishedFlag;
}




-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(NSUInteger)retainCount;
-(id)initWithFunction:(*unk)arg0 withArgument:(*void)arg1 andPriority:(int)arg2 ;
-(id)retain;
-(void)dealloc;
-(void)release;


@end


#endif