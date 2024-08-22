// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSCOALESCINGQUEUE_H
#define SSCOALESCINGQUEUE_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface SSCoalescingQueue : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSObject<OS_dispatch_source> *source; // ivar: _source


-(id)initWithBlock:(id)arg0 ;
-(void)executeBlock;


@end


#endif