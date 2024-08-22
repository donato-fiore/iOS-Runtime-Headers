// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PGTITLESPECFACTORY_H
#define PGTITLESPECFACTORY_H


#import <Foundation/Foundation.h>


@interface PGTitleSpecFactory : NSObject



+(id)_publicEventSpecCategoryNameAtBusiness;
+(id)_publicEventSpecCategoryNameInCity;
+(id)_publicEventSpecEventName;
+(id)_publicEventSpecPerformerNames;
+(id)_specForActivity;
+(id)_specForAnniversary;
+(id)_specForBaby;
+(id)_specForBabyGrowingUp;
+(id)_specForBeaching;
+(id)_specForBirthday;
+(id)_specForBreakfast;
+(id)_specForCelebration;
+(id)_specForClimbing;
+(id)_specForDinner;
+(id)_specForDiving;
+(id)_specForEarlyMomentsWithPersonNodes:(id)arg0 ;
+(id)_specForEntertainment;
+(id)_specForFoodieWithPersonNodes:(id)arg0 locationName:(id)arg1 tripTitleLocationType:(NSUInteger)arg2 allowInspiredTastesTitle:(BOOL)arg3 genericOnly:(BOOL)arg4 ;
+(id)_specForGathering;
+(id)_specForHiking;
+(id)_specForLunch;
+(id)_specForNightOut;
+(id)_specForPeopleVisiting;
+(id)_specForPerformance;
+(id)_specForPet;
+(id)_specForSportEvent;
+(id)_specForThrowbackThursday;
+(id)_specForWedding;
+(id)_specForWinterSport;
+(id)specCollectionForFoodieMemoryWithPersonNodes:(id)arg0 locationName:(id)arg1 tripTitleLocationType:(NSUInteger)arg2 allowInspiredTastesTitle:(BOOL)arg3 genericOnly:(BOOL)arg4 ;
+(id)specCollectionForMeaningLabel:(id)arg0 ;
+(id)specCollectionForMemoryCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 ;
+(id)specCollectionForMemoryCategory:(NSUInteger)arg0 subcategory:(NSUInteger)arg1 personNodes:(id)arg2 ;


@end


#endif