// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSTHREADPERFORMINFO_H
#define _NSTHREADPERFORMINFO_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NSCondition.h"

@interface _NSThreadPerformInfo : NSObject {
    id *_target;
    SEL _selector;
    id *_argument;
    NSMutableArray *modes;
    NSCondition *waiter;
    char * signalled;
}




-(id)init;
-(void)dealloc;


@end


#endif