// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDCONTAINER_H
#define PDCONTAINER_H

@class NSDictionary, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface PDContainer : NSObject

@property (retain, nonatomic) NSDictionary *configuration; // ivar: _configuration
@property (retain, nonatomic) NSMutableDictionary *extensions; // ivar: _extensions
@property (retain, nonatomic) NSString *generator; // ivar: _generator
@property (retain, nonatomic) NSDictionary *labels; // ivar: _labels
@property (nonatomic) BOOL largerBetter; // ivar: _largerBetter
@property (readonly, nonatomic) NSUInteger measurementCount;
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *notes; // ivar: _notes
@property (retain, nonatomic) NSMutableDictionary *perfdata; // ivar: _perfdata
@property (retain, nonatomic) NSString *primaryMetricFilter; // ivar: _primaryMetricFilter
@property (retain, nonatomic) NSString *testDescription; // ivar: _testDescription
@property (retain, nonatomic) NSDictionary *variables; // ivar: _variables
@property (nonatomic) NSUInteger version; // ivar: _version


+(id)containerWithFileURL:(id)arg0 error:(*id)arg1 ;
+(id)containerWithJSONData:(id)arg0 error:(*id)arg1 ;
+(id)containerWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
+(id)containerWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateAggregatedMeasurementsMatchingFilter:(id)arg0 ignoringVariables:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg0 ignoringVariables:(id)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)enumerateMeasurementsMatchingFilter:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateMeasurementsMatchingNullableFilter:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)enumerateMeasurementsWithError:(*id)arg0 usingBlock:(id)arg1 ;
-(BOOL)isComparableTo:(id)arg0 ;
-(BOOL)isLike:(id)arg0 ;
-(id)aggregateMeasurementsMatchingFilter:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)initWithFileURL:(id)arg0 error:(*id)arg1 ;
-(id)initWithJSONData:(id)arg0 error:(*id)arg1 ;
-(id)initWithJSONDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithPath:(id)arg0 error:(*id)arg1 ;


@end


#endif