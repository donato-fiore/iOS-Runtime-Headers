// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPCGDATACONSUMER_H
#define TSPCGDATACONSUMER_H

@class NSError;
@protocol OS_dispatch_queue, TSUStreamWriteChannel;

#import <Foundation/Foundation.h>


@interface TSPCGDataConsumer : NSObject {
    NSObject<OS_dispatch_queue> *_writeQueue;
    id<TSUStreamWriteChannel> *_writeChannel;
    NSError *_error;
}




+(struct CGDataConsumer *)newCGDataConsumerForWriteChannel:(id)arg0 ;
-(NSUInteger)putBytes:(*void)arg0 count:(NSUInteger)arg1 ;
-(id)init;
-(id)initWithWriteChannel:(id)arg0 ;
-(void)_close;
-(void)close;


@end


#endif