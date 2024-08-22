// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVEVENTWAITER_H
#define AVEVENTWAITER_H

@class NSCondition;

#import <Foundation/Foundation.h>


@interface AVEventWaiter : NSObject {
    NSCondition *_condition;
    BOOL _eventCompleted;
}




-(id)init;
-(void)dealloc;
-(void)markEventAsCompleted;
-(void)waitUntilEventIsCompleted;


@end


#endif