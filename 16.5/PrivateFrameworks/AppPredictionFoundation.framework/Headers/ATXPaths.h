// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(id)complicationInlineSetCacheFilePath;
+(id)complicationModularSetCacheFilePath;
+(id)contextualActionsModelDirectory;
+(id)contextualActionsModelFileWithFilename:(id)arg0 ;
+(id)faceGalleryDemoConfigurationFilePath;
+(id)feedbackRootDirectory;
+(id)freeMomentTimeStampFile;
+(id)magicalMomentsPredictionTablesRootDirectory;
+(id)metricsRootDirectory;
+(id)modeCachesRootDirectory;
+(id)modificationDateOfFileAtPath:(id)arg0 ;
+(id)onboardingStackResultCacheFilePath;
+(id)onboardingStackWidgetCacheFilePath;
+(id)posterConfigurationCacheFilePath;
+(id)posterDescriptorCacheFilePath;
+(id)scoreNormalizationModelDirectory;
+(id)scoreNormalizationModelFileWithFilename:(id)arg0 ;
+(id)trialFolderResourcePath;
+(id)uiCachesRootDirectory;
+(id)watchFaceConfigurationCacheFilePath;
+(id)widgetPredictionModelDirectory;
+(id)widgetPredictionModelFileWithFilename:(id)arg0 ;
+(void)_recursivelyCreateDirectoryWithErrorHandlingAtPath:(id)arg0 ;
+(void)createDataVault:(id)arg0 ;
+(void)createDirectoriesIfNeeded;


@end


#endif