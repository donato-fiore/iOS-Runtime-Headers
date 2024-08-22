// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SCRCTHREADTASK_H
#define _SCRCTHREADTASK_H

@class NSConditionLock, NSMutableArray;

#import <Foundation/Foundation.h>


@interface _SCRCThreadTask : NSObject {
    id *_target;
    SEL _selector;
    NSConditionLock *_waitLock;
    unsigned int _mask;
    NSMutableArray *_objectArray;
}




+(id)newThreadTaskWithTarget:(id)arg0 selector:(SEL)arg1 cancelMask:(unsigned int)arg2 count:(unsigned int)arg3 firstObject:(id)arg4 moreObjects:(char *)arg5 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 cancelMask:(unsigned int)arg2 count:(unsigned int)arg3 firstObject:(id)arg4 moreObjects:(char *)arg5 ;
-(void)dealloc;
-(void)fire;
-(void)setWaitLock:(id)arg0 ;


@end


#endif