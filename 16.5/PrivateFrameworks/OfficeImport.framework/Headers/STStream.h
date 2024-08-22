// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSTREAM_H
#define STSTREAM_H



#import "STSStgObject.h"

@interface STStream : STSStgObject

@property (readonly, nonatomic) *_Stream cStream; // ivar: m_pCStream


-(CGFloat)readFloat64;
-(NSUInteger)readUInt64;
-(char)readChar8;
-(float)readFloat32;
-(id)getInfo;
-(id)initWithCStream:(struct _Stream *)arg0 ;
-(id)readBytes:(unsigned int)arg0 ;
-(id)readString16:(unsigned int)arg0 ;
-(int)readSInt32;
-(short)readSInt16;
-(unsigned char)readBool8;
-(unsigned char)readUInt8;
-(unsigned int)getPos;
-(unsigned int)readUInt32;
-(unsigned short)readChar16;
-(unsigned short)readUInt16;
-(void)close;
-(void)dealloc;
-(void)releaseCStream;
-(void)seek:(int)arg0 fromOrigin:(int)arg1 ;
-(void)setClass:(struct ? )arg0 ;
-(void)writeBool8:(unsigned char)arg0 ;
-(void)writeBytes:(id)arg0 ;
-(void)writeChar16:(unsigned short)arg0 ;
-(void)writeChar8:(char)arg0 ;
-(void)writeFloat32:(float)arg0 ;
-(void)writeFloat64:(CGFloat)arg0 ;
-(void)writeSInt16:(short)arg0 ;
-(void)writeSInt32:(int)arg0 ;
-(void)writeString16:(id)arg0 ;
-(void)writeString16NoTerminator:(id)arg0 ;
-(void)writeUInt16:(unsigned short)arg0 ;
-(void)writeUInt32:(unsigned int)arg0 ;
-(void)writeUInt8:(unsigned char)arg0 ;


@end


#endif