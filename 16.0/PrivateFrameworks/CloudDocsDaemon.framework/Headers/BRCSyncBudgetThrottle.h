// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCSYNCBUDGETTHROTTLE_H
#define BRCSYNCBUDGETTHROTTLE_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BRCSyncBudgetThrottle : NSObject <NSSecureCoding>

 {
    CGFloat _t0;
    float _values;
}


@property (readonly, nonatomic) float lastDay;
@property (readonly, nonatomic) float lastHour;
@property (readonly, nonatomic) float lastMinute;


+(BOOL)supportsSecureCoding;
-(CGFloat)_timeToLoseAmount:(float)arg0 count:(int)arg1 ;
-(CGFloat)nextDateWithBudgetWithDefaults:(id)arg0 ;
-(float)availableBudgetWithDefaults:(id)arg0 ;
-(id)debugDescriptionWithDefaults:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)clear;
-(void)consume:(float)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateForTime:(CGFloat)arg0 ;


@end


#endif