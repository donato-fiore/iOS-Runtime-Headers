// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATTSESTIMATETTSREQUESTDURATION_H
#define SATTSESTIMATETTSREQUESTDURATION_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SATTSEstimateTTSRequestDuration : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSArray *texts;


+(id)estimateTTSRequestDuration;
+(id)estimateTTSRequestDurationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif