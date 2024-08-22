// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SAPHONEPLAYAUDIO_H
#define SAPHONEPLAYAUDIO_H

@class NSString;


#import "SABaseClientBoundCommand.h"

@interface SAPhonePlayAudio : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *phoneAudioType;


+(id)playAudio;
+(id)playAudioWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif