// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPFRAGMENTATIONPACKET_H
#define HAPFRAGMENTATIONPACKET_H

@class HMFObject, NSData;



@interface HAPFragmentationPacket : HMFObject

@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, nonatomic) unsigned int length; // ivar: _length
@property (readonly, nonatomic) unsigned int offset; // ivar: _offset
@property (readonly, nonatomic) unsigned short transactionIdentifier; // ivar: _transactionIdentifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg0 transactionIdentifier:(unsigned short)arg1 length:(unsigned int)arg2 offset:(unsigned int)arg3 ;
-(id)initWithFragmentedPacketData:(id)arg0 ;
-(id)serialize;
-(id)shortDescription;


@end


#endif