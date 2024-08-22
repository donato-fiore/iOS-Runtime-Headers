// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVOUTPUTCONTEXTDESTINATIONCHANGEINTERNAL_H
#define AVOUTPUTCONTEXTDESTINATIONCHANGEINTERNAL_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVOutputContextDestinationChangeInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    NSInteger status;
    NSString *cancellationReason;
}






@end


#endif