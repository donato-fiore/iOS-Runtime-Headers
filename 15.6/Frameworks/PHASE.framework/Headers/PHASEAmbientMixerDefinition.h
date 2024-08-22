// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEAMBIENTMIXERDEFINITION_H
#define PHASEAMBIENTMIXERDEFINITION_H

@class AVAudioChannelLayout;


#import "PHASEMixerDefinition.h"

@interface PHASEAmbientMixerDefinition : PHASEMixerDefinition

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // ivar: _inputChannelLayout
@property (readonly, nonatomic) ? orientation; // ivar: _orientation


+(id)new;
-(id)init;
-(id)initWithChannelLayout:(id)arg0 orientation:(struct ? )arg1 ;
-(id)initWithChannelLayout:(id)arg0 orientation:(struct ? )arg1 identifier:(id)arg2 ;
-(id)initWithChannelLayout:(id)arg0 orientation:(struct ? )arg1 uid:(id)arg2 ;


@end


#endif