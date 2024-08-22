// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTPDATAPACKET_H
#define PTPDATAPACKET_H

@class NSString;
@protocol PTPDataPacketDataSource;

#import <Foundation/Foundation.h>


@interface PTPDataPacket : NSObject {
    unsigned short _operationCode;
    unsigned int _transactionID;
    id *_data;
    NSString *_filepath;
    int _fd;
    id<PTPDataPacketDataSource> *_dataSource;
    NSInteger _bufferSize;
    NSInteger _offsetInBuffer;
    _PTPRange _range;
    NSInteger _bytesTransferred;
}




-(NSInteger)bufferSize;
-(NSInteger)bytesTransferred;
-(NSInteger)copyDataToWrappedBytes:(id)arg0 forTransport:(unsigned short)arg1 fromOffset:(NSUInteger)arg2 ;
-(NSInteger)copyFromBuffer:(*void)arg0 numBytes:(NSInteger)arg1 ;
-(NSInteger)copyHeaderToWrappedBytes:(id)arg0 forTransport:(unsigned short)arg1 ;
-(NSInteger)copyToBuffer:(*void)arg0 numBytes:(NSInteger)arg1 ;
-(NSInteger)copyToWrappedBytes:(id)arg0 forTransport:(unsigned short)arg1 ;
-(NSInteger)offsetInBuffer;
-(id)contentForTCP;
-(id)contentForUSB;
-(id)contentForUSBUsingBuffer:(*void)arg0 capacity:(unsigned int)arg1 ;
-(id)data;
-(id)description;
-(id)filepath;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 andData:(id)arg2 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 andDataSource:(id)arg2 ;
-(id)initWithOperationCode:(unsigned short)arg0 transactionID:(unsigned int)arg1 andFilepath:(id)arg2 ;
-(id)initWithTCPBuffer:(*void)arg0 ;
-(id)initWithUSBBuffer:(*void)arg0 ;
-(int)setRange:(struct _PTPRange )arg0 ;
-(struct _PTPRange )range;
-(unsigned int)transactionID;
-(unsigned short)operationCode;
-(void)dealloc;
-(void)setBytesTransferred:(NSInteger)arg0 ;
-(void)setData:(id)arg0 ;
-(void)setOperationCode:(unsigned short)arg0 ;
-(void)setTransactionID:(unsigned int)arg0 ;


@end


#endif