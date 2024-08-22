// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLNETWORKREQUEST_H
#define RWIPROTOCOLNETWORKREQUEST_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolNetworkHeaders.h"

@interface RWIProtocolNetworkRequest : RWIProtocolJSONObject

@property (retain, nonatomic) RWIProtocolNetworkHeaders *headers;
@property (copy, nonatomic) NSString *integrity;
@property (copy, nonatomic) NSString *method;
@property (copy, nonatomic) NSString *postData;
@property (nonatomic) NSInteger referrerPolicy;
@property (copy, nonatomic) NSString *url;


-(id)initWithUrl:(id)arg0 method:(id)arg1 headers:(id)arg2 ;


@end


#endif