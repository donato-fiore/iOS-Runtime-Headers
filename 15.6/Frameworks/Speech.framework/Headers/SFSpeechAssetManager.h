// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFSPEECHASSETMANAGER_H
#define SFSPEECHASSETMANAGER_H


#import <Foundation/Foundation.h>


@interface SFSpeechAssetManager : NSObject



+(id)_assetQueryForLanguage:(id)arg0 ;
+(id)assetPathForLanguage:(id)arg0 ;
+(id)configParametersForVoicemailWithLanguage:(id)arg0 ;
+(id)fetchMAAssetPathForInstalledLanguage:(id)arg0 ;
+(id)installedLanguages;
// +(void)fetchAssetsForLanguage:(id)arg0 progress:(id)arg1 completion:(unk)arg2  ;
// +(void)fetchAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 forceUpgrade:(BOOL)arg2 detailedProgress:(id)arg3 completion:(unk)arg4  ;
// +(void)fetchAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 forceUpgrade:(BOOL)arg2 progress:(id)arg3 completion:(unk)arg4  ;
// +(void)fetchAssetsForLanguage:(id)arg0 urgent:(BOOL)arg1 progress:(id)arg2 completion:(unk)arg3  ;
+(void)installedLanguagesWithCompletion:(id)arg0 ;
+(void)promoteAssets;
+(void)purgeAssetsForLanguage:(id)arg0 error:(*id)arg1 ;
+(void)setAssetsAsProvisional;


@end


#endif