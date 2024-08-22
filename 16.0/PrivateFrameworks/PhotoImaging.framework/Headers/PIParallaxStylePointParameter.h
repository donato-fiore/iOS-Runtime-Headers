// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPARALLAXSTYLEPOINTPARAMETER_H
#define PIPARALLAXSTYLEPOINTPARAMETER_H

@class NSString, NSNumber;


#import "PIParallaxStyleParameter.h"

@interface PIParallaxStylePointParameter : PIParallaxStyleParameter

@property (readonly, nonatomic) NSString *unit; // ivar: _unit
@property (readonly, nonatomic) NSNumber *xValue; // ivar: _xValue
@property (readonly, nonatomic) NSNumber *yValue; // ivar: _yValue


-(BOOL)isEqualToParallaxStyleParameter:(id)arg0 ;
-(id)description;
-(id)evaluateWithContext:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithX:(id)arg0 Y:(id)arg1 ;
-(id)initWithX:(id)arg0 Y:(id)arg1 unit:(id)arg2 ;
-(id)type;


@end


#endif