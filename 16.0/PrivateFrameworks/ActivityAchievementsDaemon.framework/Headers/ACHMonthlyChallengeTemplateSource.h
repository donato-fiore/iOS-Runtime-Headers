// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACHMONTHLYCHALLENGETEMPLATESOURCE_H
#define ACHMONTHLYCHALLENGETEMPLATESOURCE_H

@class NSDate, NSCalendar, NSNumber, NRPairedDeviceRegistry, NSString;
@protocol ACHTemplateSource, ACHTemplateAssetSource, ACHTemplateAssetSourceDelegate, ACHTemplateSourceDelegate;

#import <Foundation/Foundation.h>

#import "ACHMonthlyChallengeDataSource.h"
#import "ACHSyncingMonthlyChallengeTemplateCache.h"
#import "ACHMonthlyChallengeTemplateDataProvider.h"

@interface ACHMonthlyChallengeTemplateSource : NSObject <ACHTemplateSource, ACHTemplateAssetSource>

 {
    NSDate *_currentDateOverride;
    NSCalendar *_currentCalendarOverride;
    NSNumber *_isStandalonePhoneFitnessModeOverride;
    NRPairedDeviceRegistry *_pairedDeviceRegistrySharedInstanceOverride;
}


@property (weak, nonatomic) NSObject<ACHTemplateAssetSourceDelegate> *assetSourceDelegate;
@property (retain, nonatomic) NSCalendar *currentCalendar; // ivar: _currentCalendar
@property (retain, nonatomic) NSDate *currentDate; // ivar: _currentDate
@property (retain, nonatomic) ACHMonthlyChallengeDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ACHTemplateSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAppleWatch; // ivar: _isAppleWatch
@property (nonatomic) BOOL isStandalonePhoneFitnessMode; // ivar: _isStandalonePhoneFitnessMode
@property (readonly, nonatomic) NSInteger runCadence;
@property (readonly) Class superclass;
@property (retain, nonatomic) ACHSyncingMonthlyChallengeTemplateCache *templateCache; // ivar: _templateCache
@property (retain, nonatomic) ACHMonthlyChallengeTemplateDataProvider *templateDataProvider; // ivar: _templateDataProvider


-(BOOL)_createMonthlyChallengeWithMonthDateInterval:(id)arg0 monthlyChallengeTemplates:(*id)arg1 error:(*id)arg2 ;
-(BOOL)_isInFirstWeekOfCurrentMonth:(id)arg0 ;
-(BOOL)_shouldOverrideMonthlyChallengeCadence;
-(BOOL)isGoalValueForMonthlyChallengeTypeValid:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)isMonthlyChallengeOfTypeAvailable:(NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)sourceShouldRunForDate:(id)arg0 ;
-(BOOL)subObjectsHaveDatabaseAssertions;
-(CGFloat)_goalValueForCurrentMonthForType:(NSUInteger)arg0 error:(*id)arg1 ;
-(CGFloat)_roundedGoalValue:(CGFloat)arg0 monthlyChallengeType:(NSUInteger)arg1 ;
-(CGFloat)_targetGoalValueForCurrentMonthForType:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSInteger)_monthlyChallengeTemplateSourceActionForDate:(id)arg0 existingTemplate:(id)arg1 ;
-(NSUInteger)_getRandomMonthlyChallengeType;
-(NSUInteger)_numberOfDaysInMonthForDate:(id)arg0 ;
-(id)_availableMonthlyChallengeTypes;
-(id)_createMonthlyChallengeTemplateWithType:(NSUInteger)arg0 dateCompoonentInterval:(id)arg1 goalValue:(CGFloat)arg2 ;
-(id)_dateComponentIntervalForCurrentMonth;
-(id)_dateComponentIntervalForLastMonth;
-(id)_dateComponentIntervalForTwoMonthsAgo;
-(id)_maximumValueForMonthlyChallengeType:(NSUInteger)arg0 ;
-(id)_minimumValueForMonthlyChallengeType:(NSUInteger)arg0 ;
-(id)_modelsDirectoryBasePathForTemplate:(id)arg0 ;
-(id)_monthlyAchievementsAssetsDirectoryBasePath;
-(id)_pairedWatchDeviceCapabilities;
-(id)_suffixForCurrentMonthForType:(NSUInteger)arg0 template:(id)arg1 goal:(CGFloat)arg2 error:(*id)arg3 ;
-(id)customPlaceholderValuesForTemplate:(id)arg0 error:(*id)arg1 ;
-(id)initWithDataSource:(id)arg0 dataProvider:(id)arg1 templateCache:(id)arg2 ;
-(id)localizationBundleURLForTemplate:(id)arg0 ;
-(id)pairedDeviceRegistrySharedInstance;
-(id)possibleLocalizationSuffixesForTemplate:(id)arg0 ;
-(id)propertyListBundleURLForTemplate:(id)arg0 ;
-(id)resourceBundleURLForTemplate:(id)arg0 ;
-(id)stickerBundleURLForTemplate:(id)arg0 ;
-(void)_didOverrideMonthlyChallengeCadence;
-(void)_removeMonthlyChallengeTemplate:(id)arg0 monthlyChallengeTemplates:(*id)arg1 templatesToRemove:(*id)arg2 ;
-(void)setPairedDeviceRegistrySharedInstanceOverride:(id)arg0 ;
-(void)templatesForDate:(id)arg0 completion:(id)arg1 ;
-(void)templatesForDate:(id)arg0 databaseContext:(id)arg1 completion:(id)arg2 ;


@end


#endif