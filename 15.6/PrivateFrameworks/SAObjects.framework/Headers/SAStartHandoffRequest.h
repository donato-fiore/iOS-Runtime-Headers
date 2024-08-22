// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASTARTHANDOFFREQUEST_H
#define SASTARTHANDOFFREQUEST_H

@class NSData;


#import "SAStartRequest.h"

@interface SAStartHandoffRequest : SAStartRequest

@property (copy, nonatomic) NSData *handoffData;


+(id)startHandoffRequest;
+(id)startHandoffRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif