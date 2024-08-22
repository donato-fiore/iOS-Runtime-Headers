// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HRPROFILE_H
#define HRPROFILE_H

@class HKConceptStore, HKDateCache, HKHealthRecordsStore, HKHealthStore, HKUCUMUnitDisplayConverter, HKSampleTypeUpdateController;

#import <Foundation/Foundation.h>

#import "HRHealthRecordsMigrator.h"
#import "WDClinicalSampleAccountsLoader.h"
#import "WDClinicalSourcesDataProvider.h"
#import "WDClinicalOnboardingManager.h"
#import "HRWDUserActivityManager.h"
#import "UTCDateFormatter.h"

@interface HRProfile : NSObject {
    HKConceptStore *_conceptStore;
    HRHealthRecordsMigrator *_migrator;
}


@property (weak, nonatomic) WDClinicalSampleAccountsLoader *clinicalSampleAccountsLoader; // ivar: _clinicalSampleAccountsLoader
@property (readonly, nonatomic) WDClinicalSourcesDataProvider *clinicalSourcesDataProvider; // ivar: _clinicalSourcesDataProvider
@property (readonly, nonatomic) HKConceptStore *conceptStore;
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, nonatomic) HKHealthRecordsStore *healthRecordsStore; // ivar: _healthRecordsStore
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) WDClinicalOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (readonly, nonatomic) HKUCUMUnitDisplayConverter *ucumDisplayConverter; // ivar: _ucumDisplayConverter
@property (readonly, nonatomic) HKSampleTypeUpdateController *updateController; // ivar: _updateController
@property (readonly, nonatomic) HRWDUserActivityManager *userActivityManager;
@property (readonly, nonatomic) UTCDateFormatter *utcDateFormatter; // ivar: _utcDateFormatter


+(id)userProfileWithProfileIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithHealthStore:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 profileIdentifier:(id)arg1 ;


@end


#endif