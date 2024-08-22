// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DEWORKQUEUES_H
#define DEWORKQUEUES_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DEWorkQueues : NSObject

@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain) NSMutableDictionary *queues; // ivar: _queues


-(id)init;
-(id)initWithDispatchQueue:(id)arg0 ;
-(void)advance:(id)arg0 ;
-(void)on:(id)arg0 enqueue:(id)arg1 ;


@end


#endif