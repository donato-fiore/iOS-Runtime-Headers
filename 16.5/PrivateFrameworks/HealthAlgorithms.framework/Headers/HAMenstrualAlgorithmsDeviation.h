// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAMENSTRUALALGORITHMSDEVIATION_H
#define HAMENSTRUALALGORITHMSDEVIATION_H

@class NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HAMenstrualAlgorithmsDeviation : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int julianDayOfAnalysisWindowEnd; // ivar: _julianDayOfAnalysisWindowEnd
@property (nonatomic) unsigned int julianDayOfAnalysisWindowStart; // ivar: _julianDayOfAnalysisWindowStart
@property (copy, nonatomic) NSDictionary *metricsForCoreAnalytics; // ivar: _metricsForCoreAnalytics


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif