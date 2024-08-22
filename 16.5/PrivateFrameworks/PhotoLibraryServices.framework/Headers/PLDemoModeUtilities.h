// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDEMOMODEUTILITIES_H
#define PLDEMOMODEUTILITIES_H

@class NSString, PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>


@interface PLDemoModeUtilities : NSObject

@property (readonly, copy, nonatomic) NSString *demoContentPhotoLibraryPrestagingPath;
@property (readonly, copy, nonatomic) NSString *demoContentPhotoLibraryStagingPath;
@property (readonly, copy, nonatomic) NSString *demoContentPhotoLibraryTemplatePath; // ivar: _demoContentPhotoLibraryTemplatePath
@property (readonly, copy, nonatomic) NSString *demoContentStagingBasePath; // ivar: _demoContentStagingBasePath
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) PLPhotoLibraryPathManager *targetPhotoLibraryPathManager; // ivar: _targetPhotoLibraryPathManager


+(id)newDemoModeUtilitiesWithDefaultSystemPaths;
+(id)systemDemoContentPhotoLibraryTemplatePath;
+(id)systemDemoContentStagingBasePath;
-(BOOL)_evalSystemSafetyCheck:(id)arg0 ;
-(BOOL)cleanupForStoreDemoModeByRemovingNonDemoContentFromTargetLibrary;
-(BOOL)prepareForStoreDemoModeByStagingDemoLibraryContentFromTemplate;
-(BOOL)replaceTargetPhotoLibraryWithStagedDemoLibraryIfExists;
-(NSInteger)markAssetOriginalsInTargetPhotoLibraryAsLegacyDemoContent:(BOOL)arg0 ;
-(id)fetchDemoContentResultsInLibrary:(id)arg0 ;
-(id)initWithDemoContentTemplatePath:(id)arg0 stagingBasePath:(id)arg1 targetPhotoLibraryPathManager:(id)arg2 options:(NSUInteger)arg3 ;
-(void)kickstartStagedDemoContentInstallationByKillingAllClients;
-(void)warmUpDemoLibraryInstalledFromStagedTemplate;


@end


#endif