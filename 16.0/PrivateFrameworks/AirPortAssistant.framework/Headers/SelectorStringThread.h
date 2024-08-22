// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SELECTORSTRINGTHREAD_H
#define SELECTORSTRINGTHREAD_H

@class NSThread;



@interface SelectorStringThread : NSThread



+(void)detachNewThreadSelector:(SEL)arg0 toTarget:(id)arg1 withObject:(id)arg2 ;


@end


#endif