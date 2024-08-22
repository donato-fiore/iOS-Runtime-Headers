// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUTILITIES_H
#define PLUTILITIES_H


#import <Foundation/Foundation.h>


@interface PLUtilities : NSObject



+(BOOL)AppDeletionEnabled;
+(BOOL)PLCopyItemsFromPath:(id)arg0 toPath:(id)arg1 ;
+(BOOL)SwitchToIncrementalVacuumEnabled;
+(BOOL)WakeAttributionEnabled;
+(BOOL)allowQueryFromPeer:(id)arg0 ;
+(BOOL)compressWithSource:(id)arg0 withDestination:(id)arg1 withLevel:(int)arg2 ;
+(BOOL)createAndChownDirectory:(id)arg0 ;
+(BOOL)createAndChownDirectoryIfDirectoryDoesNotExist:(id)arg0 ;
+(BOOL)deviceRebooted;
+(BOOL)gasGaugeEnabled;
+(BOOL)hasBattery;
+(BOOL)hasGasGauge;
+(BOOL)isALSCurveHigherThanDefault;
+(BOOL)isAppAnalyticsEnabled;
+(BOOL)isDaemonOrAppleXPCService:(int)arg0 ;
+(BOOL)isEduMode;
+(BOOL)isFullModeDaemon;
+(BOOL)isHealthDataSubmissionAllowed;
+(BOOL)isHeySiriEnabled;
+(BOOL)isLiteModeDaemon;
+(BOOL)isPingPongChargingWith:(BOOL)arg0 andBatteryLevelPercent:(CGFloat)arg1 ;
+(BOOL)isPowerlogHelperd;
+(BOOL)isSiriEnabled;
+(BOOL)isUserProcess;
+(BOOL)isValidString:(id)arg0 ;
+(BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1 withName:(id)arg2 error:(*id)arg3 ;
+(BOOL)runningAsMobileUser;
+(BOOL)shouldLogForEntryKey:(id)arg0 ;
+(BOOL)shouldLogForEntryKey:(id)arg0 withKey:(id)arg1 andValue:(id)arg2 ;
+(CGFloat)defaultBatteryEnergyCapacity;
+(CGFloat)getMachbaseTimeRatio;
+(CGFloat)scaledPowerBasedOnPoint:(CGFloat)arg0 withPowerModel:(id)arg1 ;
+(CGFloat)secondsFromMachTime:(NSUInteger)arg0 ;
+(NSInteger)compareFilesByKey:(id)arg0 file1:(id)arg1 file2:(id)arg2 sortAscending:(BOOL)arg3 ;
+(NSInteger)roundToSigFig:(int)arg0 withSigFig:(int)arg1 ;
+(NSUInteger)directorySize:(id)arg0 ;
+(NSUInteger)dispatchTimeInSeconds:(CGFloat)arg0 ;
+(NSUInteger)getCurrMachAbsTimeInSecs;
+(NSUInteger)maxProcessCount;
+(id)JSONSanitizeDictionary:(id)arg0 ;
+(id)MavRevStringQuery;
+(id)allSubClassesForClass:(Class)arg0 ;
+(id)automatedDeviceGroup;
+(id)binaryPathForPid:(int)arg0 ;
+(id)bundleIDFromPid:(int)arg0 ;
+(id)bundleIDFromURL:(id)arg0 ;
+(id)bundleVersionFromURL:(id)arg0 ;
+(id)containerPath;
+(id)dateFromTimeval:(struct timeval )arg0 ;
+(id)dateFromTimevalSystemTime:(struct timeval )arg0 ;
+(id)deviceBootTime;
+(id)deviceBootUUID;
+(id)extractDateStringAndUUIDStringFromFilePath:(id)arg0 ;
+(id)fullModeDaemonName;
+(id)fullProcessNameForPid:(int)arg0 ;
+(id)generateAndUpdateSaltValue:(id)arg0 ;
+(id)generateHashValue:(id)arg0 withSalt:(id)arg1 ;
+(id)getAllowblocklist;
+(id)getDeviceNameIOSWatchOS;
+(id)getIdentifierFromEntry:(id)arg0 ;
+(id)getKVPairsForCASubmissionFromEntry:(id)arg0 ;
+(id)getSessionsAllowlist;
+(id)hardwareModel;
+(id)hashBundleID:(id)arg0 ;
+(id)hashString:(id)arg0 ;
+(id)launchdNameToProcessName:(id)arg0 ;
+(id)liteModeDaemonName;
+(id)modeForEntryKey:(id)arg0 withKeyName:(id)arg1 ;
+(id)powerModelForOperatorName:(id)arg0 ;
+(id)processNameForPid:(int)arg0 ;
+(id)runningAsUser;
+(id)shortUUIDString;
+(id)torchTypeString;
+(id)transactionWorkQueue;
+(id)workQueue;
+(id)workQueueForClass:(Class)arg0 ;
+(id)workQueueForKey:(id)arg0 ;
+(int)compressWithSourceStream:(struct __sFILE *)arg0 withDestination:(struct __sFILE *)arg1 withLevel:(int)arg2 ;
+(int)remove:(int)arg0 oldestFilesFromDirectory:(id)arg1 containingFileNameSubstring:(id)arg2 ;
+(short)canLogMode:(id)arg0 fullMode:(BOOL)arg1 ;
+(short)connectionToQuarantine:(id)arg0 ;
+(short)logModeForEntryKey:(id)arg0 withKey:(id)arg1 andValue:(id)arg2 ;
+(struct jetsam_priority_info )getJetamPriority:(int)arg0 ;
+(struct mach_timebase_info *)getMachTimebase;
+(void)dispatchSyncWithoutDeadlockOnQueue:(id)arg0 withBlock:(id)arg1 ;
+(void)exitSafe:(int)arg0 ;
+(void)exitWithReason:(short)arg0 ;
+(void)exitWithReason:(short)arg0 action:(short)arg1 ;
+(void)exitWithReason:(short)arg0 connection:(id)arg1 ;
+(void)exitWithReasonSync:(short)arg0 ;
+(void)getCurrentMonotonicAndMachAbsTime:(*id)arg0 machAbsTime:(*NSUInteger)arg1 machContTime:(*NSUInteger)arg2 ;
+(void)postNotificationName:(id)arg0 object:(id)arg1 userInfo:(id)arg2 ;
+(void)quarantineToPath:(id)arg0 action:(short)arg1 ;
+(void)refreshBUI;
+(void)setMobileOwnerForFile:(id)arg0 ;


@end


#endif