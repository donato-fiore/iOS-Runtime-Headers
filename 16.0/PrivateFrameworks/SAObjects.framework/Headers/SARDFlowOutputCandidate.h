// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARDFLOWOUTPUTCANDIDATE_H
#define SARDFLOWOUTPUTCANDIDATE_H

@class NSArray, NSString;


#import "SABaseClientBoundCommand.h"
#import "SARDServerContextUpdateCandidate.h"

@interface SARDFlowOutputCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *payload;
@property (copy, nonatomic) NSString *resultCandidateId;
@property (retain, nonatomic) SARDServerContextUpdateCandidate *serverContextUpdateCandidate;
@property (nonatomic) BOOL shouldNotMitigateAsFalseTrigger;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif