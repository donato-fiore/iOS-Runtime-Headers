// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SASSPEECHSERVERENDPOINTIDENTIFIED_H
#define SASSPEECHSERVERENDPOINTIDENTIFIED_H



#import "SABaseClientBoundCommand.h"

@interface SASSpeechServerEndpointIdentified : SABaseClientBoundCommand



+(id)speechServerEndpointIdentified;
+(id)speechServerEndpointIdentifiedWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif