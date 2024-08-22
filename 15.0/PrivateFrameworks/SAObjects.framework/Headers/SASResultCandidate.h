// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASRESULTCANDIDATE_H
#define SASRESULTCANDIDATE_H

@class NSNumber, NSString;


#import "SABaseClientBoundCommand.h"
#import "SASRecognition.h"

@interface SASResultCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSNumber *processedAudioDuration;
@property (retain, nonatomic) SASRecognition *recognition;
@property (copy, nonatomic) NSString *resultId;


+(id)resultCandidate;
+(id)resultCandidateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif