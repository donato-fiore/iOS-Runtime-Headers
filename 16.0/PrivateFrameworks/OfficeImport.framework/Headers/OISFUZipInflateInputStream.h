// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OISFUZIPINFLATEINPUTSTREAM_H
#define OISFUZIPINFLATEINPUTSTREAM_H

@class NSString;
@protocol SFUInputStream, OISFUBufferedInputStream;

#import <Foundation/Foundation.h>


@interface OISFUZipInflateInputStream : NSObject <SFUInputStream>

 {
    z_stream_s mStream;
    NSInteger mOffset;
    id<OISFUBufferedInputStream> *mInput;
    char * mOutBuffer;
    NSUInteger mOutBufferSize;
    BOOL mReachedEnd;
    BOOL mIsFromZip;
    NSUInteger mCalculatedCrc;
    NSUInteger mCheckCrc;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSInteger)totalCompressedBytesConsumed;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(NSUInteger)readToOwnBuffer:(*char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithInput:(id)arg0 ;
-(id)initWithOffset:(NSInteger)arg0 end:(NSInteger)arg1 uncompressedSize:(NSUInteger)arg2 crc:(NSUInteger)arg3 dataRepresentation:(id)arg4 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;
-(void)setupInflateStream;


@end


#endif