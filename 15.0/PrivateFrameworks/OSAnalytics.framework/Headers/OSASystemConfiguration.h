// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OSASYSTEMCONFIGURATION_H
#define OSASYSTEMCONFIGURATION_H

@class NSMutableDictionary, NSString, NSDictionary, NSSet;


#import "OSAProxyConfiguration.h"

@interface OSASystemConfiguration : OSAProxyConfiguration {
    BOOL _appleInternal;
    BOOL _carrierInstall;
    BOOL _multiUserMode;
    NSMutableDictionary *_submissionMetadata;
    NSString *_pairedWatchOS;
    NSDictionary *_logConfig;
    NSSet *_logBlacklist;
    NSDictionary *_submissionParams;
    NSDictionary *_whitelistedDomains;
    NSString *_pathRoot;
    NSString *_pathContainerRoot;
    NSString *_pathSubmission;
    NSString *_pathPreferences;
    NSString *_pathDiagnostics;
    NSString *_pathCATasking;
    NSString *_pathAWDTasking;
}


@property (readonly) BOOL appleInternal;
@property (readonly) BOOL carrierInstall;
@property (readonly) BOOL multiUserMode;
@property (readonly) BOOL optIn3rdParty;
@property (readonly) BOOL optInApple;
@property (readonly) NSString *pathAWDTasking;
@property (readonly) NSString *pathCATasking;
@property (readonly) NSString *pathContainerRoot;
@property (readonly) NSString *pathDiagnostics;
@property (readonly) NSString *pathPreferences;
@property (copy) NSString *pathRoot;
@property (readonly) NSString *pathSubmission;
@property (readonly) NSMutableDictionary *submissionMetadata;


+(id)ensureUsablePath:(id)arg0 component:(id)arg1 options:(id)arg2 ;
+(id)sharedInstance;
+(void)ensureConformanceOfFile:(int)arg0 options:(id)arg1 ;
-(BOOL)isAllowed:(id)arg0 forDomain:(id)arg1 ;
-(BOOL)isConfigEnabled:(id)arg0 ;
-(BOOL)isProxy;
-(BOOL)isWhitelisted:(id)arg0 forDomain:(id)arg1 ;
-(BOOL)setPrefsKey:(id)arg0 value:(id)arg1 forDomain:(id)arg2 withSync:(BOOL)arg3 ;
-(BOOL)usesLegacySubmission:(id)arg0 ;
-(id)assembleMetadataAt:(CGFloat)arg0 withOptions:(unsigned int)arg1 ;
-(id)automatedContextURL;
-(id)automatedDeviceGroup;
-(id)awdReporterKey;
-(id)buildVersion;
-(id)crashReporterKey;
-(id)createReportMetadata:(id)arg0 with:(id)arg1 at:(CGFloat)arg2 usingOptions:(id)arg3 ;
-(id)currentTaskingIDByRouting;
-(id)experimentGroup;
-(id)getLogBlacklist;
-(id)getPrefsKey:(id)arg0 forDomain:(id)arg1 withOptions:(id)arg2 ;
-(id)getPropsForLogType:(id)arg0 ;
-(id)getTaskingKey:(id)arg0 ;
-(id)identifier;
-(id)internalKey;
-(id)logExt:(id)arg0 ;
-(id)logPath;
-(id)logPathForType:(id)arg0 at:(CGFloat)arg1 options:(id)arg2 ;
-(id)logPrefix:(id)arg0 ;
-(id)modelCode;
-(id)osTrain;
-(id)pairedWatchOS;
-(id)pathSubmissionForOwner:(id)arg0 ;
-(id)pathSubmissionWithHomeDirectory:(id)arg0 ;
-(id)productBuildString;
-(id)productName;
-(id)productNameVersionBuildString;
-(id)productReleaseString;
-(id)productVersion;
-(id)releaseType;
-(id)seedGroup;
-(id)serialNumber;
-(id)submissionParam:(id)arg0 ;
-(id)systemId;
-(id)targetAudience;
-(id)uiCountryCode;
-(void)onceConfig;
-(void)plumbEmail:(id)arg0 ;
-(void)saveToPath:(id)arg0 ;
-(void)sysVersionData;


@end


#endif