// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTREPLAYACCELERATIONREPLYSTREAM_H
#define GTREPLAYACCELERATIONREPLYSTREAM_H

@protocol GTXPCDispatcher;

#import <Foundation/Foundation.h>

#import "GTBulkDataServiceXPCProxy.h"

@interface GTReplayAccelerationReplyStream : NSObject <GTXPCDispatcher>

 {
    id *_callback;
    GTBulkDataServiceXPCProxy *_bulkDataProxy;
}




// -(id)initWithCallback:(id)arg0 bulkDataProxy:(unk)arg1  ;
-(void)dispatchMessage:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif