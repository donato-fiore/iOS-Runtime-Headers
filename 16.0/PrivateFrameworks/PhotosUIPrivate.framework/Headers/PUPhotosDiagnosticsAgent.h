// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOSDIAGNOSTICSAGENT_H
#define PUPHOTOSDIAGNOSTICSAGENT_H

@protocol PLDiagnosticsAgent;

#import <Foundation/Foundation.h>


@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>





+(id)localDiagnosticsAgent;
-(id)__currentTimestamp;
-(id)_currentAsset;
-(id)_currentAssetDetailedDescription;
-(id)_currentAssetIdentifierDescription;
-(id)_currentAssetIdentifierUUID;
-(id)_currentAssetMetadata;
-(id)_currentAssetViewModelDescription;
-(id)_currentPrivacyController;
-(id)_descriptionForAllUIState;
-(id)_descriptionOfUIState:(NSInteger)arg0 ;
-(id)_selectedAssetIdentifiersDescription;
-(id)_selectedAssetUUIDsDescription;
-(id)_selectedAssets;
-(id)_viewControllerHierarchyDescription;
-(id)_viewModelDescription;
-(id)_windowRecursiveDescription;
-(void)_captureCurrentAssetResourcesToDirectory:(id)arg0 withResultHandler:(id)arg1 ;
-(void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(id)arg0 ;
-(void)captureDescriptionOfPhotoAnalysisWithResultHandler:(id)arg0 ;
-(void)captureDescriptionOfStatisticsWithResultHandler:(id)arg0 ;
-(void)captureDescriptionOfUIState:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)dumpState:(NSInteger)arg0 toDirectoryURL:(id)arg1 resultHandler:(id)arg2 ;
-(void)setContentPrivacyState:(NSInteger)arg0 resultHandler:(id)arg1 ;
-(void)timelineForWidgetSize:(id)arg0 jsonFormat:(BOOL)arg1 resultHandler:(id)arg2 ;


@end


#endif