// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSPSLEEPEVENTTIMELINE_H
#define HKSPSLEEPEVENTTIMELINE_H

@class NSArray, NSMutableArray, NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKSPSleepEventTimeline : NSObject <NSCopying>



@property (readonly, nonatomic) NSArray *events;
@property (readonly, nonatomic) NSMutableArray *orderedOccurrences; // ivar: _orderedOccurrences
@property (readonly, nonatomic) NSDate *originDate; // ivar: _originDate
@property (readonly, nonatomic) NSArray *previousEvents;
@property (readonly, nonatomic) NSArray *previousResolvedOccurrences;
@property (readonly, nonatomic) NSArray *resolvedOccurrences;
@property (readonly, nonatomic) NSMutableArray *timelineAdjustments; // ivar: _timelineAdjustments
@property (readonly, nonatomic) NSArray *upcomingEvents;
@property (readonly, nonatomic) NSArray *upcomingResolvedOccurrences;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithOriginDate:(id)arg0 ;
-(id)resolvedOccurrenceContainingDate:(id)arg0 ;
-(id)resolvedOccurrenceContainingOrPrecedingDate:(id)arg0 ;
-(id)resolvedOccurrenceOverlappingOccurrence:(id)arg0 ;
-(id)resolvedOccurrencePrecedingDate:(id)arg0 ;
-(id)upcomingResolvedOccurrencesWithinInterval:(CGFloat)arg0 ;
-(void)_adjustedResolvedOccurrence:(id)arg0 adjustmentBlock:(id)arg1 ;
-(void)addResolvedOccurrence:(id)arg0 ;
-(void)adjustResolvedOccurrence:(id)arg0 removingEventWithIdentifier:(id)arg1 ;
-(void)adjustResolvedOccurrence:(id)arg0 withEvent:(id)arg1 ;


@end


#endif