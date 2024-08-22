// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTAGGREGATIONACCUMULATOR_H
#define SIGNPOSTAGGREGATIONACCUMULATOR_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface SignpostAggregationAccumulator : NSObject

@property (readonly, nonatomic) BOOL includeRawIntervals; // ivar: _includeRawIntervals
@property (readonly, nonatomic) NSMutableDictionary *mutableSignatureToAccumulatorEntry; // ivar: _mutableSignatureToAccumulatorEntry
@property (readonly, nonatomic) NSDictionary *signatureToAccumulatorEntry;


-(id)init;
-(id)initWithIncludeRawIntervals:(BOOL)arg0 ;
-(void)handleInterval:(id)arg0 ;


@end


#endif