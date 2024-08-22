// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HKFACTORIZATION_H
#define _HKFACTORIZATION_H

@class NSMapTable;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _HKFactorization : NSObject <NSCopying, NSSecureCoding>

 {
    NSMapTable *_factors;
}




+(BOOL)supportsSecureCoding;
+(id)factorization;
+(id)factorizationFromString:(id)arg0 factorGrammar:(id)arg1 ;
+(id)factorizationWithFactor:(id)arg0 exponent:(NSInteger)arg1 ;
+(id)factorizationWithFactorsAndExponents:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_exponentForFactor:(id)arg0 ;
-(NSInteger)exponentForFactor:(id)arg0 ;
-(NSUInteger)factorCount;
-(NSUInteger)hash;
-(id)anyFactor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)factorizationByDividing:(id)arg0 ;
-(id)factorizationByMultiplying:(id)arg0 ;
-(id)factorizationByRaisingToExponent:(NSInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)reciprocal;
-(id)unitString;
-(void)_enumerateFactorsWithHandler:(id)arg0 ;
-(void)_multiplyByFactor:(id)arg0 exponent:(NSInteger)arg1 ;
-(void)_multiplyByFactorization:(id)arg0 ;
-(void)_raiseToExponent:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateFactorsWithHandler:(id)arg0 ;


@end


#endif