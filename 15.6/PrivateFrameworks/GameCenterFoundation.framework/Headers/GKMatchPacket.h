// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKMATCHPACKET_H
#define GKMATCHPACKET_H

@class NSData;

#import <Foundation/Foundation.h>


@interface GKMatchPacket : NSObject

@property (nonatomic) unsigned short checksum; // ivar: _checksum
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (nonatomic) unsigned char packetType; // ivar: _packetType
@property (nonatomic) unsigned int sequenceNumber; // ivar: _sequenceNumber
@property (nonatomic) unsigned int totalLength; // ivar: _totalLength
@property (nonatomic) BOOL valid; // ivar: _valid
@property (nonatomic) unsigned char version; // ivar: _version


-(id)init;
-(id)initWithMessage:(id)arg0 ;
-(id)message;


@end


#endif