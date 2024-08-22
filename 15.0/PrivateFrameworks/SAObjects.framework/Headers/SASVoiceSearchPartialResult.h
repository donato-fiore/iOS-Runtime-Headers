// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASVOICESEARCHPARTIALRESULT_H
#define SASVOICESEARCHPARTIALRESULT_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (nonatomic) BOOL stable;
@property (copy, nonatomic) NSArray *voiceSearchResults;


+(id)voiceSearchPartialResult;
+(id)voiceSearchPartialResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif