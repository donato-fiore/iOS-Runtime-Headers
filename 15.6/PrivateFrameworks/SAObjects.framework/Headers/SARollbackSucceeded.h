// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAROLLBACKSUCCEEDED_H
#define SAROLLBACKSUCCEEDED_H



#import "SABaseClientBoundCommand.h"

@interface SARollbackSucceeded : SABaseClientBoundCommand



+(id)rollbackSucceeded;
+(id)rollbackSucceededWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif