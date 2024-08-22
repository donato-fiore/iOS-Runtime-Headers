// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SASTARTMULTIUSERTESTREQUEST_H
#define SASTARTMULTIUSERTESTREQUEST_H

@class NSString;


#import "SAStartRequest.h"
#import "SAConfidenceScores.h"

@interface SAStartMultiUserTestRequest : SAStartRequest

@property (copy, nonatomic) NSString *expectedSelectedSharedUserId;
@property (retain, nonatomic) SAConfidenceScores *voiceIDConfidenceScores;


+(id)startMultiUserTestRequest;
+(id)startMultiUserTestRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif