// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFSCHEDULER_H
#define SBFSCHEDULER_H


#import <Foundation/Foundation.h>


@interface SBFScheduler : NSObject



+(id)globalAsyncScheduler;
+(id)immediateScheduler;
+(id)mainScheduler;


@end


#endif