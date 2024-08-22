// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAAXRESTARTSPEAKING_H
#define SAAXRESTARTSPEAKING_H



#import "SADomainCommand.h"

@interface SAAXRestartSpeaking : SADomainCommand



+(id)restartSpeaking;
+(id)restartSpeakingWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif