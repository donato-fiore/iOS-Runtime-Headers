// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES28SYSTEMAPERTUREMETRICSREQUEST_H
#define _TTC18ACTIVITYUISERVICES28SYSTEMAPERTUREMETRICSREQUEST_H

@class NSString;
@protocol NSCopying, NSSecureCoding, BSXPCCoding;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices26ActivityItemMetricsRequest.h"

@interface _TtC18ActivityUIServices28SystemApertureMetricsRequest : NSObject <NSCopying, NSSecureCoding, BSXPCCoding>

 {
    ? _expandedMetricsRequest;
    ? _compactLeadingMetricsRequest;
    ? _compactTrailingMetricsRequest;
    ? _minimalMetricsRequest;
}


@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactLeadingMetricsRequest;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *compactTrailingMetricsRequest;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *expandedMetricsRequest;
@property (nonatomic, readonly) NSInteger hash;
@property (nonatomic, retain) _TtC18ActivityUIServices26ActivityItemMetricsRequest *minimalMetricsRequest;
@property (nonatomic) CGSize obstructionSize; // ivar: obstructionSize
@property (nonatomic) CGFloat obstructionTopMargin; // ivar: obstructionTopMargin


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObstructionSize:(struct CGSize )arg0 expandedMetricsRequest:(id)arg1 compactLeadingMetricsRequest:(id)arg2 compactTrailingMetricsRequest:(id)arg3 minimalMetricsRequest:(id)arg4 ;
-(id)initWithObstructionSize:(struct CGSize )arg0 obstructionTopMargin:(CGFloat)arg1 expandedMetricsRequest:(id)arg2 compactLeadingMetricsRequest:(id)arg3 compactTrailingMetricsRequest:(id)arg4 minimalMetricsRequest:(id)arg5 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif