// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSMETRICSFIGAROEVENTMODIFIER_H
#define AMSMETRICSFIGAROEVENTMODIFIER_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface AMSMetricsFigaroEventModifier : NSObject

@property (readonly, nonatomic) NSDictionary *fieldFilters; // ivar: _fieldFilters
@property (readonly, nonatomic) CGFloat flushInterval;
@property (readonly, nonatomic) NSDictionary *metricsDictionary; // ivar: _metricsDictionary
@property (readonly, nonatomic) NSDictionary *overrideDictionary; // ivar: _overrideDictionary
@property (readonly, nonatomic) NSString *sampleSessionKey; // ivar: _sampleSessionKey


-(BOOL)_shouldSampleEvent:(id)arg0 ;
-(BOOL)fieldFiltersMatchEvent:(id)arg0 ;
-(BOOL)shouldDropEvent:(id)arg0 ;
-(BOOL)shouldSkipEvent:(id)arg0 ;
-(id)_createSampleSessionKey;
-(id)_encodedExperimentDataForTopic:(id)arg0 ;
-(id)_fieldFiltersFromOverrides:(id)arg0 ;
-(id)_overridePropertyForKey:(id)arg0 ;
-(id)initWithMetricsDictionary:(id)arg0 overrideDictionary:(id)arg1 ;
-(id)prepareEvent:(id)arg0 ;
-(id)reportingURLForEvent:(id)arg0 ;


@end


#endif