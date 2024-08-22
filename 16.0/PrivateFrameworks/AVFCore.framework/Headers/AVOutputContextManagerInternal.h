// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVOUTPUTCONTEXTMANAGERINTERNAL_H
#define AVOUTPUTCONTEXTMANAGERINTERNAL_H

@protocol OS_dispatch_queue, AVOutputContextManagerImpl;

#import <Foundation/Foundation.h>


@interface AVOutputContextManagerInternal : NSObject {
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    id<AVOutputContextManagerImpl> *impl;
}






@end


#endif