// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ENTBINARYPROTOCOL_H
#define ENTBINARYPROTOCOL_H

@class NSString;
@protocol ENTProtocol, ENTTransport;

#import <Foundation/Foundation.h>


@interface ENTBinaryProtocol : NSObject <ENTProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int messageSizeLimit; // ivar: _messageSizeLimit
@property (nonatomic) BOOL strictRead; // ivar: _strictRead
@property (nonatomic) BOOL strictWrite; // ivar: _strictWrite
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<ENTTransport> *transport; // ivar: _transport


-(BOOL)readBool;
-(CGFloat)readDouble;
-(NSInteger)readI64;
-(id)initWithTransport:(id)arg0 ;
-(id)initWithTransport:(id)arg0 strictRead:(BOOL)arg1 strictWrite:(BOOL)arg2 ;
-(id)readBinary;
-(id)readString;
-(id)readStringBody:(int)arg0 ;
-(int)readI32;
-(short)readI16;
-(unsigned char)readByte;
-(void)readFieldBeginReturningName:(*id)arg0 type:(*int)arg1 fieldID:(*int)arg2 ;
-(void)readFieldEnd;
-(void)readListBeginReturningElementType:(*int)arg0 size:(*int)arg1 ;
-(void)readListEnd;
-(void)readMapBeginReturningKeyType:(*int)arg0 valueType:(*int)arg1 size:(*int)arg2 ;
-(void)readMapEnd;
-(void)readMessageBeginReturningName:(*id)arg0 type:(*int)arg1 sequenceID:(*int)arg2 ;
-(void)readMessageEnd;
-(void)readSetBeginReturningElementType:(*int)arg0 size:(*int)arg1 ;
-(void)readSetEnd;
-(void)readStructBeginReturningName:(*id)arg0 ;
-(void)readStructEnd;
-(void)writeBinary:(id)arg0 ;
-(void)writeBool:(BOOL)arg0 ;
-(void)writeByte:(unsigned char)arg0 ;
-(void)writeDouble:(CGFloat)arg0 ;
-(void)writeFieldBeginWithName:(id)arg0 type:(int)arg1 fieldID:(int)arg2 ;
-(void)writeFieldEnd;
-(void)writeFieldStop;
-(void)writeI16:(short)arg0 ;
-(void)writeI32:(int)arg0 ;
-(void)writeI64:(NSInteger)arg0 ;
-(void)writeListBeginWithElementType:(int)arg0 size:(int)arg1 ;
-(void)writeListEnd;
-(void)writeMapBeginWithKeyType:(int)arg0 valueType:(int)arg1 size:(int)arg2 ;
-(void)writeMapEnd;
-(void)writeMessageBeginWithName:(id)arg0 type:(int)arg1 sequenceID:(int)arg2 ;
-(void)writeMessageEnd;
-(void)writeSetBeginWithElementType:(int)arg0 size:(int)arg1 ;
-(void)writeSetEnd;
-(void)writeString:(id)arg0 ;
-(void)writeStructBeginWithName:(id)arg0 ;
-(void)writeStructEnd;


@end


#endif