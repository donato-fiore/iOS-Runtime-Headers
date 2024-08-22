// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OITSUZIPINFLATEREADCHANNEL_H
#define OITSUZIPINFLATEREADCHANNEL_H

@class NSString;
@protocol TSUStreamReadChannel;

#import <Foundation/Foundation.h>


@interface OITSUZipInflateReadChannel : NSObject <TSUStreamReadChannel>

 {
    id<TSUStreamReadChannel> *_readChannel;
    NSUInteger _remainingUncompressedSize;
    unsigned int _CRC;
    BOOL _validateCRC;
    z_stream_s _stream;
    NSUInteger _outBufferSize;
    char * _outBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)processData:(id)arg0 inflateResult:(*int)arg1 CRC:(*unsigned int)arg2 isDone:(BOOL)arg3 handler:(id)arg4 ;
-(id)initWithReadChannel:(id)arg0 uncompressedSize:(NSUInteger)arg1 CRC:(unsigned int)arg2 validateCRC:(BOOL)arg3 ;
-(void)close;
-(void)dealloc;
// -(void)handleFailureWithHandler:(id)arg0 error:(unk)arg1  ;
-(void)prepareBuffer;
-(void)readWithHandler:(id)arg0 ;


@end


#endif