// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCEMULATEDPACKET_H
#define VCEMULATEDPACKET_H


#import <Foundation/Foundation.h>


@interface VCEmulatedPacket : NSObject {
    unsigned char _datagram;
}


@property (nonatomic) CGFloat arrivalTime; // ivar: _arrivalTime
@property (nonatomic) CGFloat departureTime; // ivar: _departureTime
@property (nonatomic) BOOL isLost; // ivar: _isLost
@property (nonatomic) *void metaData; // ivar: _metaData
@property (nonatomic) CGFloat networkServiceTime; // ivar: _networkServiceTime
@property (readonly, nonatomic) unsigned int packetID; // ivar: _packetID
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned int size; // ivar: _size
@property (nonatomic) NSInteger type; // ivar: _type


-(id)initWithPacketID:(unsigned int)arg0 ;
-(id)initWithPacketID:(unsigned int)arg0 datagram:(char *)arg1 datagramSize:(unsigned int)arg2 ;


@end


#endif