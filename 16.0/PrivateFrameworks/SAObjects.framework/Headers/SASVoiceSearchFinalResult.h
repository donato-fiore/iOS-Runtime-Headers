// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SASVOICESEARCHFINALRESULT_H
#define SASVOICESEARCHFINALRESULT_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *recognitionText;
@property (copy, nonatomic) NSArray *voiceSearchResults;


+(id)voiceSearchFinalResult;
+(id)voiceSearchFinalResultWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif