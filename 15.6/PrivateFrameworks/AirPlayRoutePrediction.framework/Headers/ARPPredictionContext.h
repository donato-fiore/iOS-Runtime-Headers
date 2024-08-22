// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARPPREDICTIONCONTEXT_H
#define ARPPREDICTIONCONTEXT_H

@class NSDate, NSDictionary;

#import <Foundation/Foundation.h>


@interface ARPPredictionContext : NSObject

@property (readonly, copy, nonatomic) NSDate *microLocationEventDate; // ivar: _microLocationEventDate
@property (readonly, nonatomic) NSDictionary *microLocationProbabilityVector; // ivar: _microLocationProbabilityVector
@property (readonly, copy, nonatomic) NSDate *predictionDate; // ivar: _predictionDate


-(id)description;
-(id)initWithPredictionDate:(id)arg0 microLocationEventDate:(id)arg1 microLocationProbabilityVector:(id)arg2 ;


@end


#endif