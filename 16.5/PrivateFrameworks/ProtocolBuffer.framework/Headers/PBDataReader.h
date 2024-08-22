// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBDATAREADER_H
#define PBDATAREADER_H

@class NSData;

#import <Foundation/Foundation.h>


@interface PBDataReader : NSObject {
    BOOL _error;
    char * _bytes;
    NSData *_data;
}


@property (nonatomic) NSUInteger length; // ivar: _length
@property (nonatomic) NSUInteger position; // ivar: _pos


-(BOOL)hasError;
-(BOOL)hasMoreData;
-(BOOL)isAtEnd;
-(BOOL)mark:(struct ? *)arg0 ;
-(BOOL)readBOOL;
-(BOOL)seekToOffset:(NSUInteger)arg0 ;
-(BOOL)skipValueWithTag:(unsigned int)arg0 type:(unsigned char)arg1 ;
-(BOOL)skipValueWithTag:(unsigned short)arg0 andType:(unsigned char)arg1 ;
-(CGFloat)readDouble;
-(NSInteger)readInt64;
-(NSInteger)readSfixed64;
-(NSInteger)readSint64;
-(NSInteger)readVarInt;
-(NSUInteger)offset;
-(NSUInteger)readBigEndianFixed64;
-(NSUInteger)readFixed64;
-(NSUInteger)readUint64;
-(char)readInt8;
-(float)readFloat;
-(id)data;
-(id)initWithData:(id)arg0 ;
-(id)readBigEndianShortThenString;
-(id)readBytes:(unsigned int)arg0 ;
-(id)readData;
-(id)readProtoBuffer;
-(id)readString;
-(int)readInt32;
-(int)readSfixed32;
-(int)readSint32;
-(unsigned int)readBigEndianFixed32;
-(unsigned int)readFixed32;
-(unsigned int)readUint32;
-(unsigned short)readBigEndianFixed16;
-(void)readTag:(*unsigned int)arg0 type:(char *)arg1 ;
-(void)readTag:(*unsigned short)arg0 andType:(char *)arg1 ;
-(void)recall:(struct ? *)arg0 ;
-(void)updateData:(id)arg0 ;


@end


#endif