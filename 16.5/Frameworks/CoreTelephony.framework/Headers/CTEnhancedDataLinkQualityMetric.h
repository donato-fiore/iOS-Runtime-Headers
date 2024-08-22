// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTENHANCEDDATALINKQUALITYMETRIC_H
#define CTENHANCEDDATALINKQUALITYMETRIC_H



#import "CTEnhancedLinkQualityMetric.h"

@interface CTEnhancedDataLinkQualityMetric : CTEnhancedLinkQualityMetric

@property (nonatomic) NSInteger metricType; // ivar: _metricType


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 enhancedLinkQuality:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif