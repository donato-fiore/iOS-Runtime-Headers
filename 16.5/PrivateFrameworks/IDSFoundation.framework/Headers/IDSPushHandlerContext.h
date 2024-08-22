// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSPUSHHANDLERCONTEXT_H
#define IDSPUSHHANDLERCONTEXT_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSPushHandlerContext : NSObject {
    NSSet *_topics;
}


@property (copy, nonatomic) NSSet *commands; // ivar: _commands
@property (retain, nonatomic) NSSet *nonWakingTopics; // ivar: _nonWakingTopics
@property (retain, nonatomic) NSSet *opportunisticTopics; // ivar: _opportunisticTopics
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSSet *wakingTopics; // ivar: _wakingTopics


-(id)initWithQueue:(id)arg0 wakingTopics:(id)arg1 opportunisticTopics:(id)arg2 nonWakingTopics:(id)arg3 commands:(id)arg4 ;


@end


#endif