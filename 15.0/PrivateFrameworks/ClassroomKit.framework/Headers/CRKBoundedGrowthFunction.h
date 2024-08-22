// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKBOUNDEDGROWTHFUNCTION_H
#define CRKBOUNDEDGROWTHFUNCTION_H

@protocol CRKGrowthFunction;

#import <Foundation/Foundation.h>


@interface CRKBoundedGrowthFunction : NSObject <CRKGrowthFunction>



@property (readonly, nonatomic) NSObject<CRKGrowthFunction> *growthFunction; // ivar: _growthFunction
@property (readonly, nonatomic) CGFloat lowerBound; // ivar: _lowerBound
@property (readonly, nonatomic) CGFloat upperBound; // ivar: _upperBound


-(CGFloat)evaluateWithValue:(CGFloat)arg0 ;
-(id)initWithGrowthFunction:(id)arg0 lowerBound:(CGFloat)arg1 upperBound:(CGFloat)arg2 ;


@end


#endif