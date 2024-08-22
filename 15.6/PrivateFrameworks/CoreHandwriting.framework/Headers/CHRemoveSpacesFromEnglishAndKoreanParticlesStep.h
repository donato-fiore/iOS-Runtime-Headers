// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHREMOVESPACESFROMENGLISHANDKOREANPARTICLESSTEP_H
#define CHREMOVESPACESFROMENGLISHANDKOREANPARTICLESSTEP_H

@class NSCharacterSet;


#import "CHPostprocessingStep.h"

@interface CHRemoveSpacesFromEnglishAndKoreanParticlesStep : CHPostprocessingStep

@property (copy, nonatomic) NSCharacterSet *koreanParticlesCharSet; // ivar: _koreanParticlesCharSet


-(id)init;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif