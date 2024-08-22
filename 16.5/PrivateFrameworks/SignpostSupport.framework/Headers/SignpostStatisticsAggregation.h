// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTSTATISTICSAGGREGATION_H
#define SIGNPOSTSTATISTICSAGGREGATION_H

@class NSArray, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SignpostStatisticsAggregation : NSObject

@property (readonly, nonatomic) NSArray *aggregatedSignpostObjects; // ivar: _aggregatedSignpostObjects
@property (readonly, nonatomic) NSString *aggregationIdentifier; // ivar: _aggregationIdentifier
@property (readonly, nonatomic) NSDictionary *aggregationIdentifierToChildAggregationDict; // ivar: _aggregationIdentifierToChildAggregationDict
@property (readonly, nonatomic) ? averageDuration; // ivar: _averageDuration
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSUInteger count; // ivar: _count
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) ? stddevDuration; // ivar: _stddevDuration
@property (readonly, nonatomic) NSString *subsystem; // ivar: _subsystem
@property (readonly, nonatomic) unsigned char tier; // ivar: _tier
@property (readonly, nonatomic) NSString *tierString;
@property (readonly) float timeBaseRatio; // ivar: _timeBaseRatio
@property (readonly, nonatomic) ? totalDuration; // ivar: _totalDuration


+(id)statisticsAggregationForObjects:(id)arg0 ;
-(id)_dictRepresentation;
-(id)_initWithSignpostObjects:(id)arg0 tier:(unsigned char)arg1 ;
-(id)aggregationForTimeInterval:(id)arg0 containedOnly:(BOOL)arg1 ;
-(id)debugDescription;
-(id)jsonDescription:(NSUInteger)arg0 ;
-(void)_calculateStats;


@end


#endif