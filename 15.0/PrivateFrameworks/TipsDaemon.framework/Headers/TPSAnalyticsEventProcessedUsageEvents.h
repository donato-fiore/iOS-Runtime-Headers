// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSANALYTICSEVENTPROCESSEDUSAGEEVENTS_H
#define TPSANALYTICSEVENTPROCESSEDUSAGEEVENTS_H

@class TPSAnalyticsEvent, TPSExperiment, NSDate, NSString;



@interface TPSAnalyticsEventProcessedUsageEvents : TPSAnalyticsEvent

@property (readonly, nonatomic) NSUInteger desiredOutcomeCount; // ivar: _desiredOutcomeCount
@property (readonly, nonatomic) TPSExperiment *experiment; // ivar: _experiment
@property (readonly, nonatomic) NSDate *firstShownDate; // ivar: _firstShownDate
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL overrideHoldout; // ivar: _overrideHoldout
@property (readonly, nonatomic) BOOL postHintRangeOutOfBounds; // ivar: _postHintRangeOutOfBounds
@property (readonly, nonatomic) NSUInteger postHintUsageCount; // ivar: _postHintUsageCount
@property (readonly, nonatomic) BOOL preHintRangeOutOfBounds; // ivar: _preHintRangeOutOfBounds
@property (readonly, nonatomic) NSUInteger preHintUsageCount; // ivar: _preHintUsageCount


+(BOOL)supportsSecureCoding;
-(id)eventName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUsageInfo:(id)arg0 experiment:(id)arg1 preHintUsageCount:(NSUInteger)arg2 postHintUsageCount:(NSUInteger)arg3 preHintRangeOutOfBounds:(BOOL)arg4 postHintRangeOutOfBounds:(BOOL)arg5 date:(id)arg6 ;
-(id)mutableAnalyticsEventRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif