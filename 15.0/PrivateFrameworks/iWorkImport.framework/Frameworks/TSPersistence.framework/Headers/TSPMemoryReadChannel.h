// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPMEMORYREADCHANNEL_H
#define TSPMEMORYREADCHANNEL_H

@class NSString;
@protocol TSUReadChannel, OS_dispatch_data, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPMemoryReadChannel : NSObject <TSUReadChannel>

 {
    NSObject<OS_dispatch_data> *_dispatchData;
    NSObject<OS_dispatch_queue> *_readQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithDispatchData:(id)arg0 ;
-(id)initWithNSData:(id)arg0 ;
-(void)_close;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)readFromOffset:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readFromOffsetAndWait:(NSInteger)arg0 length:(NSUInteger)arg1 handler:(id)arg2 ;
-(void)readWithHandler:(id)arg0 ;
-(void)readWithHandlerAndWait:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;


@end


#endif