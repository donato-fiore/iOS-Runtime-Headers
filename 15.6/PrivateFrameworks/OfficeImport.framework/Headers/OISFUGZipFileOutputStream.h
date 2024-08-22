// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OISFUGZIPFILEOUTPUTSTREAM_H
#define OISFUGZIPFILEOUTPUTSTREAM_H

@class NSString;
@protocol SFUOutputStream;

#import <Foundation/Foundation.h>


@interface OISFUGZipFileOutputStream : NSObject <SFUOutputStream>

 {
    *gzFile_s _file;
    NSInteger _offset;
    NSString *_path;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)gzipExtension;
-(BOOL)canCreateInputStream;
-(BOOL)canSeek;
-(NSInteger)offset;
-(id)closeLocalStream;
-(id)initWithPath:(id)arg0 ;
-(id)inputStream;
-(id)path;
-(void)close;
-(void)dealloc;
-(void)seekToOffset:(NSInteger)arg0 whence:(int)arg1 ;
-(void)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;


@end


#endif