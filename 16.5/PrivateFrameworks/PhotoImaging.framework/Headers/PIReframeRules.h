// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PIREFRAMERULES_H
#define PIREFRAMERULES_H

@class NURuleSystem;



@interface PIReframeRules : NURuleSystem

@property (readonly) BOOL isCandidateForHorizon;
@property (readonly) BOOL isCandidateForPerspective;
@property (readonly) BOOL isCandidateForReframe;


+(id)factCandidateForHorizon;
+(id)factCandidateForPerspective;
+(id)factCandidateForReframe;
+(id)factCandidateForStill;
+(id)factCandidateForVideo;
+(id)pregateRulesSystemWithConstants:(id)arg0 ;
+(id)sharedPregateRules;


@end


#endif