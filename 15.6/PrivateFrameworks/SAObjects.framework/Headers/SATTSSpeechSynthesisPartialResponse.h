// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SATTSSPEECHSYNTHESISPARTIALRESPONSE_H
#define SATTSSPEECHSYNTHESISPARTIALRESPONSE_H



#import "SABaseClientBoundCommand.h"
#import "SAUIAudioData.h"
#import "SATTSSpeechSynthesisAudioInfo.h"

@interface SATTSSpeechSynthesisPartialResponse : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAudioData *aceAudioData;
@property (retain, nonatomic) SATTSSpeechSynthesisAudioInfo *aceAudioInfo;
@property (nonatomic) NSInteger currentPacketNumber;


+(id)speechSynthesisPartialResponse;
+(id)speechSynthesisPartialResponseWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif