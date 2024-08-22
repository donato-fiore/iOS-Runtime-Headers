// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TAVISITSTATESETTINGS_H
#define TAVISITSTATESETTINGS_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface TAVisitStateSettings : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger interVisitMetricSnapshotCapacity; // ivar: _interVisitMetricSnapshotCapacity
@property (readonly, nonatomic) CGFloat interVisitSnapshotUpdateInterval; // ivar: _interVisitSnapshotUpdateInterval
@property (readonly, nonatomic) NSUInteger loiBufferPerTypeCapacity; // ivar: _loiBufferPerTypeCapacity
@property (readonly, nonatomic) CGFloat loiBufferTimeIntervalOfRetention; // ivar: _loiBufferTimeIntervalOfRetention
@property (readonly, nonatomic) NSUInteger maxNSigmaBetweenLastLocationAndVisit; // ivar: _maxNSigmaBetweenLastLocationAndVisit
@property (readonly, nonatomic) CGFloat qualitySnapshotDisplayOnDuration; // ivar: _qualitySnapshotDisplayOnDuration
@property (readonly, nonatomic) CGFloat qualitySnapshotDwellDuration; // ivar: _qualitySnapshotDwellDuration
@property (readonly, nonatomic) NSSet *sensitiveLOITypes; // ivar: _sensitiveLOITypes
@property (readonly, nonatomic) CGFloat snapshotBufferTimeIntervalOfRetention; // ivar: _snapshotBufferTimeIntervalOfRetention
@property (readonly, nonatomic) CGFloat thresholdOfLocationRelevance; // ivar: _thresholdOfLocationRelevance
@property (readonly, nonatomic) NSUInteger uniqueUTObservationCapPerVisit; // ivar: _uniqueUTObservationCapPerVisit
@property (readonly, nonatomic) NSUInteger visitDisplayBufferCapacity; // ivar: _visitDisplayBufferCapacity
@property (readonly, nonatomic) NSUInteger visitSnapshotCapacity; // ivar: _visitSnapshotCapacity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaults;
-(id)initWithVisitSnapshotCapacity:(NSUInteger)arg0 visitDisplayBufferCapacity:(NSUInteger)arg1 interVisitMetricSnapshotCapacity:(NSUInteger)arg2 interVisitSnapshotUpdateInterval:(CGFloat)arg3 thresholdOfLocationRelevance:(CGFloat)arg4 snapshotBufferTimeIntervalOfRetention:(CGFloat)arg5 loiBufferPerTypeCapacity:(NSUInteger)arg6 loiBufferTimeIntervalOfRetention:(CGFloat)arg7 maxNSigmaBetweenLastLocationAndVisit:(NSUInteger)arg8 qualitySnapshotDwellDuration:(CGFloat)arg9 qualitySnapshotDisplayOnDuration:(CGFloat)arg10 uniqueUTObservationCapPerVisit:(NSUInteger)arg11 sensitiveLOITypes:(id)arg12 ;
-(id)initWithVisitSnapshotCapacityOrDefault:(id)arg0 visitDisplayBufferCapacityOrDefault:(id)arg1 interVisitMetricSnapshotCapacityOrDefault:(id)arg2 interVisitSnapshotUpdateIntervalOrDefault:(id)arg3 thresholdOfLocationRelevanceOrDefault:(id)arg4 snapshotBufferTimeIntervalOfRetentionOrDefault:(id)arg5 loiBufferPerTypeCapacityOrDefault:(id)arg6 loiBufferTimeIntervalOfRetentionOrDefault:(id)arg7 maxNSigmaBetweenLastLocationAndVisitOrDefault:(id)arg8 qualitySnapshotDwellDurationOrDefault:(id)arg9 qualitySnapshotDisplayOnDurationOrDefault:(id)arg10 uniqueUTObservationCapPerVisitOrDefault:(id)arg11 sensitiveLOITypesOrDefault:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif