// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OISFUFILEINPUTSTREAM_H
#define OISFUFILEINPUTSTREAM_H

@class NSString;
@protocol SFUInputStream;

#import <Foundation/Foundation.h>


@interface OISFUFileInputStream : NSObject <SFUInputStream>

 {
    int mFd;
    BOOL mIsCachingDisabled;
    NSInteger mStartOffset;
    NSInteger mCurrentOffset;
    NSInteger mEndOffset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithFileDescriptor:(int)arg0 offset:(NSInteger)arg1 length:(NSInteger)arg2 ;
-(id)initWithPath:(id)arg0 offset:(NSInteger)arg1 ;
-(id)initWithPath:(id)arg0 offset:(NSInteger)arg1 length:(NSInteger)arg2 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif