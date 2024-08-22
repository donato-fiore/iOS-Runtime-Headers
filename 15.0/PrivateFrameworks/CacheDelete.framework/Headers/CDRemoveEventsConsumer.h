// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CDREMOVEEVENTSCONSUMER_H
#define CDREMOVEEVENTSCONSUMER_H

@class NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface CDRemoveEventsConsumer : NSObject

@property (copy, nonatomic) id *consumer; // ivar: _consumer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *consumer_q; // ivar: _consumer_q
@property fsid fsid; // ivar: _fsid
@property BOOL historyDone; // ivar: _historyDone
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // ivar: _sem
@property NSUInteger since; // ivar: _since
@property *__FSEventStream stream; // ivar: _stream
@property (retain, nonatomic) NSString *volume; // ivar: _volume


// -(id)initWithConsumer:(id)arg0 identifier:(unk)arg1  ;
-(void)callback:(id)arg0 ;
-(void)consumeStream:(struct __FSEventStream *)arg0 forVolume:(id)arg1 ;
-(void)dealloc;


@end


#endif