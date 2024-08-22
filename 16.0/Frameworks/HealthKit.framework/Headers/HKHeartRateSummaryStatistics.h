// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKHEARTRATESUMMARYSTATISTICS_H
#define HKHEARTRATESUMMARYSTATISTICS_H

@class NSMutableArray, NSDateInterval, NSArray, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKHeartRateSummaryStatistics : NSObject <NSSecureCoding>

 {
    NSMutableArray *_sortedBuckets;
}


@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain, nonatomic, setter=_setHighlightedReadings:) NSArray *highlightedReadings; // ivar: _highlightedReadings
@property (readonly, nonatomic) NSInteger numberOfBuckets; // ivar: _numberOfBuckets
@property (readonly, nonatomic) NSInteger numberOfReadings; // ivar: _numberOfReadings
@property (readonly, nonatomic) NSUUID *sessionUUID; // ivar: _sessionUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_bucketAtIndex:(NSInteger)arg0 createdIfNeeded:(BOOL)arg1 ;
-(id)_bucketsDescription;
-(id)_dictionaryRepresentation;
-(id)bucketAtIndex:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initFromStatistics:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 numberOfBuckets:(NSInteger)arg1 sessionUUID:(id)arg2 ;
-(void)addHeartRateInBeatsPerMinute:(CGFloat)arg0 forTime:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateBucketsWithBlock:(id)arg0 ;


@end


#endif