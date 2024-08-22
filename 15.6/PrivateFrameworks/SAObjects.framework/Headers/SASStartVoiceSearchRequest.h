// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSTARTVOICESEARCHREQUEST_H
#define SASSTARTVOICESEARCHREQUEST_H

@class NSDictionary, NSArray;


#import "SASStartSpeechDictation.h"

@interface SASStartVoiceSearchRequest : SASStartSpeechDictation

@property (copy, nonatomic) NSDictionary *headers;
@property (copy, nonatomic) NSDictionary *queryParameters;
@property (copy, nonatomic) NSArray *searchTypes;


+(id)startVoiceSearchRequest;
+(id)startVoiceSearchRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif