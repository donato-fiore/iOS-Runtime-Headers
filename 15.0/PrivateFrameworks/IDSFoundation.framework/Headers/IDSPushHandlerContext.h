// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSPUSHHANDLERCONTEXT_H
#define IDSPUSHHANDLERCONTEXT_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IDSPushHandlerContext : NSObject

@property (copy, nonatomic) NSSet *commands; // ivar: _commands
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (copy, nonatomic) NSSet *topics; // ivar: _topics


-(id)initWithQueue:(id)arg0 topics:(id)arg1 commands:(id)arg2 ;


@end


#endif