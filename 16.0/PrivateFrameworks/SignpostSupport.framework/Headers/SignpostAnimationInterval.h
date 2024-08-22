// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTANIMATIONINTERVAL_H
#define SIGNPOSTANIMATIONINTERVAL_H

@class NSArray;


#import "SignpostInterval.h"
#import "SignpostSupportAnimationGraceTime.h"

@interface SignpostAnimationInterval : SignpostInterval

@property (readonly, nonatomic) NSArray *allClientDrawables; // ivar: _allClientDrawables
@property (readonly, nonatomic) NSArray *allCommits; // ivar: _allCommits
@property (readonly, nonatomic) NSArray *allContributedFrameLatencies; // ivar: _allContributedFrameLatencies
@property (readonly, nonatomic) NSArray *allContributedFrameLifetimes; // ivar: _allContributedFrameLifetimes
@property (readonly, nonatomic) NSArray *allFrameLatencies; // ivar: _allFrameLatencies
@property (readonly, nonatomic) NSArray *allFrameLifetimes; // ivar: _allFrameLifetimes
@property (readonly, nonatomic) NSArray *allHIDLatencies; // ivar: _allHIDLatencies
@property (readonly, nonatomic) NSArray *allRenderServerRenders; // ivar: _allRenderServerRenders
@property (readonly, nonatomic) NSArray *allSystemwideClientDrawables; // ivar: _allSystemwideClientDrawables
@property (readonly, nonatomic) NSArray *allSystemwideCommits; // ivar: _allSystemwideCommits
@property (readonly, nonatomic) NSArray *allTransactionLifetimes; // ivar: _allTransactionLifetimes
@property (readonly, nonatomic) NSUInteger animationType;
@property (retain, nonatomic) NSArray *compositeIntervals; // ivar: _compositeIntervals
@property (readonly, nonatomic) NSArray *contributedFirstFrameGlitches;
@property (readonly, nonatomic) NSArray *contributedGlitches;
@property (readonly, nonatomic) NSArray *contributedLongFrameLatencies; // ivar: _contributedLongFrameLatencies
@property (readonly, nonatomic) NSArray *contributedNonFirstFrameGlitches;
@property (readonly, nonatomic) CGFloat firstFrameGlitchTimeRatio;
@property (readonly, nonatomic) CGFloat firstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *firstFrameGlitches;
@property (readonly) SignpostSupportAnimationGraceTime *firstFrameGraceTime; // ivar: _firstFrameGraceTime
@property (readonly, nonatomic) NSUInteger firstFrameGraceTimeMCT;
@property (readonly, nonatomic) NSUInteger firstFrameGraceTimeMs;
@property (readonly, nonatomic) NSArray *firstFrameLifetimes;
@property (readonly, nonatomic) NSUInteger frameCount;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) CGFloat glitchTimeRatio;
@property (readonly, nonatomic) CGFloat glitchTimeRatioAdjusted;
@property (readonly, nonatomic) CGFloat glitchTimeRatioAdjustedMsPerS;
@property (readonly, nonatomic) CGFloat glitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *glitches;
@property (readonly, nonatomic) NSArray *longClientDrawables; // ivar: _longClientDrawables
@property (readonly, nonatomic) NSArray *longCommits; // ivar: _longCommits
@property (readonly, nonatomic) NSArray *longContributedFrameLifetimes; // ivar: _longContributedFrameLifetimes
@property (readonly, nonatomic) NSArray *longFrameLatencies; // ivar: _longFrameLatencies
@property (readonly, nonatomic) NSArray *longFrameLifetimes; // ivar: _longFrameLifetimes
@property (readonly, nonatomic) NSArray *longHIDLatencies; // ivar: _longHIDLatencies
@property (readonly, nonatomic) NSArray *longRenderServerRenders; // ivar: _longRenderServerRenders
@property (readonly, nonatomic) NSArray *longSystemwideClientDrawables; // ivar: _longSystemwideClientDrawables
@property (readonly, nonatomic) NSArray *longSystemwideCommits; // ivar: _longSystemwideCommits
@property (readonly, nonatomic) NSArray *longTransactionLifetimes; // ivar: _longTransactionLifetimes
@property (readonly, nonatomic) CGFloat nonFirstFrameGlitchTimeRatio;
@property (readonly, nonatomic) CGFloat nonFirstFrameGlitchTimeRatioAdjusted;
@property (readonly, nonatomic) CGFloat nonFirstFrameGlitchTimeRatioAdjustedMsPerS;
@property (readonly, nonatomic) CGFloat nonFirstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *nonFirstFrameGlitches;


+(CGFloat)_timeRatioForTimeIntervalArray:(id)arg0 inAnimationIntervals:(id)arg1 applyPerceptionAdjustments:(NSUInteger)arg2 ;
+(CGFloat)_totalAnimationDurationOfAnimationIntervals:(id)arg0 applyPerceptionAdjustments:(NSUInteger)arg1 ;
+(CGFloat)aggregateFirstFrameGlitchTimeRatioForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateFirstFrameGlitchTimeRatioMsPerSForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateGlitchTimeRatioAdjustedForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateGlitchTimeRatioAdjustedMsPerSForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateGlitchTimeRatioForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateGlitchTimeRatioMsPerSForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateNonFirstFrameGlitchTimeRatioAdjustedForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateNonFirstFrameGlitchTimeRatioAdjustedMsPerSForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateNonFirstFrameGlitchTimeRatioForAnimationIntervals:(id)arg0 ;
+(CGFloat)aggregateNonFirstFrameGlitchTimeRatioMsPerSForAnimationIntervals:(id)arg0 ;
+(NSUInteger)effectiveGlitchTimeRatioAdjustedVersion;
+(NSUInteger)forcedGlitchTimeRatioAdjustedVersion;
+(float)_durationInSecondsFromDurationInMCT:(NSUInteger)arg0 timebaseRatio:(CGFloat)arg1 ;
+(id)_glitchesFromAnimationIntervals:(id)arg0 contributedGlitchesOnly:(BOOL)arg1 skipFirstFrame:(BOOL)arg2 skipNonFirstFrame:(BOOL)arg3 ;
+(id)_unionRangesForAnimations:(id)arg0 ;
+(id)contributedFirstFrameGlitchesFromAnimationIntervals:(id)arg0 ;
+(id)contributedGlitchesFromAnimationIntervals:(id)arg0 ;
+(id)contributedNonFirstFrameGlitchesFromAnimationIntervals:(id)arg0 ;
+(id)firstFrameGlitchesFromAnimationIntervals:(id)arg0 ;
+(id)glitchesFromAnimationIntervals:(id)arg0 ;
+(id)nonFirstFrameGlitchesFromAnimationIntervals:(id)arg0 ;
+(id)serializationTypeNumber;
+(void)setForcedGlitchTimeRatioAdjustedVersion:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isFramePossibleFirstFrameForAnimation:(id)arg0 ;
-(BOOL)isFramePossibleFirstFrameForAnimation:(id)arg0 withGraceTime:(NSUInteger)arg1 ;
-(CGFloat)_timeRatioForTimeIntervalArray:(id)arg0 applyPerceptionAdjustments:(NSUInteger)arg1 ;
-(CGFloat)durationToFirstBeginSeconds:(id)arg0 ;
-(CGFloat)durationToFirstEndSeconds:(id)arg0 ;
-(NSUInteger)durationToFirstBeginMachContinuousTime:(id)arg0 ;
-(NSUInteger)durationToFirstEndMachContinuousTime:(id)arg0 ;
-(id)_animationStatsDescription;
-(id)_descriptionStringForColumn:(NSUInteger)arg0 timeFormat:(NSUInteger)arg1 asBegin:(BOOL)arg2 ;
-(id)_detailedFrameDescription;
-(id)_dictionaryRepresentationWithIsHumanReadable:(BOOL)arg0 shouldRedact:(BOOL)arg1 ;
-(id)_frameDescription;
-(id)_intervalTypeString;
-(id)_poorPerfFrameDescription;
-(id)_statsStringForTimeIntervals:(id)arg0 label:(id)arg1 ;
-(id)debugDescription;
-(id)firstFrameLifetimesWithGraceTimeMCT:(NSUInteger)arg0 ;
-(id)humanReadableType;
-(id)initWithBeginEvent:(id)arg0 endEvent:(id)arg1 accumulatedState:(id)arg2 firstFrameGraceTimeController:(id)arg3 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif