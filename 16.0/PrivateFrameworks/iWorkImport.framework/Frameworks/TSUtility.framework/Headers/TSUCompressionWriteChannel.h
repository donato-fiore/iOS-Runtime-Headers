// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSUCOMPRESSIONWRITECHANNEL_H
#define TSUCOMPRESSIONWRITECHANNEL_H

@class NSString;
@protocol TSUStreamWriteChannel;

#import <Foundation/Foundation.h>

#import "TSUStreamCompression.h"

@interface TSUCompressionWriteChannel : NSObject <TSUStreamWriteChannel>

 {
    id<TSUStreamWriteChannel> *_writeChannel;
    TSUStreamCompression *_compressor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly) Class superclass;


-(id)initWithWriteChannel:(id)arg0 compressionAlgorithm:(int)arg1 operation:(int)arg2 ;
-(void)addBarrier:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)flushWithCompletion:(id)arg0 ;
-(void)setLowWater:(NSUInteger)arg0 ;
-(void)writeData:(id)arg0 handler:(id)arg1 ;


@end


#endif