// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASCONFIRMENDPOINT_H
#define SASCONFIRMENDPOINT_H

@class NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SASConfirmEndpoint : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *endpointConfirmationTimestamp;


+(id)confirmEndpoint;
+(id)confirmEndpointWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif