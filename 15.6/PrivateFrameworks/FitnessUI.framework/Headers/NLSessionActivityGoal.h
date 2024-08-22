// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NLSESSIONACTIVITYGOAL_H
#define NLSESSIONACTIVITYGOAL_H

@class HKQuantity;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NLSessionActivityGoal : NSObject <NSSecureCoding>

 {
    CGFloat _doubleValue;
}


@property (nonatomic) NSUInteger goalTypeIdentifier; // ivar: _goalTypeIdentifier
@property (retain, nonatomic) HKQuantity *value;


+(BOOL)supportsSecureCoding;
+(id)goalFromURL:(id)arg0 ;
+(id)goalWithGoalTypeIdentifier:(NSUInteger)arg0 value:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNLSessionActivityGoal:(id)arg0 ;
-(CGFloat)_doubleValueForQuantity:(id)arg0 ;
-(CGFloat)doubleValue;
-(NSUInteger)hash;
-(id)_quantityForDoubleValue:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithGoalTypeIdentifier:(NSUInteger)arg0 value:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif