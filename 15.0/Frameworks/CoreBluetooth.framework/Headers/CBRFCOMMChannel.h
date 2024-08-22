// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CBRFCOMMCHANNEL_H
#define CBRFCOMMCHANNEL_H

@class NSInputStream, NSOutputStream;

#import <Foundation/Foundation.h>

#import "CBClassicPeer.h"
#import "CBUUID.h"

@interface CBRFCOMMChannel : NSObject

@property (nonatomic) unsigned int baudRate; // ivar: _baudRate
@property (readonly, nonatomic) unsigned char channelID; // ivar: _channelID
@property (nonatomic) unsigned char dataBits; // ivar: _dataBits
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (readonly, nonatomic) BOOL isIncoming; // ivar: _isIncoming
@property (readonly, nonatomic) unsigned short mtu; // ivar: _mtu
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (nonatomic) unsigned char parity; // ivar: _parity
@property (readonly, nonatomic) CBClassicPeer *peer; // ivar: _peer
@property (readonly, nonatomic) CBUUID *serviceUUID; // ivar: _serviceUUID
@property (readonly, nonatomic) int socketFD; // ivar: _socketFD
@property (nonatomic) unsigned char stopBits; // ivar: _stopBits


-(id)description;
-(id)initWithPeer:(id)arg0 info:(id)arg1 ;
-(void)configureChannelPortParams:(unsigned int)arg0 dataBits:(unsigned char)arg1 parity:(unsigned char)arg2 stopBits:(unsigned char)arg3 ;
-(void)dealloc;


@end


#endif