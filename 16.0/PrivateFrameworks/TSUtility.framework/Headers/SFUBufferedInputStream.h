// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUBUFFEREDINPUTSTREAM_H
#define SFUBUFFEREDINPUTSTREAM_H

@class NSString;
@protocol SFUBufferedInputStream, SFUInputStream;

#import <Foundation/Foundation.h>


@interface SFUBufferedInputStream : NSObject <SFUBufferedInputStream>

 {
    id<SFUInputStream> *mStream;
    char * mBuffer;
    NSUInteger mBufferSize;
    NSInteger mBufferOffset;
    NSInteger mBufferStart;
    NSInteger mBufferEnd;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(BOOL)seekWithinBufferToOffset:(NSInteger)arg0 ;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(NSUInteger)readToOwnBuffer:(*char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithStream:(id)arg0 ;
-(id)initWithStream:(id)arg0 bufferSize:(NSUInteger)arg1 ;
-(id)initWithStream:(id)arg0 dataLength:(NSInteger)arg1 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif