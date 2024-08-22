// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUMEMORYINPUTSTREAM_H
#define SFUMEMORYINPUTSTREAM_H

@class NSData, NSString;
@protocol SFUBufferedInputStream;

#import <Foundation/Foundation.h>


@interface SFUMemoryInputStream : NSObject <SFUBufferedInputStream>

 {
    NSData *mData;
    char * mStart;
    char * mCurrent;
    char * mEnd;
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
-(id)initWithData:(id)arg0 ;
-(id)initWithData:(id)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif