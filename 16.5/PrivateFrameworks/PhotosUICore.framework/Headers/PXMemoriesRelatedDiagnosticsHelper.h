// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXMEMORIESRELATEDDIAGNOSTICSHELPER_H
#define PXMEMORIESRELATEDDIAGNOSTICSHELPER_H


#import <Foundation/Foundation.h>


@interface PXMemoriesRelatedDiagnosticsHelper : NSObject



+(BOOL)generateSectionTitles:(*id)arg0 andTableContent:(*id)arg1 forIndex:(NSInteger)arg2 sourceMemory:(id)arg3 sourceDictionary:(id)arg4 ;
+(id)_curationFullsetForMemory:(id)arg0 ;
+(id)_datesAndAssetCountDictionaryForAssetCollection:(id)arg0 ;
+(id)_featureVectorInfoGroupedByKeyForFeatureVector:(id)arg0 ;
+(id)_isSafeForWidgetDisplayForAssetUUID:(id)arg0 ;
+(id)_sanitizedGraphDataDictionaryForArchivingDictionary:(id)arg0 memoryLocalIdentifier:(id)arg1 ;
+(id)_userFeedbackScoreInfoForMemory:(id)arg0 ;
+(id)getSummaryFromProviderItem:(id)arg0 ;
+(id)preprocessDictionary:(id)arg0 forMemoryWithLocalIdentifier:(id)arg1 algorithmsVersion:(NSInteger)arg2 inPhotoLibrary:(id)arg3 ;


@end


#endif