// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _RECALLBACKANDPREVIOUSSTATUS_H
#define _RECALLBACKANDPREVIOUSSTATUS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _RECallbackAndPreviousStatus : NSObject

@property (copy, nonatomic) id *invalidationCallback; // ivar: _invalidationCallback
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (nonatomic) int status; // ivar: _status




@end


#endif