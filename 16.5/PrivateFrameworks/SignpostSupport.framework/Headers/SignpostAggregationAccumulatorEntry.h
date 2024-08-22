// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTAGGREGATIONACCUMULATORENTRY_H
#define SIGNPOSTAGGREGATIONACCUMULATORENTRY_H

@class NSDictionary, NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SignpostAggregation.h"

@interface SignpostAggregationAccumulatorEntry : NSObject

@property (readonly, nonatomic) SignpostAggregation *accumulatedAggregation; // ivar: _accumulatedAggregation
@property (readonly, nonatomic) NSDictionary *aggregationAdditionErrorCounts;
@property (readonly, nonatomic) NSDictionary *aggregationCreationErrorCounts;
@property (readonly, nonatomic) NSString *aggregationDescription; // ivar: _aggregationDescription
@property (readonly, nonatomic) NSString *aggregationSignature;
@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) BOOL includeRawIntervals; // ivar: _includeRawIntervals
@property (readonly, nonatomic) NSMutableDictionary *mutableAggregationAdditionErrorCounts; // ivar: _mutableAggregationAdditionErrorCounts
@property (readonly, nonatomic) NSMutableDictionary *mutableAggregationCreationErrorCounts; // ivar: _mutableAggregationCreationErrorCounts
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSString *subsystem; // ivar: _subsystem


+(void)_bumpErrorCount:(id)arg0 countDict:(id)arg1 ;
-(id)_initWithSubsystem:(id)arg0 category:(id)arg1 name:(id)arg2 aggregationDescription:(id)arg3 includeRawIntervals:(BOOL)arg4 ;
-(void)_handleInterval:(id)arg0 ;


@end


#endif