// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SARDSERVERCONTEXTUPDATECANDIDATE_H
#define SARDSERVERCONTEXTUPDATECANDIDATE_H

@class NSArray, NSData, NSString;


#import "SABaseClientBoundCommand.h"

@interface SARDServerContextUpdateCandidate : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *mappedDomainEntities;
@property (copy, nonatomic) NSData *nlContextUpdatePayload;
@property (copy, nonatomic) NSData *pegasusConversationContext;
@property (copy, nonatomic) NSString *resultCandidateId;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif