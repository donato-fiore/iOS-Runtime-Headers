// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAREPLAYREQUESTFROMDMHYPOTHESIS_H
#define SAREPLAYREQUESTFROMDMHYPOTHESIS_H

@class NSData;


#import "SAStartRequest.h"

@interface SAReplayRequestFromDMHypothesis : SAStartRequest

@property (copy, nonatomic) NSData *dmHypothesis;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif