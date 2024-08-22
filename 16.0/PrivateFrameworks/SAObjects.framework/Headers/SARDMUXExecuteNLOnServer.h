// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SARDMUXEXECUTENLONSERVER_H
#define SARDMUXEXECUTENLONSERVER_H

@class NSString;


#import "SARDExecuteNLOnServer.h"
#import "SAConfidenceScores.h"

@interface SARDMUXExecuteNLOnServer : SARDExecuteNLOnServer

@property (nonatomic) BOOL markedForHandOff;
@property (nonatomic) BOOL muxStateRollback;
@property (copy, nonatomic) NSString *selectedUserId;
@property (copy, nonatomic) NSString *selectedUserIdentityClassification;
@property (retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;


-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif