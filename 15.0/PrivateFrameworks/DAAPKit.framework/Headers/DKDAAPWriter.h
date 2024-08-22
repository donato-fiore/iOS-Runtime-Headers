// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DKDAAPWRITER_H
#define DKDAAPWRITER_H

@class NSMutableArray, NSError, NSOutputStream;

#import <Foundation/Foundation.h>


@interface DKDAAPWriter : NSObject

@property (readonly, nonatomic) NSMutableArray *containerStack; // ivar: _containerStack
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly, nonatomic) NSUInteger state; // ivar: _state


-(id)initWithStream:(id)arg0 ;
-(void)_performWriteWithBuffer:(id)arg0 ;
-(void)_writeDataToOutputStream:(id)arg0 ;
-(void)close;
-(void)endContainerWithCode:(unsigned int)arg0 ;
-(void)startContainerWithCode:(unsigned int)arg0 ;
-(void)writeBytes:(char *)arg0 ofLength:(unsigned int)arg1 withCode:(unsigned int)arg2 ;
-(void)writeCString:(char *)arg0 withCode:(unsigned int)arg1 ;
-(void)writeContainerData:(id)arg0 ;
-(void)writeData:(id)arg0 withCode:(unsigned int)arg1 ;
-(void)writeSInt16:(short)arg0 withCode:(unsigned int)arg1 ;
-(void)writeSInt32:(int)arg0 withCode:(unsigned int)arg1 ;
-(void)writeSInt64:(NSInteger)arg0 withCode:(unsigned int)arg1 ;
-(void)writeSInt8:(char)arg0 withCode:(unsigned int)arg1 ;
-(void)writeString:(id)arg0 withCode:(unsigned int)arg1 ;
-(void)writeUInt16:(unsigned short)arg0 withCode:(unsigned int)arg1 ;
-(void)writeUInt32:(unsigned int)arg0 withCode:(unsigned int)arg1 ;
-(void)writeUInt64:(NSUInteger)arg0 withCode:(unsigned int)arg1 ;
-(void)writeUInt8:(unsigned char)arg0 withCode:(unsigned int)arg1 ;


@end


#endif