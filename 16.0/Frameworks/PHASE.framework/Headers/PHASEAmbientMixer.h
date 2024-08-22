// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASEAMBIENTMIXER_H
#define PHASEAMBIENTMIXER_H

@class AVAudioChannelLayout;


#import "PHASEMixer.h"
#import "PHASEListener.h"

@interface PHASEAmbientMixer : PHASEMixer

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // ivar: _inputChannelLayout
@property (readonly, nonatomic) PHASEListener *listener; // ivar: _listener
@property (readonly, nonatomic) ? orientation; // ivar: _orientation


+(id)new;
-(id)init;
-(id)initWithIdentifier:(id)arg0 listener:(id)arg1 inputChannelLayout:(id)arg2 ;


@end


#endif