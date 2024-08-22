// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAHACOMMAND_H
#define SAHACOMMAND_H

@class NSString, NSArray, NSNumber;
@protocol SAConditionallyMutatingClientBoundCommand;


#import "SADomainCommand.h"
#import "SAHAFilter.h"

@interface SAHACommand : SADomainCommand <SAConditionallyMutatingClientBoundCommand>



@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSArray *actionRequests;
@property (copy, nonatomic) NSArray *actions;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSArray *callbacks;
@property (copy, nonatomic) NSNumber *commandTimeout;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SAHAFilter *filter;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL mutatingCommand;
@property (copy, nonatomic) NSString *refId;
@property (copy, nonatomic) NSString *serverValidity;
@property (readonly) Class superclass;


+(id)command;
+(id)commandWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif