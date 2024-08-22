// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTCAPROCESSSTALLAGGREGATION_H
#define SIGNPOSTCAPROCESSSTALLAGGREGATION_H

@class NSMutableSet, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SignpostCAIntervalAggregationStats.h"

@interface SignpostCAProcessStallAggregation : NSObject <NSCopying>



@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *firstFrameGlitchStats; // ivar: _firstFrameGlitchStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *glitchStats; // ivar: _glitchStats
@property (readonly, nonatomic) BOOL isSystemAggregation; // ivar: _isSystemAggregation
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longCommitStats; // ivar: _longCommitStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longFrameLatencyStats; // ivar: _longFrameLatencyStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longFrameLifetimeStats; // ivar: _longFrameLifetimeStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longHIDLatencyStats; // ivar: _longHIDLatencyStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longRenderForTimeStats; // ivar: _longRenderForTimeStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longResponsibleFrameLifetimeStats; // ivar: _longResponsibleFrameLifetimeStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *longTransactionLifetimeStats; // ivar: _longTransactionLifetimeStats
@property (readonly, nonatomic) NSMutableSet *pids; // ivar: _pids
@property (readonly, nonatomic) NSString *processExecutablePath; // ivar: _processExecutablePath
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleFirstFrameGlitchStats; // ivar: _responsibleFirstFrameGlitchStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleGlitchStats; // ivar: _responsibleGlitchStats
@property (readonly, nonatomic) SignpostCAIntervalAggregationStats *responsibleNonFirstFrameNonSkipGlitchStats; // ivar: _responsibleNonFirstFrameNonSkipGlitchStats


-(NSUInteger)_totalStallDurationNs;
-(id)_initAsSystemAggregation;
-(id)_initWithProcessExecutablePath:(id)arg0 pid:(int)arg1 ;
-(id)_statsForType:(unsigned char)arg0 initIfMissing:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(void)_addDuration:(NSUInteger)arg0 ofType:(unsigned char)arg1 ;
-(void)_addOtherProcessStallAggregation:(id)arg0 ;
-(void)_iterateTypeStatsWithBlock:(id)arg0 ;


@end


#endif