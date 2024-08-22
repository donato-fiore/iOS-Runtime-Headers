// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKRACEROUTELOCATIONSERIESQUERYSERVERCONFIGURATION_H
#define _HKRACEROUTELOCATIONSERIESQUERYSERVERCONFIGURATION_H

@class NSUUID;


#import "HKQueryServerConfiguration.h"

@interface _HKRaceRouteLocationSeriesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSUUID *clusterUUID; // ivar: _clusterUUID
@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (nonatomic) CGFloat timestampAnchor; // ivar: _timestampAnchor
@property (nonatomic) NSUInteger workoutSelection; // ivar: _workoutSelection
@property (copy, nonatomic) NSUUID *workoutUUID; // ivar: _workoutUUID


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif