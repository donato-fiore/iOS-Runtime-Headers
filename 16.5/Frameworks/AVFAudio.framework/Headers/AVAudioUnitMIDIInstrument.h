// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOUNITMIDIINSTRUMENT_H
#define AVAUDIOUNITMIDIINSTRUMENT_H

@class NSString;
@protocol AVAudioMixing;


#import "AVAudioUnit.h"

@interface AVAudioUnitMIDIInstrument : AVAudioUnit <AVAudioMixing>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) float volume;


-(id)initWithAudioComponentDescription:(struct AudioComponentDescription )arg0 ;
-(void)sendController:(unsigned char)arg0 withValue:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendMIDIEvent:(unsigned char)arg0 data1:(unsigned char)arg1 ;
-(void)sendMIDIEvent:(unsigned char)arg0 data1:(unsigned char)arg1 data2:(unsigned char)arg2 ;
-(void)sendMIDIEventList:(struct MIDIEventList *)arg0 ;
-(void)sendMIDISysExEvent:(id)arg0 ;
-(void)sendPitchBend:(unsigned short)arg0 onChannel:(unsigned char)arg1 ;
-(void)sendPressure:(unsigned char)arg0 onChannel:(unsigned char)arg1 ;
-(void)sendPressureForKey:(unsigned char)arg0 withValue:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)sendProgramChange:(unsigned char)arg0 bankMSB:(unsigned char)arg1 bankLSB:(unsigned char)arg2 onChannel:(unsigned char)arg3 ;
-(void)sendProgramChange:(unsigned char)arg0 onChannel:(unsigned char)arg1 ;
-(void)startNote:(unsigned char)arg0 withVelocity:(unsigned char)arg1 onChannel:(unsigned char)arg2 ;
-(void)stopNote:(unsigned char)arg0 onChannel:(unsigned char)arg1 ;


@end


#endif