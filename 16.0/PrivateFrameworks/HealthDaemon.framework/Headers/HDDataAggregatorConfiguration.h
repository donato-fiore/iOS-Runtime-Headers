// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDATAAGGREGATORCONFIGURATION_H
#define HDDATAAGGREGATORCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HDDataAggregatorConfiguration : NSObject <NSCopying>



@property (readonly, nonatomic) CGFloat aggregationInterval; // ivar: _aggregationInterval
@property (readonly, nonatomic) CGFloat collectionLatency; // ivar: _collectionLatency
@property (readonly, nonatomic) BOOL hasActiveWorkout; // ivar: _hasActiveWorkout
@property (nonatomic) BOOL hasForegroundObserver; // ivar: _hasForegroundObserver
@property (readonly, nonatomic) CGFloat maximumSeriesDuration; // ivar: _maximumSeriesDuration


+(id)configurationWithLatency:(CGFloat)arg0 interval:(CGFloat)arg1 seriesDuration:(CGFloat)arg2 activeWorkout:(BOOL)arg3 foregroundObserver:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif