// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RWIPROTOCOLNETWORKWEBSOCKETREQUEST_H
#define RWIPROTOCOLNETWORKWEBSOCKETREQUEST_H



#import "RWIProtocolJSONObject.h"
#import "RWIProtocolNetworkHeaders.h"

@interface RWIProtocolNetworkWebSocketRequest : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;


-(id)initWithHeaders:(id)arg0 ;


@end


#endif