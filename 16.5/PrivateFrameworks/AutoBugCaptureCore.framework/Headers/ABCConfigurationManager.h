// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ABCCONFIGURATIONMANAGER_H
#define ABCCONFIGURATIONMANAGER_H

@class NSNumber, NSString, NSDictionary;
@protocol ABCConfigurationProtocol;

#import <Foundation/Foundation.h>

#import "ABCPreferences.h"

@interface ABCConfigurationManager : NSObject <ABCConfigurationProtocol>



@property (readonly, nonatomic) CGFloat apiLimitWindow;
@property (readonly, nonatomic) CGFloat apiRateLimit;
@property (readonly, nonatomic) BOOL apnsEnabled;
@property (readonly, nonatomic) BOOL apnsSandboxEnvironment;
@property (nonatomic) BOOL apns_dev_environment; // ivar: _apns_dev_environment
@property (nonatomic) BOOL apns_enable; // ivar: _apns_enable
@property (readonly, nonatomic) NSUInteger arbitratorDailyCountLimit;
@property (readonly, nonatomic) BOOL arbitratorDisableDampening;
@property (readonly, nonatomic) BOOL autoBugCaptureAvailable;
@property (readonly, nonatomic) BOOL autoBugCaptureEnabled; // ivar: _autoBugCaptureEnabled
@property (readonly, nonatomic) BOOL autoBugCaptureRegularPayloads;
@property (readonly, nonatomic) BOOL autoBugCaptureSensitivePayloads;
@property (readonly, nonatomic) BOOL autoBugCaptureSignature;
@property (readonly, nonatomic) BOOL autoBugCaptureUploadPreapproved;
@property (readonly, nonatomic) BOOL autoFeedbackAssistantEnable;
@property (retain, nonatomic) NSNumber *carrier_seed_flag; // ivar: _carrier_seed_flag
@property (readonly, nonatomic) BOOL caseSummaryEnabled;
@property (readonly, nonatomic) NSString *cloudKitContainerIdentifier;
@property (readonly, nonatomic) BOOL cloudKitEnabled;
@property (readonly, nonatomic) NSUInteger cloudKitFallbackMaximumLogCount;
@property (readonly, nonatomic) NSString *cloudKitInvernessService;
@property (readonly, nonatomic) BOOL cloudKitPrefersAnonymous;
@property (readonly, nonatomic) BOOL cloudKitSandboxEnvironment;
@property (readonly, nonatomic) CGFloat cloudKitTimeoutIntervalForRequest;
@property (readonly, nonatomic) CGFloat cloudKitTimeoutIntervalForResource;
@property (readonly, nonatomic) NSUInteger dampenedIPSLimit;
@property (readonly, nonatomic) NSUInteger dampeningRestrictionFactor;
@property (readonly, nonatomic) NSString *databaseContainerPath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL disableAPIRateLimit;
@property (retain, nonatomic) NSNumber *disable_internal_build; // ivar: _disable_internal_build
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isDeviceUnderTest;
@property (readonly, nonatomic) unsigned int logArchiveGID;
@property (readonly, nonatomic) NSString *logArchivePath;
@property (readonly, nonatomic) unsigned int logArchiveUID;
@property (readonly, nonatomic) NSUInteger maxCaseSummaryPerSubmission;
@property (readonly, nonatomic) NSUInteger maxUploadRetryCount;
@property (retain, nonatomic) NSNumber *npi_flag; // ivar: _npi_flag
@property (retain, nonatomic) ABCPreferences *preferences; // ivar: _preferences
@property (retain, nonatomic) NSDictionary *previousConfiguration; // ivar: _previousConfiguration
@property (retain, nonatomic) NSNumber *seed_flag; // ivar: _seed_flag
@property (readonly, nonatomic) NSUInteger submittedCaseSummaryRetentionDays;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger unsubmittedCaseSummaryRetentionDays;
@property (retain, nonatomic) NSNumber *vendor_flag; // ivar: _vendor_flag


+(id)autoBugCapturePrefix;
+(id)defaultLibraryDirectory;
-(BOOL)autoBugCaptureSupportedHardware;
-(id)currentDiagnosticActions;
-(id)defaultDiagnosticActions;
-(id)getAutoBugCaptureConfiguration;
-(id)init;
-(id)loadEmbeddedConfigurationPlist:(char *)arg0 ;
-(int)autoBugCaptureFeatures;
-(void)dealloc;
-(void)initializeOverrides;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif