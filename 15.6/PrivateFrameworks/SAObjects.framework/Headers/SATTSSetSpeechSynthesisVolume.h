// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATTSSETSPEECHSYNTHESISVOLUME_H
#define SATTSSETSPEECHSYNTHESISVOLUME_H

@class NSString, NSNumber;


#import "SABaseClientBoundCommand.h"

@interface SATTSSetSpeechSynthesisVolume : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *actionType;
@property (copy, nonatomic) NSNumber *volumeValue;


+(id)setSpeechSynthesisVolume;
+(id)setSpeechSynthesisVolumeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif