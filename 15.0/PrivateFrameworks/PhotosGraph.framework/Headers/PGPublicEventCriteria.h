// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGPUBLICEVENTCRITERIA_H
#define PGPUBLICEVENTCRITERIA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PGPublicEventCriteria : NSObject

@property (nonatomic) BOOL allowsExpandingTimeAttendance; // ivar: _allowsExpandingTimeAttendance
@property (retain, nonatomic) NSArray *disambiguationCriteria; // ivar: _disambiguationCriteria
@property (retain, nonatomic) NSString *eventCategory; // ivar: _eventCategory
@property (readonly, nonatomic) BOOL hasMinimumAttendance;
@property (retain, nonatomic) NSArray *highConfidenceCriteria; // ivar: _highConfidenceCriteria
@property (nonatomic) CGFloat maximumDistance; // ivar: _maximumDistance
@property (nonatomic) NSInteger minimumAttendance; // ivar: _minimumAttendance
@property (nonatomic) CGFloat minimumTimeAttendance; // ivar: _minimumTimeAttendance
@property (retain, nonatomic) NSArray *prohibitedCriteria; // ivar: _prohibitedCriteria
@property (nonatomic) BOOL shouldCheckForTemporalEventMatches; // ivar: _shouldCheckForTemporalEventMatches
@property (nonatomic) CGFloat temporalEventDistanceThreshold; // ivar: _temporalEventDistanceThreshold


-(BOOL)_hasSufficientTimeOverlapForEvent:(id)arg0 matchingOptions:(id)arg1 ;
-(BOOL)_isMatchingMeaningDisambiguationForEvent:(id)arg0 matchingOptions:(id)arg1 withHighConfidence:(*BOOL)arg2 ;
-(BOOL)_isMatchingTemporalClusterEventForEvent:(id)arg0 matchingOptions:(id)arg1 ;
-(BOOL)isMatchingEvent:(id)arg0 matchingOptions:(id)arg1 withHighConfidence:(*BOOL)arg2 matchingDistance:(*CGFloat)arg3 ;


@end


#endif