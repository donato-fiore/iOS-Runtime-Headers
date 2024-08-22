// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXDEFAULTHOMESCREENITEMONBOARDINGSTACKSPRODUCER_H
#define ATXDEFAULTHOMESCREENITEMONBOARDINGSTACKSPRODUCER_H

@class NSDictionary, NSNumber, NSMutableDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface ATXDefaultHomeScreenItemOnboardingStacksProducer : NSObject {
    NSDictionary *_appLaunchCounts;
}


@property (readonly, nonatomic) NSUInteger adblDrainClassification; // ivar: _adblDrainClassification
@property (readonly, nonatomic) NSNumber *cachedHasiCloudFamily; // ivar: _cachedHasiCloudFamily
@property (retain, nonatomic) NSMutableDictionary *cachedWidgetPersonalityToAppScore; // ivar: _cachedWidgetPersonalityToAppScore
@property (readonly, nonatomic) BOOL isDayZeroExperience; // ivar: _isDayZeroExperience
@property (readonly, nonatomic) BOOL isiPad; // ivar: _isiPad
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary; // ivar: _personalityToDescriptorDictionary
@property (readonly, nonatomic) BOOL shouldIncludeContactsWidget; // ivar: _shouldIncludeContactsWidget
@property (readonly, nonatomic) NSArray *stackableCandidates; // ivar: _stackableCandidates


-(id)_blockedWidgetPersonalities;
-(id)_dayZeroOnboardingStacks;
-(id)_firstUnusedWidgetFromList:(id)arg0 fallbackWidgets:(id)arg1 usedPersonalities:(id)arg2 size:(NSUInteger)arg3 ;
-(id)_firstWidgetThatIsntUsedYet:(id)arg0 usedPersonalities:(id)arg1 ;
-(id)_personalizedOnboardingStackForSize:(NSUInteger)arg0 requiredWidgetPersonalities:(id)arg1 conditionalWidgetPersonalities:(id)arg2 fallbackWidgetPersonalities:(id)arg3 rankedThirdPartyWidgets:(id)arg4 usedWidgetPersonalities:(id)arg5 shouldAdd3PWidgetToStack:(BOOL)arg6 ;
-(id)_personalizedOnboardingStacksForSize:(NSUInteger)arg0 requiredWidgetPersonalitiesForStack1:(id)arg1 requiredWidgetPersonalitiesForStack2:(id)arg2 conditionalWidgetPersonalitiesForStack1:(id)arg3 conditionalWidgetPersonalitiesForStack2:(id)arg4 fallbackWidgetPersonalitiesForStack1:(id)arg5 fallbackWidgetPersonalitiesForStack2:(id)arg6 rankedThirdPartyWidgets:(id)arg7 blockedWidgetPersonalities:(id)arg8 ;
-(id)initWithCandidateWidgets:(id)arg0 cachedWidgetPersonalityToAppScore:(id)arg1 personalityToDescriptorDictionary:(id)arg2 adblDrainClassification:(NSUInteger)arg3 isiPad:(BOOL)arg4 isDayZeroExperience:(BOOL)arg5 shouldIncludeContactsWidget:(BOOL)arg6 cachedHasiCloudFamily:(id)arg7 appLaunchCounts:(id)arg8 ;
-(id)initWithOnboardingStackWidgetCache:(id)arg0 adblDrainClassification:(NSUInteger)arg1 isiPad:(BOOL)arg2 shouldIncludeContactsWidget:(BOOL)arg3 appLaunchCounts:(id)arg4 ;
-(id)onboardingStacks;
-(id)personalizedOnboardingStacksWithRankingAlgorithm:(int)arg0 ;
-(void)_addWidget:(id)arg0 toStack:(id)arg1 andMarkAsUsed:(id)arg2 ;


@end


#endif