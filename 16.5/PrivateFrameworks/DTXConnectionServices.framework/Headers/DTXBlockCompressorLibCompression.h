// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTXBLOCKCOMPRESSORLIBCOMPRESSION_H
#define DTXBLOCKCOMPRESSORLIBCOMPRESSION_H

@class NSString;
@protocol DTXBlockCompressor;

#import <Foundation/Foundation.h>


@interface DTXBlockCompressorLibCompression : NSObject <DTXBlockCompressor>

 {
    uint8_t _lzfseScratchBuffer;
    uint8_t _lz4ScratchBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)uncompressBuffer:(char *)arg0 ofLength:(NSUInteger)arg1 toBuffer:(char *)arg2 withKnownUncompressedLength:(NSUInteger)arg3 usingCompressionType:(int)arg4 ;
-(NSUInteger)compressBuffer:(char *)arg0 ofLength:(NSUInteger)arg1 toBuffer:(char *)arg2 ofLength:(NSUInteger)arg3 usingCompressionType:(int)arg4 withFinalCompressionType:(*int)arg5 ;
-(void)dealloc;


@end


#endif