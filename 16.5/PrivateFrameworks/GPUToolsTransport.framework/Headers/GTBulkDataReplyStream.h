// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTBULKDATAREPLYSTREAM_H
#define GTBULKDATAREPLYSTREAM_H

@protocol GTXPCDispatcher;

#import <Foundation/Foundation.h>


@interface GTBulkDataReplyStream : NSObject <GTXPCDispatcher>

 {
    id *_callback;
}


@property NSUInteger dispatcherId; // ivar: dispatcherId


-(id)initWithCallback:(id)arg0 ;
-(void)dispatchMessage:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif