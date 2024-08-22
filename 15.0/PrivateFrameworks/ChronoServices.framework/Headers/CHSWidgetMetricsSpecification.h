// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHSWIDGETMETRICSSPECIFICATION_H
#define CHSWIDGETMETRICSSPECIFICATION_H

@class NSString, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface CHSWidgetMetricsSpecification : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger families;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSDictionary *metricsByFamily; // ivar: _metricsByFamily
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithMetricsByFamily:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMetricsByFamily:(id)arg0 ;
-(id)initWithMetricsSpecification:(id)arg0 ;
-(id)metricsForFamily:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif