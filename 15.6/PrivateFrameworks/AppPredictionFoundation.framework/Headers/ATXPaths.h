// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPATHS_H
#define ATXPATHS_H


#import <Foundation/Foundation.h>


@interface ATXPaths : NSObject



+(id)_getDirectoryCreating:(BOOL)arg0 ;
+(id)appPredictionBackupDirectory;
+(id)appPredictionCacheDirectory;
+(id)appPredictionDirectory;
+(id)appPredictionDirectoryFile:(id)arg0 ;
+(id)biomeStreamsRootDirectory;
+(id)bookmarksPathFile:(id)arg0 ;
+(id)clientModelCachesRootDirectory;
+(id)contextualActionsModelDirectory;
+(id)contextualActionsModelFileWithFilename:(id)arg0 ;
+(id)feedbackRootDirectory;
+(id)freeMomentTimeStampFile;
+(id)magicalMomentsPredictionTablesRootDirectory;
+(id)metricsRootDirectory;
+(id)modeCachesRootDirectory;
+(id)modificationDateOfFileAtPath:(id)arg0 ;
+(id)onboardingStackResultCacheFilePath;
+(id)onboardingStackWidgetCacheFilePath;
+(id)trialFolderResourcePath;
+(id)uiCachesRootDirectory;
+(id)widgetPredictionModelDirectory;
+(id)widgetPredictionModelFileWithFilename:(id)arg0 ;
+(void)createDataVault:(id)arg0 ;
+(void)createDirectoriesIfNeeded;


@end


#endif