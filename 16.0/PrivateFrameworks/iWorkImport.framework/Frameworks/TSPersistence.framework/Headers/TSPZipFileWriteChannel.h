// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPZIPFILEWRITECHANNEL_H
#define TSPZIPFILEWRITECHANNEL_H

@class TSUZipFileWriter, NSString;
@protocol TSUStreamWriteChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel>

 {
    TSUZipFileWriter *_archiveWriter;
    NSObject<OS_dispatch_queue> *_writerQueue;
    uint8_t _isClosed;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithArchiveWriter:(id)arg0 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)flushWithCompletion:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;
-(void)writeData:(id)arg0 handler:(id)arg1 ;


@end


#endif