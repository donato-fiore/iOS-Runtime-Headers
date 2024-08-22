// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSVOICEASSETMANAGER_H
#define TTSVOICEASSETMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TTSVoiceAssetManager : NSObject {
    NSMutableDictionary *_resourceCache;
}




+(NSInteger)_downloadCatalogForAssetType:(id)arg0 ;
+(id)_getLatestAssetFromArray:(id)arg0 ;
+(id)_nonLocalMobileAssetQueue;
+(id)queryForVoiceResourceAsset:(id)arg0 localOnly:(BOOL)arg1 ;
+(id)sharedInstance;
+(id)voiceResourceAssetForLanguage:(id)arg0 voiceType:(NSInteger)arg1 ;
+(id)voiceResourceFromAsset:(id)arg0 voiceType:(NSInteger)arg1 ;
-(BOOL)_assetExistsOnDisk:(id)arg0 ;
-(BOOL)_voiceAssetExistsOnDisk:(id)arg0 ;
-(id)_resourcePathForStandardAssets:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 ;
-(id)_voiceAssetForMAAsset:(id)arg0 voiceType:(NSInteger)arg1 ;
-(id)_voiceAssetQueryForVoiceName:(id)arg0 language:(id)arg1 gender:(NSInteger)arg2 footprint:(NSInteger)arg3 version:(id)arg4 voiceType:(NSInteger)arg5 ;
-(id)_voiceAssetQueryResultsPredicateForLanguage:(id)arg0 voiceType:(NSInteger)arg1 ;
-(id)convertVSVoiceAssetSelectionsToTTSVoiceAssets:(id)arg0 language:(id)arg1 ;
-(id)getInstalledGryphonAssetsForLanguage:(id)arg0 ;
-(id)getInstalledNeuralAssetsForLanguage:(id)arg0 ;
-(id)resourcePathForLanguage:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 outAsset:(*id)arg5 ;
-(void)getCustomVoiceAssetsLocalOnly:(BOOL)arg0 language:(id)arg1 voiceType:(NSInteger)arg2 reply:(id)arg3 ;


@end


#endif