// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKEXPONENTIALGROWTHFUNCTION_H
#define CRKEXPONENTIALGROWTHFUNCTION_H

@protocol CRKGrowthFunction;

#import <Foundation/Foundation.h>


@interface CRKExponentialGrowthFunction : NSObject <CRKGrowthFunction>



@property (readonly, nonatomic) CGFloat growthRate; // ivar: _growthRate


-(CGFloat)evaluateWithValue:(CGFloat)arg0 ;
-(id)initWithGrowthRate:(CGFloat)arg0 ;


@end


#endif