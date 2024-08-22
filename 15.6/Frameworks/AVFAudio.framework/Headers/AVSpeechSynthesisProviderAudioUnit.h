// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSPEECHSYNTHESISPROVIDERAUDIOUNIT_H
#define AVSPEECHSYNTHESISPROVIDERAUDIOUNIT_H

@class AUAudioUnit, NSArray;



@interface AVSpeechSynthesisProviderAudioUnit : AUAudioUnit

@property (copy, nonatomic) id *speechSynthesisOutputMetadataBlock; // ivar: _speechSynthesisOutputMetadataBlock
@property (retain, nonatomic) NSArray *speechVoices; // ivar: _speechVoices


+(void)initialize;
-(void)cancelSpeechRequest;
-(void)synthesizeSpeechRequest:(id)arg0 ;


@end


#endif