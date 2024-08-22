// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMINMSCONFIGURATION_H
#define HMINMSCONFIGURATION_H

@class HMFObject, NSNumber, NSDictionary;



@interface HMINMSConfiguration : HMFObject

@property (readonly) NSNumber *metricDefault; // ivar: _metricDefault
@property (readonly) NSDictionary *metricWithLabels; // ivar: _metricWithLabels
@property (readonly) NSNumber *thresholdDefault; // ivar: _thresholdDefault
@property (readonly) NSDictionary *thresholdWithLabels; // ivar: _thresholdWithLabels


-(NSInteger)metricForLabel:(id)arg0 ;
-(id)initWithThresholdWithLabels:(id)arg0 metricWithLabels:(id)arg1 thresholdDefault:(id)arg2 metricDefault:(id)arg3 ;
-(id)thresholdForLabel:(id)arg0 ;


@end


#endif