// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TASINGLEVISITDETECTIONMETRICS_H
#define TASINGLEVISITDETECTIONMETRICS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAInterVisitMetricPerDevice.h"

@interface TASingleVisitDetectionMetrics : NSObject <NSSecureCoding>



@property (readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics; // ivar: _interVisitMetrics
@property (readonly, nonatomic) NSUInteger loiType; // ivar: _loiType
@property (readonly, nonatomic) NSUInteger previousVisitType; // ivar: _previousVisitType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterVisitMetrics:(id)arg0 loiType:(NSUInteger)arg1 previousVisitType:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif