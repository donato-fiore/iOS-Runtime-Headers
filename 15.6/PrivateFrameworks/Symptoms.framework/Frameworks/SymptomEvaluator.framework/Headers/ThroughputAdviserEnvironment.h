// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef THROUGHPUTADVISERENVIRONMENT_H
#define THROUGHPUTADVISERENVIRONMENT_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ThroughputAdviserEnvironment : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;


@end


#endif