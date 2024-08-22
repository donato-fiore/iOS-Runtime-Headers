// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSTHREADPERFORMINFO_H
#define _NSTHREADPERFORMINFO_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NSCondition.h"

@interface _NSThreadPerformInfo : NSObject {
    id *_target;
    SEL _selector;
    id *_argument;
    NSArray *_modes;
    NSCondition *_waiter;
    int _state;
}




-(int)wait;
-(void)dealloc;
-(void)signal:(int)arg0 ;


@end


#endif