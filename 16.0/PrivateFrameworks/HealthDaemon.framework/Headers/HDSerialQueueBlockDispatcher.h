// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSERIALQUEUEBLOCKDISPATCHER_H
#define HDSERIALQUEUEBLOCKDISPATCHER_H

@class NSString;
@protocol HDBlockDispatcher, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDSerialQueueBlockDispatcher : NSObject <HDBlockDispatcher>

 {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
// -(void)dispatchBlock:(id)arg0 name:(unk)arg1  ;


@end


#endif