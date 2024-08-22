// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABCPREFERENCES_H
#define ABCPREFERENCES_H

@class NSUserDefaults, NSNumber, NSString;
@protocol OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ABCPreferences : NSObject {
    BOOL _observedAutoBugCaptureUIPreference;
    BOOL _observingInstalledProfiles;
    NSObject<OS_dispatch_source> *_checkProfilesTimer;
}


@property (nonatomic) BOOL ABCUserConsent; // ivar: _ABCUserConsent
@property (nonatomic) BOOL abcUIUserConsent; // ivar: _abcUIUserConsent
@property (nonatomic) CGFloat api_limit_window; // ivar: _api_limit_window
@property (nonatomic) CGFloat api_rate_limit; // ivar: _api_rate_limit
@property (nonatomic) BOOL apns_dev_environment; // ivar: _apns_dev_environment
@property (nonatomic) BOOL apns_enable; // ivar: _apns_enable
@property (nonatomic) NSInteger arbitrator_daily_count_limit; // ivar: _arbitrator_daily_count_limit
@property (nonatomic) NSUInteger arbitrator_dampened_ips_limit; // ivar: _arbitrator_dampened_ips_limit
@property (nonatomic) BOOL arbitrator_disable_dampening; // ivar: _arbitrator_disable_dampening
@property (nonatomic) BOOL autoFeedbackAssistantEnable; // ivar: _autoFeedbackAssistantEnable
@property (retain, nonatomic) NSUserDefaults *automatedDeviceGroupDefaults; // ivar: _automatedDeviceGroupDefaults
@property (retain, nonatomic) NSNumber *carrier_seed_flag; // ivar: _carrier_seed_flag
@property (nonatomic) BOOL case_summary_enable; // ivar: _case_summary_enable
@property (nonatomic) NSUInteger case_summary_maximum_per_submission; // ivar: _case_summary_maximum_per_submission
@property (nonatomic) NSUInteger case_summary_submitted_retention_days; // ivar: _case_summary_submitted_retention_days
@property (nonatomic) NSUInteger case_summary_unsubmitted_retention_days; // ivar: _case_summary_unsubmitted_retention_days
@property (retain, nonatomic) NSString *cloudkit_container_identifier; // ivar: _cloudkit_container_identifier
@property (nonatomic) BOOL cloudkit_enable; // ivar: _cloudkit_enable
@property (retain, nonatomic) NSString *cloudkit_inverness_service; // ivar: _cloudkit_inverness_service
@property (nonatomic) BOOL cloudkit_prefers_anonymous; // ivar: _cloudkit_prefers_anonymous
@property (nonatomic) BOOL cloudkit_sandbox_environment; // ivar: _cloudkit_sandbox_environment
@property (nonatomic) NSUInteger cloudkit_upload_connection_timeout; // ivar: _cloudkit_upload_connection_timeout
@property (nonatomic) NSUInteger cloudkit_upload_expiration_timeout; // ivar: _cloudkit_upload_expiration_timeout
@property (nonatomic) NSUInteger cloudkit_upload_max_fallback_log_count; // ivar: _cloudkit_upload_max_fallback_log_count
@property (nonatomic) NSUInteger dampening_restriction_factor; // ivar: _dampening_restriction_factor
@property (retain, nonatomic) NSString *database_container_path; // ivar: _database_container_path
@property (nonatomic) BOOL diagnosticsAndUsageEnabled; // ivar: _diagnosticsAndUsageEnabled
@property (nonatomic) BOOL disable_api_rate_limit; // ivar: _disable_api_rate_limit
@property (nonatomic) BOOL disable_autobugcapture; // ivar: _disable_autobugcapture
@property (nonatomic) BOOL disable_internal_build; // ivar: _disable_internal_build
@property (nonatomic) BOOL dut_flag; // ivar: _dut_flag
@property (nonatomic) *BOOL enable_cloudkit; // ivar: _enable_cloudkit
@property (nonatomic) BOOL ignore_automated_device_group; // ivar: _ignore_automated_device_group
@property (nonatomic) BOOL is_automated_device_group; // ivar: _is_automated_device_group
@property (nonatomic) NSUInteger max_upload_retries; // ivar: _max_upload_retries
@property (retain, nonatomic) NSNumber *npi_flag; // ivar: _npi_flag
@property (nonatomic) BOOL optin_autobugcapture; // ivar: _optin_autobugcapture
@property (retain, nonatomic) NSNumber *seed_flag; // ivar: _seed_flag
@property (retain, nonatomic) NSNumber *vendor_flag; // ivar: _vendor_flag


+(id)initialValuesDictionary;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)processInstalledVisibleProfileIdentifiers:(id)arg0 ;
-(void)setABCUIUserConsent:(BOOL)arg0 ;


@end


#endif