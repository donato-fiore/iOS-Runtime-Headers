// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GPBCODEDOUTPUTSTREAM_H
#define GPBCODEDOUTPUTSTREAM_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface GPBCodedOutputStream : NSObject {
    GPBOutputBufferState state_;
    NSMutableData *buffer_;
}




+(id)streamWithData:(id)arg0 ;
+(id)streamWithOutputStream:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(id)initWithOutputStream:(id)arg0 ;
-(id)initWithOutputStream:(id)arg0 data:(id)arg1 ;
-(void)dealloc;
-(void)flush;
-(void)writeBool:(int)arg0 value:(BOOL)arg1 ;
-(void)writeBoolArray:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeBoolNoTag:(BOOL)arg0 ;
-(void)writeBytes:(int)arg0 value:(id)arg1 ;
-(void)writeBytesArray:(int)arg0 values:(id)arg1 ;
-(void)writeBytesNoTag:(id)arg0 ;
-(void)writeDouble:(int)arg0 value:(CGFloat)arg1 ;
-(void)writeDoubleArray:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeDoubleNoTag:(CGFloat)arg0 ;
-(void)writeEnum:(int)arg0 value:(int)arg1 ;
-(void)writeEnumArray:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeEnumNoTag:(int)arg0 ;
-(void)writeFixed32:(int)arg0 value:(unsigned int)arg1 ;
-(void)writeFixed32Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeFixed32NoTag:(unsigned int)arg0 ;
-(void)writeFixed64:(int)arg0 value:(NSUInteger)arg1 ;
-(void)writeFixed64Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeFixed64NoTag:(NSUInteger)arg0 ;
-(void)writeFloat:(int)arg0 value:(float)arg1 ;
-(void)writeFloatArray:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeFloatNoTag:(float)arg0 ;
-(void)writeGroup:(int)arg0 value:(id)arg1 ;
-(void)writeGroupArray:(int)arg0 values:(id)arg1 ;
-(void)writeGroupNoTag:(int)arg0 value:(id)arg1 ;
-(void)writeInt32:(int)arg0 value:(int)arg1 ;
-(void)writeInt32Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeInt32NoTag:(int)arg0 ;
-(void)writeInt64:(int)arg0 value:(NSInteger)arg1 ;
-(void)writeInt64Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeInt64NoTag:(NSInteger)arg0 ;
-(void)writeMessage:(int)arg0 value:(id)arg1 ;
-(void)writeMessageArray:(int)arg0 values:(id)arg1 ;
-(void)writeMessageNoTag:(id)arg0 ;
-(void)writeMessageSetExtension:(int)arg0 value:(id)arg1 ;
-(void)writeRawByte:(unsigned char)arg0 ;
-(void)writeRawData:(id)arg0 ;
-(void)writeRawLittleEndian32:(int)arg0 ;
-(void)writeRawLittleEndian64:(NSInteger)arg0 ;
-(void)writeRawMessageSetExtension:(int)arg0 value:(id)arg1 ;
-(void)writeRawPtr:(*void)arg0 offset:(NSUInteger)arg1 length:(NSUInteger)arg2 ;
-(void)writeRawVarint32:(int)arg0 ;
-(void)writeRawVarint64:(NSInteger)arg0 ;
-(void)writeRawVarintSizeTAs32:(NSUInteger)arg0 ;
-(void)writeSFixed32:(int)arg0 value:(int)arg1 ;
-(void)writeSFixed32Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeSFixed32NoTag:(int)arg0 ;
-(void)writeSFixed64:(int)arg0 value:(NSInteger)arg1 ;
-(void)writeSFixed64Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeSFixed64NoTag:(NSInteger)arg0 ;
-(void)writeSInt32:(int)arg0 value:(int)arg1 ;
-(void)writeSInt32Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeSInt32NoTag:(int)arg0 ;
-(void)writeSInt64:(int)arg0 value:(NSInteger)arg1 ;
-(void)writeSInt64Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeSInt64NoTag:(NSInteger)arg0 ;
-(void)writeString:(int)arg0 value:(id)arg1 ;
-(void)writeStringArray:(int)arg0 values:(id)arg1 ;
-(void)writeStringNoTag:(id)arg0 ;
-(void)writeTag:(unsigned int)arg0 format:(int)arg1 ;
-(void)writeUInt32:(int)arg0 value:(unsigned int)arg1 ;
-(void)writeUInt32Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeUInt32NoTag:(unsigned int)arg0 ;
-(void)writeUInt64:(int)arg0 value:(NSUInteger)arg1 ;
-(void)writeUInt64Array:(int)arg0 values:(id)arg1 tag:(unsigned int)arg2 ;
-(void)writeUInt64NoTag:(NSUInteger)arg0 ;
-(void)writeUnknownGroup:(int)arg0 value:(id)arg1 ;
-(void)writeUnknownGroupArray:(int)arg0 values:(id)arg1 ;
-(void)writeUnknownGroupNoTag:(int)arg0 value:(id)arg1 ;


@end


#endif