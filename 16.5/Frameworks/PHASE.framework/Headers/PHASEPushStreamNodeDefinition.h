// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASEPUSHSTREAMNODEDEFINITION_H
#define PHASEPUSHSTREAMNODEDEFINITION_H

@class AVAudioFormat;


#import "PHASEGeneratorNodeDefinition.h"

@interface PHASEPushStreamNodeDefinition : PHASEGeneratorNodeDefinition

@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (nonatomic) BOOL normalize; // ivar: _normalize
@property (nonatomic) CGFloat referenceGainDbSpl; // ivar: _referenceGainDbSpl


+(id)new;
-(id)init;
-(id)initWithMixerDefinition:(id)arg0 format:(id)arg1 ;
-(id)initWithMixerDefinition:(id)arg0 format:(id)arg1 identifier:(id)arg2 ;
-(id)initWithMixerDefinition:(id)arg0 format:(id)arg1 uid:(id)arg2 ;


@end


#endif