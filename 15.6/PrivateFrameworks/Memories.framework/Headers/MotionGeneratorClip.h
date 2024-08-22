// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MOTIONGENERATORCLIP_H
#define MOTIONGENERATORCLIP_H

@class PVEffect;


#import "KonaClip.h"

@interface MotionGeneratorClip : KonaClip

@property (retain, nonatomic) PVEffect *generatorEffect; // ivar: _generatorEffect


-(BOOL)hasAudioCharacteristic;
-(BOOL)hasVisualCharacteristic;
-(BOOL)isFreezeFrame;
-(id)plistRepresentationFromProject:(id)arg0 ;
-(int)clipType;
-(int)maxDuration;
-(void)setContentsFromPlist:(id)arg0 inProject:(id)arg1 ;
-(void)validateEffectRange:(struct ? )arg0 inProject:(id)arg1 ;


@end


#endif