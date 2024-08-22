// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RWIPROTOCOLNETWORKCACHEDRESOURCE_H
#define RWIPROTOCOLNETWORKCACHEDRESOURCE_H

@class NSString;


#import "RWIProtocolJSONObject.h"
#import "RWIProtocolNetworkResponse.h"

@interface RWIProtocolNetworkCachedResource : RWIProtocolJSONObject

@property (nonatomic) CGFloat bodySize;
@property (retain, nonatomic) RWIProtocolNetworkResponse *response;
@property (copy, nonatomic) NSString *sourceMapURL;
@property (nonatomic) NSInteger type;
@property (copy, nonatomic) NSString *url;


-(id)initWithUrl:(id)arg0 type:(NSInteger)arg1 bodySize:(CGFloat)arg2 ;


@end


#endif