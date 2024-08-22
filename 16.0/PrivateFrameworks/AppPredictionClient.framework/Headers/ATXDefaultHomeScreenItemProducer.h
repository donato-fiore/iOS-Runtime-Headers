// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXDEFAULTHOMESCREENITEMPRODUCER_H
#define ATXDEFAULTHOMESCREENITEMPRODUCER_H

@class NSMutableDictionary, NSDictionary, NSArray, NSSet;
@protocol ATXCategoricalHistogramProtocol;

#import <Foundation/Foundation.h>

#import "ATXDefaultHomeScreenItemUpdate.h"

@interface ATXDefaultHomeScreenItemProducer : NSObject {
    NSMutableDictionary *_cachedWidgetPersonalityToAppScore;
    id<ATXCategoricalHistogramProtocol> *_spotlightAppLaunchHistogram;
    NSDictionary *_appLaunchCounts;
}


@property (nonatomic) NSUInteger adblDrainClassification; // ivar: _adblDrainClassification
@property (retain, nonatomic) NSArray *candidateDescriptors; // ivar: _candidateDescriptors
@property (readonly, nonatomic) NSDictionary *descriptorInstallDates; // ivar: _descriptorInstallDates
@property (readonly, nonatomic) NSSet *descriptors; // ivar: _descriptors
@property (readonly, nonatomic) NSArray *homeScreenConfig; // ivar: _homeScreenConfig
@property (nonatomic) BOOL isDayZeroExperience; // ivar: _isDayZeroExperience
@property (nonatomic) BOOL isiPad; // ivar: _isiPad
@property (retain, nonatomic) NSDictionary *personalityToDescriptorDictionary; // ivar: _personalityToDescriptorDictionary
@property (readonly, nonatomic) ATXDefaultHomeScreenItemUpdate *update;
@property (retain, nonatomic) NSSet *widgetsOnHomeScreen; // ivar: _widgetsOnHomeScreen


+(id)appPredictionsWidgetDescriptor;
-(BOOL)_isNewlyInstalledWidget:(id)arg0 ;
-(BOOL)_isStackConfiguredOnHomeScreen;
-(NSInteger)_rankTypeGivenWidgetIsNewlyInstalled:(BOOL)arg0 isAlreadyAdded:(BOOL)arg1 ;
-(id)_appPredictionsWidgetDescriptor;
-(id)_dayZeroOnboardingStacks;
-(id)_dayZeroUpdate;
-(id)_firstInstalledWidgetDate;
-(id)_personalizedGalleryWidgetsForSize:(NSUInteger)arg0 ;
-(id)_personalizedStack;
-(id)_personalizedStackForRankerPlistType:(int)arg0 ;
-(id)_personalizedStackFromCandidates:(id)arg0 rankerPlistType:(int)arg1 size:(NSUInteger)arg2 ;
-(id)_personalizedTodayStack;
-(id)_personalizedUpdate;
-(id)_stackFromDefaultStackPersonalities:(id)arg0 ;
-(id)_stackableCandidates;
-(id)initWithDescriptors:(id)arg0 descriptorInstallDates:(id)arg1 homeScreenConfig:(id)arg2 isDayZeroExperience:(BOOL)arg3 isiPad:(BOOL)arg4 spotlightAppLaunchHistogram:(id)arg5 adblDrainClassification:(NSUInteger)arg6 appLaunchCounts:(id)arg7 ;
-(id)initWithDescriptors:(id)arg0 descriptorInstallDates:(id)arg1 homeScreenConfig:(id)arg2 isDayZeroExperience:(BOOL)arg3 isiPad:(BOOL)arg4 spotlightAppLaunchHistogram:(id)arg5 appLaunchCounts:(id)arg6 ;
-(id)onboardingStacks;
-(id)personalizedOnboardingStacksWithRankingAlgorithm:(int)arg0 ;
-(void)_initializeCachedWidgetPersonalityToAppScoreCache;


@end


#endif