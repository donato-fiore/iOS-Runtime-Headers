// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRTRANSACTIONPACKET_H
#define MRTRANSACTIONPACKET_H

@class NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRTransactionKeyProtobuf.h"
#import "_MRTransactionPacketProtobuf.h"

@interface MRTransactionPacket : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger actualLength;
@property (readonly, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) _MRTransactionKeyProtobuf *key; // ivar: _key
@property (readonly, nonatomic) _MRTransactionPacketProtobuf *protobuf;
@property (readonly, nonatomic, getter=isReadComplete) BOOL readComplete;
@property (readonly, nonatomic) NSUInteger totalLength; // ivar: _totalLength
@property (readonly, nonatomic) NSUInteger totalWritePosition; // ivar: _totalWritePosition
@property (readonly, nonatomic, getter=isWriteComplete) BOOL writeComplete;
@property (nonatomic) NSUInteger writeLength; // ivar: _writeLength
@property (readonly, nonatomic) NSUInteger writePosition; // ivar: _writePosition


-(BOOL)isComplete;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithData:(id)arg0 forKey:(id)arg1 ;
-(id)initWithPackets:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)writeComplete;


@end


#endif