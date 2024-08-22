// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASSTARTSTRUCTUREDDICTATIONSPEECHREQUEST_H
#define SASSTARTSTRUCTUREDDICTATIONSPEECHREQUEST_H

@class NSString;


#import "SASStartSpeechRequest.h"

@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (copy, nonatomic) NSString *structuredDictationType;


+(id)startStructuredDictationSpeechRequest;
+(id)startStructuredDictationSpeechRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif