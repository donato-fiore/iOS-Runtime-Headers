// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BUZIPINFLATEREADCHANNEL_H
#define BUZIPINFLATEREADCHANNEL_H

@class NSString;
@protocol BUStreamReadChannel;

#import <Foundation/Foundation.h>


@interface BUZipInflateReadChannel : NSObject <BUStreamReadChannel>

 {
    z_stream_s _stream;
    char * _outBuffer;
}


@property (nonatomic) unsigned int CRC; // ivar: _CRC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger outBufferSize; // ivar: _outBufferSize
@property (retain, nonatomic) NSObject<BUStreamReadChannel> *readChannel; // ivar: _readChannel
@property (nonatomic) NSUInteger remainingUncompressedSize; // ivar: _remainingUncompressedSize
@property (readonly) Class superclass;
@property (nonatomic) BOOL validateCRC; // ivar: _validateCRC


+(void)test_setMaxBufferSize:(NSUInteger)arg0 ;
-(BOOL)processData:(id)arg0 inflateResult:(*int)arg1 CRC:(*unsigned int)arg2 isDone:(BOOL)arg3 handler:(id)arg4 ;
-(id)initWithReadChannel:(id)arg0 uncompressedSize:(NSUInteger)arg1 CRC:(unsigned int)arg2 validateCRC:(BOOL)arg3 ;
-(void)close;
-(void)dealloc;
// -(void)handleFailureWithHandler:(id)arg0 error:(unk)arg1  ;
-(void)prepareBuffer;
-(void)readWithHandler:(id)arg0 ;


@end


#endif