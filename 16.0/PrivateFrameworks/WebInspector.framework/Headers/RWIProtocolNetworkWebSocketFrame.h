// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLNETWORKWEBSOCKETFRAME_H
#define RWIPROTOCOLNETWORKWEBSOCKETFRAME_H

@class NSString;


#import "RWIProtocolJSONObject.h"

@interface RWIProtocolNetworkWebSocketFrame : RWIProtocolJSONObject

@property (nonatomic) BOOL mask;
@property (nonatomic) CGFloat opcode;
@property (copy, nonatomic) NSString *payloadData;
@property (nonatomic) CGFloat payloadLength;


-(id)initWithOpcode:(CGFloat)arg0 mask:(BOOL)arg1 payloadData:(id)arg2 payloadLength:(CGFloat)arg3 ;


@end


#endif