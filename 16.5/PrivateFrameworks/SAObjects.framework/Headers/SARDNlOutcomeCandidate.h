// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARDNLOUTCOMECANDIDATE_H
#define SARDNLOUTCOMECANDIDATE_H

@class NSData, NSString;


#import "SABaseClientBoundCommand.h"

@interface SARDNlOutcomeCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSData *nlIntentHierarchyContainerProto;
@property (copy, nonatomic) NSString *resultCandidateId;


+(id)nlOutcomeCandidate;
+(id)nlOutcomeCandidateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif