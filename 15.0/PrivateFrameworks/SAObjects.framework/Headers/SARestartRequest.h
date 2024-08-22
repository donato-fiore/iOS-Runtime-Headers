// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SARESTARTREQUEST_H
#define SARESTARTREQUEST_H

@class NSString;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SARestartRequest : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *lastResponseId;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *requestId;
@property (readonly) Class superclass;


+(id)restartRequest;
+(id)restartRequestWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif