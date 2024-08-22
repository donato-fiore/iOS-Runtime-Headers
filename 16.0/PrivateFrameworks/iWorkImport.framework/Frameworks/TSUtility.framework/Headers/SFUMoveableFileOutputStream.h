// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUMOVEABLEFILEOUTPUTSTREAM_H
#define SFUMOVEABLEFILEOUTPUTSTREAM_H

@class NSString;
@protocol SFUOutputStream;

#import <Foundation/Foundation.h>


@interface SFUMoveableFileOutputStream : NSObject <SFUOutputStream>

 {
    int mFd;
    NSString *mPath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canCreateInputStream;
-(BOOL)canSeek;
-(BOOL)moveToPath:(id)arg0 ;
-(NSInteger)offset;
-(id)closeLocalStream;
-(id)initWithPath:(id)arg0 ;
-(id)initWithTemporaryFile:(id)arg0 ;
-(id)inputStream;
-(id)path;
-(void)close;
-(void)dealloc;
-(void)flush;
-(void)seekToOffset:(NSInteger)arg0 whence:(int)arg1 ;
-(void)truncateToLength:(NSInteger)arg0 ;
-(void)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;


@end


#endif