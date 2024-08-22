// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAFOODDATABASE_H
#define HDDEMODATAFOODDATABASE_H

@class NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface HDDemoDataFoodDatabase : NSObject {
    NSDictionary *_dietaryNutrientDailyValues;
    NSDictionary *_canonicalDietaryUnits;
    NSArray *_beverages;
    NSArray *_breakfastFoods;
    NSArray *_lunchFoods;
    NSArray *_snackFoods;
    NSArray *_dinnerFoods;
}




-(CGFloat)dailyValueForDietaryNutrientIdentifier:(id)arg0 ;
-(id)canonicalDietaryUnitForQuantityTypeIdentifier:(id)arg0 ;
-(id)coffee;
-(id)init;
-(id)randomFoodForType:(NSInteger)arg0 ;


@end


#endif