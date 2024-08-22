// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENPROTOBUFCODER_H
#define ENPROTOBUFCODER_H

@class NSMutableArray, NSMutableData;

#import <Foundation/Foundation.h>

#import "ENArchive.h"

@interface ENProtobufCoder : NSObject {
    unsigned char _staticBuffer;
    NSMutableArray *_subCoders;
}


@property (readonly, nonatomic) NSMutableData *bufferData; // ivar: _bufferData
@property (nonatomic) NSUInteger bufferMaxSize; // ivar: _bufferMaxSize
@property (nonatomic) NSUInteger bufferOffset; // ivar: _bufferOffset
@property (readonly, nonatomic) *__sFILE fileHandle; // ivar: _fileHandle
@property (readonly, nonatomic) ENArchive *readArchive; // ivar: _readArchive
@property (readonly, nonatomic) char * readBase; // ivar: _readBase
@property (readonly, nonatomic) char * readEnd; // ivar: _readEnd
@property (readonly, nonatomic) char * readSrc; // ivar: _readSrc
@property (readonly, nonatomic) char * writeBase; // ivar: _writeBase
@property (readonly, nonatomic) char * writeDst; // ivar: _writeDst
@property (readonly, nonatomic) char * writeLim; // ivar: _writeLim


-(BOOL)_skipLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)_writeBytes:(*void)arg0 length:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)readFixedDouble:(*CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)readFixedFloat:(*float)arg0 error:(*id)arg1 ;
-(BOOL)readFixedSInt32:(*int)arg0 error:(*id)arg1 ;
-(BOOL)readFixedSInt64:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)readFixedUInt32:(*unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)readFixedUInt64:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)readType:(char *)arg0 tag:(*NSUInteger)arg1 eofOkay:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)readVarInt:(*NSUInteger)arg0 eofOkay:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)readVarIntBoolean:(*BOOL)arg0 error:(*id)arg1 ;
-(BOOL)readVarIntInt32:(*int)arg0 error:(*id)arg1 ;
-(BOOL)readVarIntSInt32:(*int)arg0 error:(*id)arg1 ;
-(BOOL)readVarIntSInt64:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)readVarIntUInt32:(*unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)readVarIntUInt64:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)skipType:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)writeFixedDouble:(CGFloat)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeFixedFloat:(float)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeFixedSInt32:(int)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeFixedSInt64:(NSInteger)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeFixedUInt32:(unsigned int)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeFixedUInt64:(NSUInteger)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeLengthDelimitedPtr:(*void)arg0 length:(NSUInteger)arg1 tag:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)writeNSData:(id)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeNSString:(id)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeVarInt:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)writeVarIntBoolean:(BOOL)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeVarIntSInt32:(int)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeVarIntSInt64:(NSInteger)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeVarIntUInt32:(unsigned int)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeVarIntUInt64:(NSUInteger)arg0 tag:(NSUInteger)arg1 error:(*id)arg2 ;
-(char *)_readLength:(NSUInteger)arg0 eofOkay:(BOOL)arg1 error:(*id)arg2 ;
-(char *)readLengthDelimited:(*NSUInteger)arg0 error:(*id)arg1 ;
-(id)dequeueOrCreateSubCoder;
-(id)init;
-(id)readNSDataAndReturnError:(*id)arg0 ;
-(id)readNSStringAndReturnError:(*id)arg0 ;
-(void)enqueueSubCoder:(id)arg0 ;
-(void)prepareForReuse;
-(void)setReadMemory:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setWriteMemory:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)setWriteMutableData:(id)arg0 ;


@end


#endif