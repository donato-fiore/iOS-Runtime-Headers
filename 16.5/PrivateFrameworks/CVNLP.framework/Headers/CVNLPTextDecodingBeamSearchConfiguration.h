// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CVNLPTEXTDECODINGBEAMSEARCHCONFIGURATION_H
#define CVNLPTEXTDECODINGBEAMSEARCHCONFIGURATION_H



#import "CVNLPTextDecodingConfiguration.h"

@interface CVNLPTextDecodingBeamSearchConfiguration : CVNLPTextDecodingConfiguration

@property (nonatomic) NSUInteger beamWidth; // ivar: _beamWidth
@property (nonatomic) NSUInteger pathCount; // ivar: _pathCount
@property (nonatomic) BOOL pruneProblematicMixedScriptWordPaths; // ivar: _pruneProblematicMixedScriptWordPaths
@property (readonly, nonatomic) id *scoringFunction; // ivar: _scoringFunction
@property (nonatomic) BOOL shouldApplyWordLMToLastWord; // ivar: _shouldApplyWordLMToLastWord
@property (nonatomic) BOOL shouldOptimizeAlignment; // ivar: _shouldOptimizeAlignment


// -(id)initWithCommitActionBehavior:(id)arg0 beamWidth:(unk)arg1 pathCount:(NSUInteger)arg2 shouldOptimizeAlignment:(NSUInteger)arg3  ;
// -(id)initWithCommitActionBehavior:(id)arg0 beamWidth:(unk)arg1 pathCount:(NSUInteger)arg2 shouldOptimizeAlignment:(NSUInteger)arg3 pruneProblematicMixedScriptWordPaths:(BOOL)arg4  ;
// -(id)initWithCommitActionBehavior:(id)arg0 scoringFunction:(unk)arg1 beamWidth:(id)arg2 pathCount:(unk)arg3  ;
// -(id)initWithCommitActionBehavior:(id)arg0 scoringFunction:(unk)arg1 beamWidth:(id)arg2 pathCount:(unk)arg3 shouldOptimizeAlignment:(NSUInteger)arg4  ;
// -(id)initWithCommitActionBehavior:(id)arg0 scoringFunction:(unk)arg1 beamWidth:(id)arg2 pathCount:(unk)arg3 shouldOptimizeAlignment:(NSUInteger)arg4 pruneProblematicMixedScriptWordPaths:(NSUInteger)arg5  ;
// -(id)initWithCommitActionBehavior:(id)arg0 scoringFunction:(unk)arg1 beamWidth:(id)arg2 pathCount:(unk)arg3 shouldOptimizeAlignment:(NSUInteger)arg4 pruneProblematicMixedScriptWordPaths:(NSUInteger)arg5 shouldApplyWordLMToLastWord:(BOOL)arg6  ;


@end


#endif