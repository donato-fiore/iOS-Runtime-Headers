// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPCOMPRESSIONCOMPONENTWRITECHANNEL_H
#define TSPCOMPRESSIONCOMPONENTWRITECHANNEL_H

@class TSUStreamCompression, NSString;
@protocol TSPComponentWriteChannel, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface TSPCompressionComponentWriteChannel : NSObject <TSPComponentWriteChannel>

 {
    NSObject<OS_dispatch_queue> *_writeQueue;
    id<TSPComponentWriteChannel> *_writeChannel;
    TSUStreamCompression *_compressor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWriteChannel:(id)arg0 compressionAlgorithm:(int)arg1 operation:(int)arg2 ;
-(void)close;
-(void)dealloc;
-(void)writeData:(id)arg0 ;


@end


#endif