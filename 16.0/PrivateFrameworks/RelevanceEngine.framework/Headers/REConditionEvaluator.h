// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RECONDITIONEVALUATOR_H
#define RECONDITIONEVALUATOR_H


#import <Foundation/Foundation.h>

#import "RECondition.h"

@interface REConditionEvaluator : NSObject

@property (readonly, nonatomic) RECondition *condition; // ivar: _condition
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (readonly, nonatomic) BOOL needsPredictionSet;


-(BOOL)acceptsFeatureMap:(id)arg0 predictionSet:(id)arg1 explanation:(*id)arg2 ;
-(BOOL)compareFeatureMap:(id)arg0 toFeatureMap:(id)arg1 ;
-(id)initWithCondition:(id)arg0 ;


@end


#endif