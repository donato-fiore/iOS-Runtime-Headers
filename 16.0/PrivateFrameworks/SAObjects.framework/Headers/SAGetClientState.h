// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAGETCLIENTSTATE_H
#define SAGETCLIENTSTATE_H

@class NSArray;


#import "SABaseClientBoundCommand.h"

@interface SAGetClientState : SABaseClientBoundCommand

@property (copy, nonatomic) NSArray *statesToGet;


+(id)getClientState;
+(id)getClientStateWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif