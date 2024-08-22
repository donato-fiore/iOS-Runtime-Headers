// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TISKMETRICDEFINITION_H
#define TISKMETRICDEFINITION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TISKMetricDefinition : NSObject

@property (readonly, nonatomic) BOOL isPointMetric; // ivar: _isPointMetric
@property (readonly, nonatomic) *? metricDefinition; // ivar: _metricDefinition
@property (readonly, nonatomic) NSString *metricName; // ivar: _metricName
@property (readonly, nonatomic) int metricType; // ivar: _metricType
@property (readonly, nonatomic) NSUInteger positionalSize; // ivar: _positionalSize


+(CGFloat)pointsToMM:(CGFloat)arg0 ;
+(id)_makeMetric:(id)arg0 type:(int)arg1 ;
+(id)_makeMetric:(id)arg0 type:(int)arg1 metricDef:(struct ? *)arg2 ;
+(id)_makeMetric:(id)arg0 type:(int)arg1 metricDef:(struct ? *)arg2 isPointMetric:(BOOL)arg3 ;
+(id)_makeMetric:(id)arg0 type:(int)arg1 metricDef:(struct ? *)arg2 size:(NSUInteger)arg3 ;
+(id)_makeMetric:(id)arg0 type:(int)arg1 metricDef:(struct ? *)arg2 size:(NSUInteger)arg3 isPointMetric:(BOOL)arg4 ;
-(id)init:(id)arg0 type:(int)arg1 metricDef:(struct ? *)arg2 size:(NSUInteger)arg3 isPointMetric:(BOOL)arg4 ;


@end


#endif