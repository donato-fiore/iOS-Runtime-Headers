// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTREPLAYQUERYSHADERINFOREPLYSTREAM_H
#define GTREPLAYQUERYSHADERINFOREPLYSTREAM_H

@protocol GTXPCDispatcher, OS_os_log, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "GTBulkDataServiceXPCProxy.h"

@interface GTReplayQueryShaderInfoReplyStream : NSObject <GTXPCDispatcher>

 {
    NSObject<OS_os_log> *_log;
    id *_callback;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
    NSObject<OS_dispatch_queue> *_serialQueue;
}


@property NSUInteger dispatcherId; // ivar: dispatcherId


// -(id)initWithCallback:(id)arg0 bulkDataProxy:(unk)arg1  ;
-(void)dispatchMessage:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif