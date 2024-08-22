// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTAGGREGATIONGROUPDURATION_H
#define SIGNPOSTAGGREGATIONGROUPDURATION_H

@class NSString, NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SignpostAggregationGroup.h"

@interface SignpostAggregationGroupDuration : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat averageDurationMs;
@property (readonly, nonatomic) NSUInteger averageDurationNs;
@property (readonly, nonatomic) CGFloat averageDurationSeconds;
@property (readonly, nonatomic) NSString *groupName; // ivar: _groupName
@property (readonly, nonatomic) NSNumber *maxDurationMs;
@property (retain, nonatomic) NSNumber *maxDurationNs; // ivar: _maxDurationNs
@property (readonly, nonatomic) NSNumber *maxDurationSeconds;
@property (readonly, nonatomic) NSNumber *minDurationMs;
@property (retain, nonatomic) NSNumber *minDurationNs; // ivar: _minDurationNs
@property (readonly, nonatomic) NSNumber *minDurationSeconds;
@property (weak, nonatomic) SignpostAggregationGroup *parentGroup; // ivar: _parentGroup
@property (readonly, nonatomic) BOOL telemetryEnabled; // ivar: _telemetryEnabled
@property (readonly, nonatomic) CGFloat totalDurationMs;
@property (readonly, nonatomic) NSUInteger totalDurationNs; // ivar: _totalDurationNs
@property (readonly, nonatomic) CGFloat totalDurationSeconds;
@property (readonly, nonatomic) NSString *type; // ivar: _type


+(id)_sumOfDuration1:(id)arg0 duration2:(id)arg1 errorOut:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_addDuration:(id)arg0 ;
-(id)_coreAnalyticsFieldName;
-(id)_dictionaryRepresentation;
-(id)_initWithMetadataSegment:(id)arg0 errorOut:(*id)arg1 ;
-(id)_initWithType:(id)arg0 groupName:(id)arg1 durationNs:(NSUInteger)arg2 telemetryEnabled:(BOOL)arg3 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_addToPayloadDictionary:(id)arg0 ;


@end


#endif