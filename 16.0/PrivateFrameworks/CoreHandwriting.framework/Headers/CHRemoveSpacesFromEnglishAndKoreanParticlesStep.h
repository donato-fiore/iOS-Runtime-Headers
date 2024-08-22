// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHREMOVESPACESFROMENGLISHANDKOREANPARTICLESSTEP_H
#define CHREMOVESPACESFROMENGLISHANDKOREANPARTICLESSTEP_H

@class NSCharacterSet;


#import "CHPostprocessingStepModifyingOriginalTokens.h"

@interface CHRemoveSpacesFromEnglishAndKoreanParticlesStep : CHPostprocessingStepModifyingOriginalTokens

@property (copy, nonatomic) NSCharacterSet *koreanParticlesCharSet; // ivar: _koreanParticlesCharSet


-(id)init;
-(id)process:(id)arg0 options:(id)arg1 ;


@end


#endif