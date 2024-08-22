// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAGETMULTIPLECLIENTSTATES_H
#define SAGETMULTIPLECLIENTSTATES_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAGetMultipleClientStates : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *clientStateGetters;


+(id)getMultipleClientStates;
+(id)getMultipleClientStatesWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif