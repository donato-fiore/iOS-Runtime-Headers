// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TAGENERALDETECTIONMETRICS_H
#define TAGENERALDETECTIONMETRICS_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TAInterVisitMetricPerDevice.h"

@interface TAGeneralDetectionMetrics : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger dominantUserActivity; // ivar: _dominantUserActivity
@property (readonly, nonatomic) BOOL geoNavHint; // ivar: _geoNavHint
@property (readonly, nonatomic) TAInterVisitMetricPerDevice *interVisitMetrics; // ivar: _interVisitMetrics
@property (readonly, nonatomic) NSInteger pdState; // ivar: _pdState
@property (readonly, nonatomic) BOOL vehicularStateHint; // ivar: _vehicularStateHint


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterVisitMetrics:(id)arg0 dominantUserActivity:(NSUInteger)arg1 pdState:(NSInteger)arg2 geoNavHint:(BOOL)arg3 vehicularStateHint:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif