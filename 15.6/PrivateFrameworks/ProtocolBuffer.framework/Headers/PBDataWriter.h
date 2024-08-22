// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PBDATAWRITER_H
#define PBDATAWRITER_H


#import <Foundation/Foundation.h>

#import "PBMutableData.h"

@interface PBDataWriter : NSObject {
    PBMutableData *_data;
}




-(BOOL)writeData:(id)arg0 ;
-(NSUInteger)write:(char *)arg0 maxLength:(NSUInteger)arg1 ;
-(id)data;
-(id)immutableData;
-(id)init;
-(void)writeBOOL:(BOOL)arg0 forTag:(unsigned int)arg1 ;
-(void)writeBareVarint:(NSUInteger)arg0 ;
-(void)writeBigEndianFixed16:(unsigned short)arg0 ;
-(void)writeBigEndianFixed32:(unsigned int)arg0 ;
-(void)writeBigEndianShortThenString:(id)arg0 ;
-(void)writeData:(id)arg0 forTag:(unsigned int)arg1 ;
-(void)writeDouble:(CGFloat)arg0 forTag:(unsigned int)arg1 ;
-(void)writeFixed32:(unsigned int)arg0 forTag:(unsigned int)arg1 ;
-(void)writeFixed64:(NSUInteger)arg0 forTag:(unsigned int)arg1 ;
-(void)writeFloat:(float)arg0 forTag:(unsigned int)arg1 ;
-(void)writeInt32:(int)arg0 forTag:(unsigned int)arg1 ;
-(void)writeInt64:(NSInteger)arg0 forTag:(unsigned int)arg1 ;
-(void)writeInt8:(char)arg0 ;
-(void)writeProtoBuffer:(id)arg0 ;
-(void)writeSfixed32:(int)arg0 forTag:(unsigned int)arg1 ;
-(void)writeSfixed64:(NSInteger)arg0 forTag:(unsigned int)arg1 ;
-(void)writeSint32:(int)arg0 forTag:(unsigned int)arg1 ;
-(void)writeSint64:(NSInteger)arg0 forTag:(unsigned int)arg1 ;
-(void)writeString:(id)arg0 forTag:(unsigned int)arg1 ;
-(void)writeTag:(unsigned int)arg0 andType:(unsigned char)arg1 ;
-(void)writeUint32:(unsigned int)arg0 forTag:(unsigned int)arg1 ;
-(void)writeUint64:(NSUInteger)arg0 forTag:(unsigned int)arg1 ;
-(void)writeUint8:(unsigned char)arg0 ;


@end


#endif