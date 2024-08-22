// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SATTSGETSPEECHSYNTHESISVOLUME_H
#define SATTSGETSPEECHSYNTHESISVOLUME_H



#import "SABaseClientBoundCommand.h"

@interface SATTSGetSpeechSynthesisVolume : SABaseClientBoundCommand



+(id)getSpeechSynthesisVolume;
+(id)getSpeechSynthesisVolumeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif