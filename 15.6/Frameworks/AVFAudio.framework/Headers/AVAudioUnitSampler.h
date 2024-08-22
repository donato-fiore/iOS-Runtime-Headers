// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVAUDIOUNITSAMPLER_H
#define AVAUDIOUNITSAMPLER_H



#import "AVAudioUnitMIDIInstrument.h"

@interface AVAudioUnitSampler : AVAudioUnitMIDIInstrument

@property (nonatomic) float globalTuning;
@property (nonatomic) float masterGain;
@property (nonatomic) float overallGain;
@property (nonatomic) float stereoPan;


-(BOOL)loadAudioFilesAtURLs:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadInstrumentAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)loadSoundBankInstrumentAtURL:(id)arg0 program:(unsigned char)arg1 bankMSB:(unsigned char)arg2 bankLSB:(unsigned char)arg3 error:(*id)arg4 ;
-(id)init;
-(id)initWithAudioComponentDescription:(struct AudioComponentDescription )arg0 ;


@end


#endif