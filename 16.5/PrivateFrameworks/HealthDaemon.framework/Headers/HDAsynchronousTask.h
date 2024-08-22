// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDASYNCHRONOUSTASK_H
#define HDASYNCHRONOUSTASK_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDAsynchronousTask : NSObject {
    BOOL _hasTimeout;
    id *_handler;
    NSObject<OS_dispatch_queue> *_queue;
    CGFloat _timeout;
    id *_checkpointHandler;
}






@end


#endif