// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPBIGENDIANDATAENCODER_H
#define _DPBIGENDIANDATAENCODER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface _DPBigEndianDataEncoder : NSObject

@property (retain, nonatomic) NSMutableData *buffer; // ivar: _buffer


-(BOOL)writeUInt24:(unsigned int)arg0 ;
-(id)init;
-(id)initWithCapacity:(NSUInteger)arg0 ;
-(void)appendData:(id)arg0 ;
-(void)writeFloat32:(float)arg0 ;
-(void)writeFloat64:(CGFloat)arg0 ;
-(void)writeInt16:(short)arg0 ;
-(void)writeInt32:(int)arg0 ;
-(void)writeInt64:(NSInteger)arg0 ;
-(void)writeUChar:(unsigned char)arg0 ;
-(void)writeUInt16:(unsigned short)arg0 ;
-(void)writeUInt32:(unsigned int)arg0 ;
-(void)writeUInt64:(NSUInteger)arg0 ;


@end


#endif