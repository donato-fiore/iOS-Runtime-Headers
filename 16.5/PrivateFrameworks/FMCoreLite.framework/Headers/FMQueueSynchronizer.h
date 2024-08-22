// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMQUEUESYNCHRONIZER_H
#define FMQUEUESYNCHRONIZER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FMQueueSynchronizer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)initWithQueue:(id)arg0 ;
-(void)conditionalSync:(id)arg0 ;


@end


#endif