// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSENCODINGDETECTIONBUFFER_H
#define NSENCODINGDETECTIONBUFFER_H


#import <Foundation/Foundation.h>

#import "NSEncodingDetectionPlaceholder.h"

@interface NSEncodingDetectionBuffer : NSObject {
    NSUInteger _nsEncoding;
    unsigned int _cfEncoding;
    NSEncodingDetectionPlaceholder *_placeholder;
    char * _bytes;
    BOOL _bytesAllocated;
    NSUInteger _bytesIndex;
    NSUInteger _bytesLength;
}




-(BOOL)_growBufferIfNeededToAccomodateByteCount:(NSUInteger)arg0 ;
-(id)initWithNSStringEncoding:(NSUInteger)arg0 CFStringEncoding:(unsigned int)arg1 stackBuffer:(char *)arg2 bufferLength:(NSUInteger)arg3 placeholder:(id)arg4 ;
-(id)stringWithLossySubsitutionString:(id)arg0 ;
-(void)appendByte1:(unsigned char)arg0 byte2:(unsigned char)arg1 ;
-(void)appendByte1:(unsigned char)arg0 byte2:(unsigned char)arg1 byte3:(unsigned char)arg2 ;
-(void)appendByte1:(unsigned char)arg0 byte2:(unsigned char)arg1 byte3:(unsigned char)arg2 byte4:(unsigned char)arg3 ;
-(void)appendByte:(unsigned char)arg0 ;
-(void)appendBytes:(char *)arg0 count:(NSUInteger)arg1 ;
-(void)appendPlaceholder;
-(void)appendUTF16Char:(unsigned short)arg0 ;
-(void)appendUTF32Char:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif