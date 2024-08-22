// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PHCPANALYTICSMEDIAPROPERTYPROVIDER_H
#define PHCPANALYTICSMEDIAPROPERTYPROVIDER_H

@class NSString;
@protocol CPAnalyticsPhotoKitPropertyProvider, CPAnalyticsDynamicPropertyProvider;

#import <Foundation/Foundation.h>

#import "PHPhotoLibrary.h"

@interface PHCPAnalyticsMediaPropertyProvider : NSObject <CPAnalyticsPhotoKitPropertyProvider, CPAnalyticsDynamicPropertyProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly) Class superclass;


+(id)_syndicationStateDescriptionForSyndicationState:(unsigned short)arg0 ;
+(id)_wellKnownPhotoLibraryIdentifierDescription:(NSInteger)arg0 ;
+(id)assetPropertySetsToFetch;
-(BOOL)_hasPeopleForSceneClassifications:(id)arg0 sceneAnalysisVersion:(short)arg1 ;
-(BOOL)_hasPetsForSceneClassifications:(id)arg0 sceneAnalysisVersion:(short)arg1 ;
-(BOOL)_isPeopleSceneIdentifier:(unsigned int)arg0 ;
-(BOOL)_isSceneConfidenceAboveThresholdForSceneClassification:(id)arg0 sceneAnalysisVersion:(short)arg1 ;
-(id)_PHAssetCollectionFromPayload:(id)arg0 ;
-(id)_PHAssetFromPayload:(id)arg0 ;
-(id)_ageDescriptionForMediaDate:(id)arg0 ;
-(id)_cameraTypeFromImportSource:(NSInteger)arg0 ;
-(id)_junkConfidenceThresholdForIdentifier:(unsigned int)arg0 sceneAnalysisVersion:(short)arg1 ;
-(id)_junkConfidenceThresholdVersion40ForIdentifier:(unsigned int)arg0 ;
-(id)_mediaCountFromPayload:(id)arg0 ;
-(id)_mediaProperty:(id)arg0 forAsset:(id)arg1 ;
-(id)_mediaProperty:(id)arg0 forAssetCollection:(id)arg1 ;
-(id)_sceneConfidenceThresholdByClassificationIdentifier:(unsigned int)arg0 sceneAnalysisVersion:(short)arg1 ;
-(id)_sceneForAsset:(id)arg0 ;
-(id)_sceneLabelByClassificationIdentifier:(unsigned int)arg0 ;
-(id)_sceneSubjectForAsset:(id)arg0 ;
-(id)_sdConfidenceThresholdForIdentifier:(unsigned int)arg0 sceneAnalysisVersion:(short)arg1 ;
-(id)_sdConfidenceThresholdVersion33ForIdentifier:(unsigned int)arg0 ;
-(id)_sdConfidenceThresholdVersion51ForIdentifier:(unsigned int)arg0 ;
-(id)getDynamicProperty:(id)arg0 forEventName:(id)arg1 payloadForSystemPropertyExtraction:(id)arg2 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(void)registerSystemProperties:(id)arg0 ;


@end


#endif