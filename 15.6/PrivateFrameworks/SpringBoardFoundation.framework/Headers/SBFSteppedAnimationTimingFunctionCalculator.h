// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBFSTEPPEDANIMATIONTIMINGFUNCTIONCALCULATOR_H
#define SBFSTEPPEDANIMATIONTIMINGFUNCTIONCALCULATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBFSteppedAnimationTimingFunctionCalculator : NSObject {
    NSMutableDictionary *_functionsByName;
}


@property (nonatomic) CGFloat percentComplete; // ivar: _percentComplete


-(CGFloat)valueForFunctionWithName:(id)arg0 ;
-(id)init;
-(id)timingFunctionNames;
-(void)addTimingFunction:(id)arg0 withName:(id)arg1 ;
-(void)addTimingFunction:(id)arg0 withName:(id)arg1 constrainedToIntervalBetween:(CGFloat)arg2 and:(CGFloat)arg3 ;
-(void)addTimingFunctionWithName:(id)arg0 fromNormalizedAnimationSettings:(id)arg1 ;


@end


#endif