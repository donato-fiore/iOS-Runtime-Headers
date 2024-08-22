// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTSUBSETCALCULATOR_H
#define CNCONTACTSUBSETCALCULATOR_H


#import <Foundation/Foundation.h>


@interface CNContactSubsetCalculator : NSObject



+(BOOL)_isLabel:(id)arg0 subsumableIntoLabel:(id)arg1 equivalencies:(id)arg2 ;
+(BOOL)_isLabeledValue:(id)arg0 availableInLabeledValues:(id)arg1 claimedIndices:(id)arg2 forMultiValueProperty:(id)arg3 ;
+(BOOL)isContact:(id)arg0 subsetOfContact:(id)arg1 forMultiValueProperty:(id)arg2 ;
+(BOOL)isContact:(id)arg0 subsetOfContact:(id)arg1 forSingleValueProperty:(id)arg2 ;
+(BOOL)isContact:(id)arg0 subsetOfContact:(id)arg1 ignoringProperties:(id)arg2 ;


@end


#endif