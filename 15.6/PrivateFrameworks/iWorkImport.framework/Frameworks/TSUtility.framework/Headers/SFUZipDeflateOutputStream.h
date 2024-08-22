// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFUZIPDEFLATEOUTPUTSTREAM_H
#define SFUZIPDEFLATEOUTPUTSTREAM_H

@class NSString;
@protocol SFUOutputStream;

#import <Foundation/Foundation.h>


@interface SFUZipDeflateOutputStream : NSObject <SFUOutputStream>

 {
    id<SFUOutputStream> *mOutputStream;
    z_stream_s mDeflateStream;
    char * mOutBuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canCreateInputStream;
-(BOOL)canSeek;
-(NSInteger)offset;
-(id)closeLocalStream;
-(id)initWithOutputStream:(id)arg0 ;
-(id)inputStream;
-(void)close;
-(void)dealloc;
-(void)seekToOffset:(NSInteger)arg0 whence:(int)arg1 ;
-(void)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;


@end


#endif