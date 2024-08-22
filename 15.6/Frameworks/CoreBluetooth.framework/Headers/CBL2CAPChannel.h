// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBL2CAPCHANNEL_H
#define CBL2CAPCHANNEL_H

@class NSInputStream, NSOutputStream;

#import <Foundation/Foundation.h>

#import "CBPeer.h"
#import "CBUUID.h"

@interface CBL2CAPChannel : NSObject

@property (readonly, nonatomic) unsigned short PSM; // ivar: _PSM
@property (readonly, nonatomic) NSInputStream *inputStream; // ivar: _inputStream
@property (nonatomic) BOOL isIncoming; // ivar: _isIncoming
@property (readonly, nonatomic) NSOutputStream *outputStream; // ivar: _outputStream
@property (readonly, nonatomic) CBPeer *peer; // ivar: _peer
@property (retain, nonatomic) CBUUID *serviceUUID; // ivar: _serviceUUID
@property (readonly, nonatomic) int socketFD; // ivar: _socketFD


-(id)description;
-(id)initWithPeer:(id)arg0 info:(id)arg1 ;
-(void)dealloc;


@end


#endif