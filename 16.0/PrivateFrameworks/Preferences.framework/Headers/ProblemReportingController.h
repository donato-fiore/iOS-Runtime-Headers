// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PROBLEMREPORTINGCONTROLLER_H
#define PROBLEMREPORTINGCONTROLLER_H

@class NSArray, AFSettingsConnection, HKHealthStore;
@protocol VTUISiriDataSharingOptInPresentationDelegate;


#import "PSListController.h"
#import "PrefsUILinkLabel.h"
#import "PSSpecifier.h"
#import "PSFitnessPlusAnalyticsConsentCoordinator.h"

@interface ProblemReportingController : PSListController <VTUISiriDataSharingOptInPresentationDelegate>

 {
    PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;
    PSSpecifier *_filesystemMetadataSnapshotSpecifier;
    NSArray *_appActivitySpecifiers;
    NSArray *_iCloudSpecifiers;
    PSSpecifier *_spinnerSpecifier;
}


@property (readonly) NSArray *appActivitySpecifiers;
@property (retain, nonatomic) AFSettingsConnection *assistantSettingsConnection; // ivar: _assistantSettingsConnection
@property (retain, nonatomic) NSArray *automatedFeedbackSpecifiers; // ivar: _automatedFeedbackSpecifiers
@property (readonly) NSArray *baseSpecifiers; // ivar: _baseSpecifiers
@property (readonly) PSSpecifier *filesystemMetadataSnapshotSpecifier;
@property (retain, nonatomic) PSFitnessPlusAnalyticsConsentCoordinator *fitnessPlusAnalyticsConsentCoordinator; // ivar: _fitnessPlusAnalyticsConsentCoordinator
@property (readonly) NSArray *fitnessPlusDataSpecifiers; // ivar: _fitnessPlusDataSpecifiers
@property (readonly) NSArray *handwashingDataSpecifiers; // ivar: _handwashingDataSpecifiers
@property (readonly) NSArray *healthDataSpecifiers; // ivar: _healthDataSpecifiers
@property (readonly) NSArray *healthRecordsDataSpecifiers; // ivar: _healthRecordsDataSpecifiers
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSArray *improveSiriSpecifiers; // ivar: _improveSiriSpecifiers
@property (readonly) NSArray *safetyDataSpecifiers; // ivar: _safetyDataSpecifiers
@property (nonatomic) BOOL shouldShareHealthRecordsData; // ivar: _shouldShareHealthRecordsData
@property (readonly) PSSpecifier *spinnerSpecifier;
@property (readonly) NSArray *wheelchairDataSpecifiers; // ivar: _wheelchairDataSpecifiers


+(BOOL)isProblemReportingEnabled;
-(BOOL)shouldShowFitnessPlusSpecifiers;
-(BOOL)shouldShowiCloudSpecifiersForAccount:(id)arg0 ;
-(id)analyticsSpecifiersIncludingIndependentSpecifiers:(BOOL)arg0 includeDependentSpecifiers:(BOOL)arg1 ;
-(id)automatedFeedbackEnabled:(id)arg0 ;
-(id)getCurrentImproveSiriAndDictationValueForSpecifier:(id)arg0 ;
-(id)iCloudSpecifiers;
-(id)problemReportingEnabled:(id)arg0 ;
-(id)shouldShareAppActivityWithAppDevelopers;
-(id)shouldShareFitnessPlusDataForSpecifier:(id)arg0 ;
-(id)shouldShareHandwashingDataForSpecifier:(id)arg0 ;
-(id)shouldShareHealthDataForSpecifier:(id)arg0 ;
-(id)shouldShareHealthRecordsDataForSpecifier:(id)arg0 ;
-(id)shouldShareSafetyDataForSpecifier:(id)arg0 ;
-(id)shouldShareWheelchairDataForSpecifier:(id)arg0 ;
-(id)shouldShareiCloudAnalytics:(id)arg0 ;
-(id)specifiers;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_handleUpdateForSpecifierID:(id)arg0 value:(id)arg1 error:(id)arg2 ;
-(void)automatedFeedbackLinkTapped;
-(void)checkDiagnosticsSessionAvailability;
-(void)dismissAboutSheet:(id)arg0 ;
-(void)launchDiagnosticsSession:(id)arg0 ;
-(void)setAutomatedFeedbackEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)setBoolValue:(BOOL)arg0 forIdMSConfigKey:(id)arg1 completion:(id)arg2 ;
-(void)setImproveSiriAndDictationValue:(id)arg0 specifier:(id)arg1 ;
-(void)setProblemReportingEnabled:(BOOL)arg0 ;
-(void)setProblemReportingEnabled:(id)arg0 forSpecifier:(id)arg1 ;
-(void)setShouldShareAppActivityWithAppDevelopers:(id)arg0 specifier:(id)arg1 ;
-(void)setShouldShareFitnessPlusData:(id)arg0 specifier:(id)arg1 ;
-(void)setShouldShareHandwashingData:(id)arg0 specifier:(id)arg1 ;
-(void)setShouldShareHealthData:(id)arg0 specifier:(id)arg1 ;
-(void)setShouldShareSafetyData:(id)arg0 specifier:(id)arg1 ;
-(void)setShouldShareWheelchairData:(id)arg0 specifier:(id)arg1 ;
-(void)setShouldShareiCloudAnalytics:(id)arg0 specifier:(id)arg1 ;
-(void)showAboutAnalyticsSheet;
-(void)showAboutAppAnalyticsSheet;
-(void)showAboutFitnessPlusDataSheet;
-(void)showAboutHandwashingDataSheet;
-(void)showAboutHealthDataSheet;
-(void)showAboutHealthRecordsDataSheet;
-(void)showAboutImproveSiriAnalyticsSheet;
-(void)showAboutSafetyDataSheet;
-(void)showAboutSheetWithTitle:(id)arg0 content:(id)arg1 ;
-(void)showAboutWheelchairDataSheet;
-(void)showAboutiCloudAnalyticsSheet;
-(void)snapshot:(id)arg0 ;
-(void)updateHealthRecordsPreferenceForSpecifierID:(id)arg0 ;
-(void)updateiCloudAnalyticsForSpecifierID:(id)arg0 ;


@end


#endif