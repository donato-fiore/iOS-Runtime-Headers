// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSSIRIASSETMANAGER_H
#define TTSSIRIASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface TTSSiriAssetManager : NSObject



+(BOOL)assetIsDownloading:(id)arg0 ;
+(BOOL)spaceCheck:(id)arg0 ;
+(NSInteger)_voiceTypeForAssetTechnology:(id)arg0 ;
+(id)_assetFilterForLanguage:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 locallyAvailable:(BOOL)arg5 ;
+(id)_assetTechnologyForVoiceType:(NSInteger)arg0 ;
+(id)_assetTypeForVoiceType:(NSInteger)arg0 ;
+(id)_assetsForLanguage:(id)arg0 voiceType:(NSInteger)arg1 installedOnly:(BOOL)arg2 ;
+(id)_footprintForType:(NSInteger)arg0 ;
+(id)_siriAssetForLanguage:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 ;
+(id)_siriAssetForLanguage:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 locallyAvailable:(BOOL)arg5 ;
+(id)assetForLanguage:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 ;
+(id)assetsForLanguage:(id)arg0 voiceType:(NSInteger)arg1 ;
+(id)installedAssetForLanguage:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 voiceName:(id)arg3 voiceType:(NSInteger)arg4 ;
+(id)installedAssetsForLanguage:(id)arg0 voiceType:(NSInteger)arg1 ;
+(id)ttsAssetFromVoiceAsset:(id)arg0 ;
+(id)voiceAssetFromTTSAsset:(id)arg0 ;
+(id)voiceResourceForLanguage:(id)arg0 voiceType:(NSInteger)arg1 ;
+(void)downloadAsset:(id)arg0 progressHandler:(id)arg1 ;
+(void)purgeAsset:(id)arg0 ;
+(void)stopDownload:(id)arg0 ;


@end


#endif