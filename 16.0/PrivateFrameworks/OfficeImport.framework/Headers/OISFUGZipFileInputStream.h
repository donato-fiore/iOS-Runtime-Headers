// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OISFUGZIPFILEINPUTSTREAM_H
#define OISFUGZIPFILEINPUTSTREAM_H

@class NSString;
@protocol SFUInputStream;

#import <Foundation/Foundation.h>


@interface OISFUGZipFileInputStream : NSObject <SFUInputStream>

 {
    int _fd;
    *gzFile_s _file;
    BOOL _isCachingDisabled;
    NSInteger _offset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canSeek;
-(NSInteger)offset;
-(NSUInteger)readToBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)closeLocalStream;
-(id)initWithPath:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(void)seekToOffset:(NSInteger)arg0 ;


@end


#endif