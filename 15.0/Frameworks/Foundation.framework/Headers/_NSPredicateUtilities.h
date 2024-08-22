// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSPREDICATEUTILITIES_H
#define _NSPREDICATEUTILITIES_H


#import <Foundation/Foundation.h>


@interface _NSPredicateUtilities : NSObject



+(BOOL)_isReservedWordInParser:(id)arg0 ;
+(id)_compoundPredicateClassesForSecureCoding;
+(id)_constantValueClassesForSecureCoding;
+(id)_expressionClassesForSecureCoding;
+(id)_extendedExpressionClassesForSecureCoding;
+(id)_operatorClassesForSecureCoding;
+(id)_predicateClassesForSecureCoding;
+(id)abs:(id)arg0 ;
+(id)add:(id)arg0 to:(id)arg1 ;
+(id)average:(id)arg0 ;
+(id)bitwiseAnd:(id)arg0 with:(id)arg1 ;
+(id)bitwiseOr:(id)arg0 with:(id)arg1 ;
+(id)bitwiseXor:(id)arg0 with:(id)arg1 ;
+(id)canonical:(id)arg0 ;
+(id)castObject:(id)arg0 toType:(id)arg1 ;
+(id)ceiling:(id)arg0 ;
+(id)count:(id)arg0 ;
+(id)distanceToLocation:(id)arg0 fromLocation:(id)arg1 ;
+(id)distinct:(id)arg0 ;
+(id)divide:(id)arg0 by:(id)arg1 ;
+(id)exp:(id)arg0 ;
+(id)floor:(id)arg0 ;
+(id)from:(id)arg0 subtract:(id)arg1 ;
+(id)indexed:(id)arg0 by:(id)arg1 ;
+(id)inverseOrderKey:(id)arg0 ;
+(id)leftshift:(id)arg0 by:(id)arg1 ;
+(id)length:(id)arg0 ;
+(id)ln:(id)arg0 ;
+(id)log:(id)arg0 ;
+(id)lowercase:(id)arg0 ;
+(id)max:(id)arg0 ;
+(id)median:(id)arg0 ;
+(id)min:(id)arg0 ;
+(id)mode:(id)arg0 ;
+(id)modulus:(id)arg0 by:(id)arg1 ;
+(id)multiply:(id)arg0 by:(id)arg1 ;
+(id)noindex:(id)arg0 ;
+(id)now;
+(id)objectFrom:(id)arg0 withIndex:(id)arg1 ;
+(id)onesComplement:(id)arg0 ;
+(id)raise:(id)arg0 toPower:(id)arg1 ;
+(id)random;
+(id)randomn:(id)arg0 ;
+(id)rightshift:(id)arg0 by:(id)arg1 ;
+(id)sqrt:(id)arg0 ;
+(id)stddev:(id)arg0 ;
+(id)sum:(id)arg0 ;
+(id)tokenize:(id)arg0 using:(id)arg1 ;
+(id)trunc:(id)arg0 ;
+(id)uppercase:(id)arg0 ;
-(CGFloat)distanceFromLocation:(id)arg0 ;


@end


#endif