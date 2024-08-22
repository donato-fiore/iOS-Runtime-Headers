// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIGNPOSTANIMATIONINTERVAL_H
#define SIGNPOSTANIMATIONINTERVAL_H

@class NSArray, NSSet;


#import "SignpostInterval.h"

@interface SignpostAnimationInterval : SignpostInterval

@property (readonly, nonatomic) NSArray *allCommits; // ivar: _allCommits
@property (readonly, nonatomic) NSArray *allContributedFrameLatencies; // ivar: _allContributedFrameLatencies
@property (readonly, nonatomic) NSArray *allContributedFrameLifetimes; // ivar: _allContributedFrameLifetimes
@property (readonly, nonatomic) NSSet *allFirstFrameLifetimesWithCommits; // ivar: _allFirstFrameLifetimesWithCommits
@property (readonly, nonatomic) NSArray *allFrameLatencies; // ivar: _allFrameLatencies
@property (readonly, nonatomic) NSArray *allFrameLifetimes; // ivar: _allFrameLifetimes
@property (readonly, nonatomic) NSArray *allHIDLatencies; // ivar: _allHIDLatencies
@property (readonly, nonatomic) NSArray *allRenderServerRenders; // ivar: _allRenderServerRenders
@property (readonly, nonatomic) NSArray *allSystemwideCommits; // ivar: _allSystemwideCommits
@property (readonly, nonatomic) NSArray *allTransactionLifetimes; // ivar: _allTransactionLifetimes
@property (retain, nonatomic) NSArray *compositeIntervals; // ivar: _compositeIntervals
@property (readonly, nonatomic) NSArray *contributedFirstFrameGlitches;
@property (readonly, nonatomic) NSArray *contributedGlitches;
@property (readonly, nonatomic) NSArray *contributedLongFrameLatencies; // ivar: _contributedLongFrameLatencies
@property (readonly, nonatomic) NSArray *contributedNonFirstFrameGlitches;
@property (readonly, nonatomic) CGFloat firstFrameGlitchTimeRatio;
@property (readonly, nonatomic) CGFloat firstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *firstFrameGlitches;
@property (readonly, nonatomic) NSUInteger frameCount;
@property (readonly, nonatomic) float frameRate;
@property (readonly, nonatomic) CGFloat glitchTimeRatio;
@property (readonly, nonatomic) CGFloat glitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *glitches;
@property (readonly, nonatomic) NSArray *longCommits; // ivar: _longCommits
@property (readonly, nonatomic) NSArray *longContributedFrameLifetimes; // ivar: _longContributedFrameLifetimes
@property (readonly, nonatomic) NSArray *longFrameLatencies; // ivar: _longFrameLatencies
@property (readonly, nonatomic) NSArray *longFrameLifetimes; // ivar: _longFrameLifetimes
@property (readonly, nonatomic) NSArray *longHIDLatencies; // ivar: _longHIDLatencies
@property (readonly, nonatomic) NSArray *longRenderServerRenders; // ivar: _longRenderServerRenders
@property (readonly, nonatomic) NSArray *longSystemwideCommits; // ivar: _longSystemwideCommits
@property (readonly, nonatomic) NSArray *longTransactionLifetimes; // ivar: _longTransactionLifetimes
@property (readonly, nonatomic) CGFloat nonFirstFrameGlitchTimeRatio;
@property (readonly, nonatomic) CGFloat nonFirstFrameGlitchTimeRatioMsPerS;
@property (readonly, nonatomic) NSArray *nonFirstFrameGlitches;


+(id)serializationTypeNumber;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_timeRatioForTimeIntervalArray:(id)arg0 ;
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
-(id)humanReadableType;
-(id)initWithBeginEvent:(id)arg0 endEvent:(id)arg1 accumulatedState:(id)arg2 ;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif