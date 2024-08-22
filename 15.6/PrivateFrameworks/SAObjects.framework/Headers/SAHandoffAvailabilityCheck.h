// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAHANDOFFAVAILABILITYCHECK_H
#define SAHANDOFFAVAILABILITYCHECK_H



#import "SABaseClientBoundCommand.h"

@interface SAHandoffAvailabilityCheck : SABaseClientBoundCommand



+(id)handoffAvailabilityCheck;
+(id)handoffAvailabilityCheckWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif