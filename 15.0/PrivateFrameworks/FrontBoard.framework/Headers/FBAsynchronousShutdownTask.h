// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBASYNCHRONOUSSHUTDOWNTASK_H
#define FBASYNCHRONOUSSHUTDOWNTASK_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FBAsynchronousShutdownTask : NSObject {
    NSString *_name;
    CGFloat _interval;
}




+(void)startTaskWithName:(id)arg0 timeout:(CGFloat)arg1 workItem:(id)arg2 ;
+(void)waitForTasks;


@end


#endif