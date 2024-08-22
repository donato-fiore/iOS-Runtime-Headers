// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OISFUBUFFEREDINPUTSTREAM_H
#define OISFUBUFFEREDINPUTSTREAM_H

@class NSString;
@protocol OISFUBufferedInputStream, SFUInputStream;

#import <Foundation/Foundation.h>


@interface OISFUBufferedInputStream : NSObject <OISFUBufferedInputStream>

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