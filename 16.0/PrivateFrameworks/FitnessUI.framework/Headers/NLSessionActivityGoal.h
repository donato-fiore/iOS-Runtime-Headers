// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NLSESSIONACTIVITYGOAL_H
#define NLSESSIONACTIVITYGOAL_H

@class HKQuantity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NLSessionActivityGoal : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger goalTypeIdentifier; // ivar: _goalTypeIdentifier
@property (copy, nonatomic) HKQuantity *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)goalWithGoalTypeIdentifier:(NSUInteger)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNLSessionActivityGoal:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSUInteger)hash;
-(id)_quantityForDoubleValue:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGoalTypeIdentifier:(NSUInteger)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif