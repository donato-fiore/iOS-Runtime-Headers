// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUUTILITY_H
#define SUUTILITY_H


#import <Foundation/Foundation.h>


@interface SUUtility : NSObject



+(BOOL)alarmSetBeforeDate:(id)arg0 ;
+(BOOL)appDemotionIsEnabled;
+(BOOL)cellularDataIsEnabled;
+(BOOL)currentReleaseTypeIsInternal;
+(BOOL)deleteKeepAliveFile;
+(BOOL)freeCachedSpaceSynchronous:(NSUInteger)arg0 timeout:(CGFloat)arg1 ;
+(BOOL)freeCachedSpaceSynchronous:(NSUInteger)arg0 timeout:(CGFloat)arg1 isAutoDownload:(BOOL)arg2 ;
+(BOOL)freeCachedSpaceSynchronous:(NSUInteger)arg0 timeout:(CGFloat)arg1 isAutoDownload:(BOOL)arg2 disableCDLevelFour:(BOOL)arg3 disableSiriDeletion:(BOOL)arg4 disableAppDemotion:(BOOL)arg5 ;
+(BOOL)hasCellularRadio;
+(BOOL)hasEnoughDiskSpace:(NSUInteger)arg0 growth:(NSUInteger)arg1 ;
+(BOOL)hasEnoughDiskSpace:(NSUInteger)arg0 growth:(NSUInteger)arg1 deltaSpaceNeeded:(*NSUInteger)arg2 ;
+(BOOL)hasEnoughDiskSpace:(NSUInteger)arg0 growth:(NSUInteger)arg1 deltaSpaceNeeded:(*NSUInteger)arg2 isAutoDownload:(BOOL)arg3 ;
+(BOOL)hasEnoughDiskSpace:(NSUInteger)arg0 growth:(NSUInteger)arg1 deltaSpaceNeeded:(*NSUInteger)arg2 isAutoDownload:(BOOL)arg3 disableCDLevelFour:(BOOL)arg4 disableCDLevelThree:(BOOL)arg5 disableSiriDeletion:(BOOL)arg6 disableAppDemotion:(BOOL)arg7 ;
+(BOOL)hasEnoughDiskSpace:(NSUInteger)arg0 growth:(NSUInteger)arg1 deltaSpaceNeeded:(*NSUInteger)arg2 isAutoDownload:(BOOL)arg3 includePurging:(BOOL)arg4 ;
+(BOOL)isCellularDataCapable;
+(BOOL)isDaemon;
+(BOOL)isProductionFused;
+(BOOL)isWiFiCapable;
+(BOOL)writeKeepAliveFile;
+(NSInteger)MADownloadErrorCodeToSUDownloadErrorCode:(NSInteger)arg0 ;
+(NSInteger)appDemoteableSpace;
+(NSInteger)cacheDelete:(id)arg0 ;
+(NSInteger)demoteApps:(NSUInteger)arg0 withError:(*id)arg1 ;
+(NSInteger)translateErrorCodeFromError:(id)arg0 ;
+(NSUInteger)devicePadding:(id)arg0 ;
+(NSUInteger)systemPartitionGrowth:(id)arg0 ;
+(NSUInteger)totalPurgeableSpace:(id)arg0 ;
+(id)URLIfFileExists:(id)arg0 ;
+(id)addToDate:(id)arg0 numberOfDays:(NSInteger)arg1 ;
+(id)appDemotionSettingQueue;
+(id)autoDownloadExpiredError:(BOOL)arg0 ;
+(id)bootTime;
+(id)currentDeviceName;
+(id)currentProductBuild;
+(id)currentProductCategory;
+(id)currentProductType;
+(id)currentProductVersion;
+(id)currentReleaseType;
+(id)errorRemovingUserInfoKey:(id)arg0 originalError:(id)arg1 ;
+(id)errorWithCode:(NSInteger)arg0 ;
+(id)errorWithCode:(NSInteger)arg0 originalError:(id)arg1 ;
+(id)fastWorkQueue;
+(id)gregorianCalendar;
+(id)internalRecoveryStringForErrorCode:(NSInteger)arg0 ;
+(id)mainWorkQueue;
+(id)prettyPrintDate:(id)arg0 ;
+(id)serialNumber;
+(id)systemContainerURL;
+(id)taskQueue;
+(id)translateError:(id)arg0 ;
+(id)translateError:(id)arg0 withAddedUserInfo:(id)arg1 ;
+(int)randomIntWithMinVal:(unsigned int)arg0 maxVal:(unsigned int)arg1 ;
+(void)assignError:(*id)arg0 withCode:(NSInteger)arg1 ;
+(void)assignError:(*id)arg0 withError:(id)arg1 translate:(BOOL)arg2 ;
+(void)enableAppDemotion:(BOOL)arg0 ;
+(void)postAutoUpdateInformationalNotification:(id)arg0 body:(id)arg1 buttonText:(id)arg2 altButtonText:(id)arg3 withCompletion:(id)arg4 ;
+(void)postFailureNotification:(id)arg0 body:(id)arg1 buttonText:(id)arg2 altButtonText:(id)arg3 ;
+(void)purgeV1SUAssets;
+(void)setCacheable:(BOOL)arg0 ;
+(void)setIsDaemon:(BOOL)arg0 ;


@end


#endif