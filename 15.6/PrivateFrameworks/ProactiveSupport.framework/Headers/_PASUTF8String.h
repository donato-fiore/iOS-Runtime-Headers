// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PASUTF8STRING_H
#define _PASUTF8STRING_H

@class NSString, NSData;
@protocol NSCopying, NSMutableCopying;



@interface _PASUTF8String : NSString <NSCopying, NSMutableCopying>

 {
    char * _buffer;
    char * _bufferEnd;
    NSData *_backingData;
    *? _chunks;
    unsigned int _nchunks;
    unsigned int _asciiPrefixLength;
    unsigned int _length;
    BOOL _nullTerminated;
}




-(BOOL)canBeConvertedToEncoding:(NSUInteger)arg0 ;
-(NSUInteger)fastestEncoding;
-(NSUInteger)length;
-(NSUInteger)lengthOfBytesUsingEncoding:(NSUInteger)arg0 ;
-(NSUInteger)maximumLengthOfBytesUsingEncoding:(NSUInteger)arg0 ;
-(char *)UTF8String;
-(char *)cStringUsingEncoding:(NSUInteger)arg0 ;
-(id)_pas_stringBackedByUTF8CStringOverride;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dataUsingEncoding:(NSUInteger)arg0 ;
-(id)initWithUTF8Data:(id)arg0 asciiPrefixLength:(unsigned int)arg1 nullTerminated:(BOOL)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(unsigned short)characterAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getCharacters:(*unsigned short)arg0 range:(struct _NSRange )arg1 ;


@end


#endif