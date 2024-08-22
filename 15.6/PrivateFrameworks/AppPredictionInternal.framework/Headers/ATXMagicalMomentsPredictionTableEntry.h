// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXMAGICALMOMENTSPREDICTIONTABLEENTRY_H
#define ATXMAGICALMOMENTSPREDICTIONTABLEENTRY_H

@class NSCompoundPredicate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "ATXMagicalMomentsPrediction.h"

@interface ATXMagicalMomentsPredictionTableEntry : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSCompoundPredicate *compoundPredicate; // ivar: _compoundPredicate
@property (readonly, nonatomic) ATXMagicalMomentsPrediction *prediction; // ivar: _prediction


+(BOOL)supportsSecureCoding;
+(id)compoundPredicateFromPredicateArray:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrediction:(id)arg0 applicableCompoundPredicate:(id)arg1 ;
-(id)initWithPrediction:(id)arg0 applicablePredicates:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif