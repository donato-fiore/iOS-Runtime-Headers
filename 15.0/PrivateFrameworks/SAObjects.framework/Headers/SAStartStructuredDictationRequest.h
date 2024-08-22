// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASTARTSTRUCTUREDDICTATIONREQUEST_H
#define SASTARTSTRUCTUREDDICTATIONREQUEST_H

@class NSString;


#import "SAStartRequest.h"

@interface SAStartStructuredDictationRequest : SAStartRequest

@property (copy, nonatomic) NSString *structuredDictationType;


+(id)startStructuredDictationRequest;
+(id)startStructuredDictationRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif