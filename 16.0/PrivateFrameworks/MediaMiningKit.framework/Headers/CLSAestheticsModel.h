// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSAESTHETICSMODEL_H
#define CLSAESTHETICSMODEL_H

@class NSString;
@protocol CLSSignalModel;

#import <Foundation/Foundation.h>

#import "CLSSignalNode.h"

@interface CLSAestheticsModel : NSObject <CLSSignalModel>



@property (readonly) CGFloat aestheticScoreThresholdToBeAestheticallyPrettyGood; // ivar: _aestheticScoreThresholdToBeAestheticallyPrettyGood
@property (readonly) CGFloat aestheticScoreThresholdToBeAwesome; // ivar: _aestheticScoreThresholdToBeAwesome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *failureScoreNode; // ivar: _failureScoreNode
@property (readonly) CLSSignalNode *harmoniousColorScoreNode; // ivar: _harmoniousColorScoreNode
@property (readonly) NSUInteger hash;
@property (readonly) CLSSignalNode *immersivenessScoreNode; // ivar: _immersivenessScoreNode
@property (readonly) CLSSignalNode *interestingSubjectScoreNode; // ivar: _interestingSubjectScoreNode
@property (readonly) CLSSignalNode *intrusiveObjectPresenceScoreNode; // ivar: _intrusiveObjectPresenceScoreNode
@property (readonly) CLSSignalNode *livelyColorScoreNode; // ivar: _livelyColorScoreNode
@property (readonly) CLSSignalNode *lowLightNode; // ivar: _lowLightNode
@property (readonly) CLSSignalNode *noiseScoreNode; // ivar: _noiseScoreNode
@property (readonly) CLSSignalNode *overallAestheticScoreNode; // ivar: _overallAestheticScoreNode
@property (readonly) CLSSignalNode *pleasantCameraTiltScoreNode; // ivar: _pleasantCameraTiltScoreNode
@property (readonly) CLSSignalNode *pleasantCompositionScoreNode; // ivar: _pleasantCompositionScoreNode
@property (readonly) CLSSignalNode *pleasantLightingScoreNode; // ivar: _pleasantLightingScoreNode
@property (readonly) CLSSignalNode *pleasantPatternScoreNode; // ivar: _pleasantPatternScoreNode
@property (readonly) CLSSignalNode *pleasantPerspectiveScoreNode; // ivar: _pleasantPerspectiveScoreNode
@property (readonly) CLSSignalNode *pleasantPostProcessingScoreNode; // ivar: _pleasantPostProcessingScoreNode
@property (readonly) CLSSignalNode *pleasantReflectionsScoreNode; // ivar: _pleasantReflectionsScoreNode
@property (readonly) CLSSignalNode *pleasantSymmetryScoreNode; // ivar: _pleasantSymmetryScoreNode
@property (readonly) CLSSignalNode *sharplyFocusedSubjectScoreNode; // ivar: _sharplyFocusedSubjectScoreNode
@property (readonly) Class superclass;
@property (readonly) CLSSignalNode *tastefullyBlurredScoreNode; // ivar: _tastefullyBlurredScoreNode
@property (readonly) NSUInteger version; // ivar: _version
@property (readonly) CLSSignalNode *wellChosenSubjectScoreNode; // ivar: _wellChosenSubjectScoreNode
@property (readonly) CLSSignalNode *wellFramedSubjectScoreNode; // ivar: _wellFramedSubjectScoreNode
@property (readonly) CLSSignalNode *wellTimedShotScoreNode; // ivar: _wellTimedShotScoreNode


+(CGFloat)legacyAestheticScoreThresholdToBeAestheticallyPrettyGood;
+(CGFloat)legacyAestheticScoreThresholdToBeAwesome;
+(CGFloat)legacyAestheticScoreThresholdToNotBeJunk;
+(NSUInteger)baseSceneAnalysisVersionWithSceneAnalysisVersion:(NSUInteger)arg0 ;
+(NSUInteger)currentAnalyzerVersion;
+(NSUInteger)latestVersion;
+(id)name;
-(id)initForTesting;
-(id)initWithSceneAnalysisVersion:(NSUInteger)arg0 ;
-(void)setupVersion31;
-(void)setupVersion32;
-(void)setupVersion86;


@end


#endif