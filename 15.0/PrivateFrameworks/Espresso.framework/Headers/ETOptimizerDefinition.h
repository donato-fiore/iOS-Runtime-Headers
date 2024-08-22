// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ETOPTIMIZERDEFINITION_H
#define ETOPTIMIZERDEFINITION_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ETOptimizerDefinition : NSObject

@property (readonly, nonatomic) NSDictionary *optimizationParameters; // ivar: _optimizationParameters
@property (readonly) NSInteger type; // ivar: _type


-(id)initWithOptimizationAlgorithm:(NSInteger)arg0 parameters:(id)arg1 error:(*id)arg2 ;


@end


#endif