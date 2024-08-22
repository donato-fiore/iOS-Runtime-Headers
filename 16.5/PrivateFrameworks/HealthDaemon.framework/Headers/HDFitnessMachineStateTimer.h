// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDFITNESSMACHINESTATETIMER_H
#define HDFITNESSMACHINESTATETIMER_H

@class NSString;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDFitnessMachineStateTimer : NSObject {
    NSString *_name;
    NSUInteger _duration;
    NSObject<OS_dispatch_source> *_timer;
    id *_handler;
    NSObject<OS_dispatch_queue> *_queue;
}




-(void)dealloc;


@end


#endif