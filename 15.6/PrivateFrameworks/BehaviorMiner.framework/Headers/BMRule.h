// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMRULE_H
#define BMRULE_H

@class NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMRule : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSUInteger absoluteAntecedentSupport; // ivar: _absoluteAntecedentSupport
@property (readonly, nonatomic) NSUInteger absoluteConsequentSupport; // ivar: _absoluteConsequentSupport
@property (readonly, nonatomic) NSUInteger absoluteSupport; // ivar: _absoluteSupport
@property (readonly, nonatomic) NSSet *antecedent; // ivar: _antecedent
@property (readonly, nonatomic) NSUInteger basketCount; // ivar: _basketCount
@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) NSSet *consequent; // ivar: _consequent
@property (readonly, nonatomic) CGFloat conviction;
@property (readonly, nonatomic) CGFloat lift;
@property (readonly, nonatomic) CGFloat rulePowerFactor;
@property (readonly, nonatomic) CGFloat support; // ivar: _support
@property (readonly, nonatomic) NSUInteger uniqueDaysLastWeek; // ivar: _uniqueDaysLastWeek
@property (readonly, nonatomic) NSUInteger uniqueDaysTotal; // ivar: _uniqueDaysTotal


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAntecedent:(id)arg0 consequent:(id)arg1 support:(CGFloat)arg2 confidence:(CGFloat)arg3 ;
-(id)initWithAntecedent:(id)arg0 consequent:(id)arg1 support:(CGFloat)arg2 confidence:(CGFloat)arg3 basketCount:(NSUInteger)arg4 absoluteSupport:(NSUInteger)arg5 absoluteAntecedentSupport:(NSUInteger)arg6 absoluteConsequentSupport:(NSUInteger)arg7 ;
-(id)initWithAntecedent:(id)arg0 consequent:(id)arg1 support:(CGFloat)arg2 confidence:(CGFloat)arg3 basketCount:(NSUInteger)arg4 absoluteSupport:(NSUInteger)arg5 absoluteAntecedentSupport:(NSUInteger)arg6 absoluteConsequentSupport:(NSUInteger)arg7 uniqueDaysLastWeek:(NSUInteger)arg8 uniqueDaysTotal:(NSUInteger)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif