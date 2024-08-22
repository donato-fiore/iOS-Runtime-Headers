// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHASECHANNELMIXERDEFINITION_H
#define PHASECHANNELMIXERDEFINITION_H

@class AVAudioChannelLayout;


#import "PHASEMixerDefinition.h"

@interface PHASEChannelMixerDefinition : PHASEMixerDefinition

@property (readonly, nonatomic) AVAudioChannelLayout *inputChannelLayout; // ivar: _inputChannelLayout


+(id)new;
-(id)init;
-(id)initWithChannelLayout:(id)arg0 ;
-(id)initWithChannelLayout:(id)arg0 identifier:(id)arg1 ;
-(id)initWithChannelLayout:(id)arg0 mode:(NSInteger)arg1 ;
-(id)initWithChannelLayout:(id)arg0 mode:(NSInteger)arg1 uid:(id)arg2 ;
-(id)initWithChannelLayout:(id)arg0 uid:(id)arg1 ;


@end


#endif