// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDAGGREGATEMEASUREMENT_H
#define PDAGGREGATEMEASUREMENT_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "PDContainer.h"
#import "PDMeasurement.h"

@interface PDAggregateMeasurement : NSObject

@property (retain, nonatomic) PDContainer *container; // ivar: _container
@property (retain, nonatomic) NSMutableDictionary *labels; // ivar: _labels
@property (nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) PDMeasurement *measurement;
@property (retain, nonatomic) NSString *metric; // ivar: _metric
@property (nonatomic) CGFloat min; // ivar: _min
@property (nonatomic) NSUInteger samples; // ivar: _samples
@property (nonatomic) *pooled_mean stats_mean; // ivar: _stats_mean
@property (retain, nonatomic) NSString *unitString; // ivar: _unitString
@property (nonatomic) BOOL validMax; // ivar: _validMax
@property (nonatomic) BOOL validMin; // ivar: _validMin
@property (nonatomic) *running_mean values_mean; // ivar: _values_mean
@property (retain, nonatomic) NSMutableDictionary *variables; // ivar: _variables


-(id)initWithContainer:(id)arg0 metric:(id)arg1 unitString:(id)arg2 ;
-(void)dealloc;
-(void)updateWithMeasurement:(id)arg0 ;


@end


#endif