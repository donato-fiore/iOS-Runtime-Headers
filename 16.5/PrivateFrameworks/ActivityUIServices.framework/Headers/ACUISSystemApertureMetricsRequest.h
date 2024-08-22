// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ACUISSYSTEMAPERTUREMETRICSREQUEST_H
#define ACUISSYSTEMAPERTUREMETRICSREQUEST_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices28SystemApertureMetricsRequest.h"
#import "ACUISActivityItemMetricsRequest.h"

@interface ACUISSystemApertureMetricsRequest : NSObject <NSCopying, NSSecureCoding>

 {
    _TtC18ActivityUIServices28SystemApertureMetricsRequest *_metricsRequest;
}


@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *expandedMetricsRequest;
@property (copy, nonatomic) ACUISActivityItemMetricsRequest *minimalMetricsRequest;
@property (nonatomic) CGSize obstructionSize;
@property (nonatomic) CGFloat obstructionTopMargin;


+(BOOL)supportsSecureCoding;
+(id)new;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMetricsRequest:(id)arg0 ;
-(id)_systemApertureMetricsRequest;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObstructionSize:(struct CGSize )arg0 expandedMetricsRequest:(id)arg1 compactLeadingMetricsRequest:(id)arg2 compactTrailingMetricsRequest:(id)arg3 minimalMetricsRequest:(id)arg4 ;
-(id)initWithObstructionSize:(struct CGSize )arg0 expandedMetricsRequest:(id)arg1 compactMetricsRequest:(id)arg2 minimalMetricsRequest:(id)arg3 ;
-(id)initWithObstructionSize:(struct CGSize )arg0 obstructionTopMargin:(CGFloat)arg1 expandedMetricsRequest:(id)arg2 compactLeadingMetricsRequest:(id)arg3 compactTrailingMetricsRequest:(id)arg4 minimalMetricsRequest:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif