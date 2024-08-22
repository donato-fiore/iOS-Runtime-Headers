// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBKZIPDEFLATEMEMORYOUTPUTSTREAM_H
#define SBKZIPDEFLATEMEMORYOUTPUTSTREAM_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface SBKZipDeflateMemoryOutputStream : NSObject {
    NSMutableData *deflatedData;
    z_stream_s zstream;
    char * _outputBuffer;
    int _bufferingSize;
}




+(id)dataByDeflatingData:(id)arg0 ;
-(BOOL)writeBuffer:(char *)arg0 size:(NSUInteger)arg1 ;
-(id)close;
-(id)initWithBufferingSize:(int)arg0 compressionType:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif