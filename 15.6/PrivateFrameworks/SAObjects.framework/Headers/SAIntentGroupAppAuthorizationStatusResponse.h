// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPAPPAUTHORIZATIONSTATUSRESPONSE_H
#define SAINTENTGROUPAPPAUTHORIZATIONSTATUSRESPONSE_H

@class NSString, NSDictionary;
@protocol SAServerBoundCommand;


#import "SABaseCommand.h"

@interface SAIntentGroupAppAuthorizationStatusResponse : SABaseCommand <SAServerBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSDictionary *appAuthorizationStatusMap;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *refId;
@property (readonly) Class superclass;


+(id)appAuthorizationStatusResponse;
+(id)appAuthorizationStatusResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif