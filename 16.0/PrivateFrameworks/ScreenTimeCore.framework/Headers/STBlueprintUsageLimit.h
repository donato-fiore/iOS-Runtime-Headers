// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STBLUEPRINTUSAGELIMIT_H
#define STBLUEPRINTUSAGELIMIT_H

@class NSManagedObject, NSArray, NSString, NSNumber;
@protocol STSerializableManagedObject, STSyncableSubObject;


#import "STBlueprint.h"
#import "STBlueprintUsageLimitScheduleRepresentation.h"

@interface STBlueprintUsageLimit : NSManagedObject <STSerializableManagedObject, STSyncableSubObject>



@property (copy, nonatomic) NSArray *applicationIdentifiers;
@property (readonly, nonatomic) STBlueprint *blueprint;
@property (retain, nonatomic) STBlueprintUsageLimitScheduleRepresentation *budgetLimitScheduleRepresentation;
@property (copy, nonatomic) NSArray *categoryIdentifiers;
@property (copy, nonatomic) NSArray *categoryIdentifiersVersion2;
@property (nonatomic) CGFloat day0Limit;
@property (nonatomic) CGFloat day1Limit;
@property (nonatomic) CGFloat day2Limit;
@property (nonatomic) CGFloat day3Limit;
@property (nonatomic) CGFloat day4Limit;
@property (nonatomic) CGFloat day5Limit;
@property (nonatomic) CGFloat day6Limit;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *itemIdentifiers;
@property (retain, nonatomic) NSNumber *notificationTimeInterval;
@property (readonly) Class superclass;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;
@property (copy, nonatomic) NSString *usageItemType;
@property (copy, nonatomic) NSArray *websiteIdentifiers;


+(id)keyPathsForValuesAffectingBudgetLimitScheduleRepresentation;
+(id)limitKeyPaths;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)dictionaryRepresentation;
-(void)_usageLimitDidChangeFromOldApplicationIdentifiers:(id)arg0 oldCategoryIdentifiers:(id)arg1 oldCategoryIdentifiersVersion2:(id)arg2 oldWebDomains:(id)arg3 oldItemIdentifiers:(id)arg4 oldItemType:(id)arg5 toNewApplicationIdentifiers:(id)arg6 newCategoryIdentifiers:(id)arg7 newCategoryIdentifiersVersion2:(id)arg8 newWebDomains:(id)arg9 newItemIdentifiers:(id)arg10 newItemType:(id)arg11 ;
-(void)awakeFromFetch;
-(void)setBudgetLimit:(CGFloat)arg0 ;
-(void)setBudgetLimit:(CGFloat)arg0 forDay:(NSUInteger)arg1 ;


@end


#endif