// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAENDPOINTSERVICE_H
#define SAENDPOINTSERVICE_H

@class NSString;


#import "SAEndpoint.h"

@interface SAEndpointService : SAEndpoint

@property (copy, nonatomic) NSString *serverUrl;


+(id)endpointService;
+(id)endpointServiceWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif