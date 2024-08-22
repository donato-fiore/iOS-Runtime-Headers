// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RWIPROTOCOLNETWORKRESPONSE_H
#define RWIPROTOCOLNETWORKRESPONSE_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolNetworkHeaders.h"
#import "RWIProtocolSecurity.h"
#import "RWIProtocolNetworkResourceTiming.h"

@interface RWIProtocolNetworkResponse : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) RWIProtocolNetworkHeaders *requestHeaders;
@property (retain, nonatomic) RWIProtocolSecurity *security;
@property (nonatomic) NSInteger source;
@property (nonatomic) int status;
@property (copy, nonatomic) NSString *statusText;
@property (retain, nonatomic) RWIProtocolNetworkResourceTiming *timing;
@property (copy, nonatomic) NSString *url;


-(id)initWithUrl:(id)arg0 status:(int)arg1 statusText:(id)arg2 headers:(id)arg3 mimeType:(id)arg4 source:(NSInteger)arg5 ;


@end


#endif