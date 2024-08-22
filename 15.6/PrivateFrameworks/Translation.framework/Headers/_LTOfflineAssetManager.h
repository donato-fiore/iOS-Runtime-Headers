// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LTOFFLINEASSETMANAGER_H
#define _LTOFFLINEASSETMANAGER_H


#import <Foundation/Foundation.h>

#import "_LTHotfixManager.h"

@interface _LTOfflineAssetManager : NSObject {
    _LTHotfixManager *_hotfixMgr;
}




+(id)fallBackAssetResourcePath;
+(void)initialize;
-(id)_assetIdentifiersForLanguagePairDirectory:(id)arg0 ;
-(id)_configPlistWithFileName:(id)arg0 ;
-(id)_speechTranslationAssetInfoForLocalePair:(id)arg0 error:(*id)arg1 ;
-(id)_speechTranslationAssetInfoForLocalePair:(id)arg0 installedAssets:(id)arg1 catalogAssets:(id)arg2 config:(id)arg3 error:(*id)arg4 ;
-(id)_voiceAssetForLocaleIdentifier:(id)arg0 ;
-(id)assetDirectory;
-(id)assetIdentifierReferenceCountDictionary;
-(id)assetsSortedByVersion:(id)arg0 ;
-(id)catalogAssets;
-(id)configAsset;
-(id)configAssetInAssets:(id)arg0 ;
-(id)configAssetURL;
-(id)configurationPropertyListWithName:(id)arg0 ;
-(id)configurationPropertyListWithURL:(id)arg0 ;
-(id)endpointAssetInfoWithContext:(id)arg0 error:(*id)arg1 ;
-(id)getEndpointerAssetWithType:(NSInteger)arg0 error:(*id)arg1 ;
-(id)init;
-(id)installedAssets;
-(id)languageDetectorAssetWithError:(*id)arg0 ;
-(id)matchingASRAssetForLocale:(id)arg0 inAssets:(id)arg1 ;
-(id)modelURLsForLanguagePair:(id)arg0 ;
-(id)speechTranslationAssetInfoForLocalePair:(id)arg0 error:(*id)arg1 ;
-(void)_clearCaches;
-(void)_downloadPassthroughAssetForLocale:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_downloadVoiceAsset:(id)arg0 ;
-(void)_queryLanguagePairStatus:(id)arg0 ;
-(void)_refreshAllAssets:(id)arg0 ;
-(void)_refreshCatalogIfNeededWithCompletion:(id)arg0 ;
-(void)_removeOldAssetDirectory;
-(void)assetSize:(id)arg0 ;
-(void)debugDumpAssets:(id)arg0 ;
-(void)deleteAsset:(id)arg0 completion:(id)arg1 ;
// -(void)downloadAsset:(id)arg0 downloadOptions:(id)arg1 progressCallback:(id)arg2 completion:(unk)arg3  ;
// -(void)downloadAsset:(id)arg0 userInitiated:(BOOL)arg1 progressCallback:(id)arg2 completion:(unk)arg3  ;
// -(void)downloadAsset:(id)arg0 userInitiated:(BOOL)arg1 useCellular:(BOOL)arg2 progressCallback:(id)arg3 completion:(unk)arg4  ;
-(void)downloadAssetsForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)downloadVoiceAssetsForLanguagePair:(id)arg0 ;
-(void)offlineLanguageStatus:(id)arg0 ;
-(void)purgeAllAssetsExcludingConfig:(BOOL)arg0 completion:(id)arg1 ;
-(void)purgeAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
-(void)refreshAllIfNeededWithCompletion:(id)arg0 ;
-(void)removeObsoleteAssets;
-(void)updateAllAssets:(id)arg0 ;
-(void)updateSpeechTranslationAssetSymLinks:(id)arg0 ;


@end


#endif