// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAINTENTGROUPGETINTENTDEFINITIONS_H
#define SAINTENTGROUPGETINTENTDEFINITIONS_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *queries;


+(id)getIntentDefinitions;
+(id)getIntentDefinitionsWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif