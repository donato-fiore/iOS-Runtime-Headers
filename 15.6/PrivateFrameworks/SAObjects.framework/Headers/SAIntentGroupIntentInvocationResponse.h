// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPINTENTINVOCATIONRESPONSE_H
#define SAINTENTGROUPINTENTINVOCATIONRESPONSE_H

@class NSString, NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupIntentInvocationResponse : SABaseClientBoundCommand

@property (nonatomic) BOOL backgroundLaunch;
@property (copy, nonatomic) NSString *launchId;
@property (copy, nonatomic) NSArray *parameters;
@property (copy, nonatomic) NSString *utterance;


+(id)intentInvocationResponse;
+(id)intentInvocationResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif