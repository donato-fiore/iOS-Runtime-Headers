// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTTRANSLATOR_H
#define _LTTRANSLATOR_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface _LTTranslator : NSObject {
    NSXPCConnection *_connection;
}




+(id)interruptionHandler:(SEL)arg0 ;
+(void)_clearCaches;
+(void)_deleteHotfix:(id)arg0 ;
+(void)_downloadAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
+(void)_getAssetSize:(id)arg0 ;
// +(void)_getServiceProxyWithDelegate:(id)arg0 errorHandler:(id)arg1 block:(unk)arg2  ;
// +(void)_getSyncServiceProxyWithDelegate:(id)arg0 errorHandler:(id)arg1 block:(unk)arg2  ;
+(void)_offlineLanguageStatus:(id)arg0 ;
+(void)_purgeAllAssets:(id)arg0 ;
+(void)_purgeAssetForLanguagePair:(id)arg0 userInitiated:(BOOL)arg1 completion:(id)arg2 ;
+(void)_updateAllAssets:(id)arg0 ;
+(void)_updateHotfix:(id)arg0 ;
+(void)additionalLikelyPreferredLocalesForLocale:(id)arg0 completion:(id)arg1 ;
+(void)availableLocalePairsForTask:(NSInteger)arg0 completion:(id)arg1 ;
+(void)configInfoForLocale:(id)arg0 otherLocale:(id)arg1 completion:(id)arg2 ;
+(void)initialize;
+(void)installOfflineLocales:(id)arg0 completion:(id)arg1 ;
+(void)installedLocales:(id)arg0 ;
+(void)languageForText:(id)arg0 completion:(id)arg1 ;
+(void)languagesForText:(id)arg0 completion:(id)arg1 ;
+(void)languagesForText:(id)arg0 usingModel:(NSUInteger)arg1 completion:(id)arg2 ;
+(void)setInterruptionHandler:(id)arg0 ;
+(void)task:(NSInteger)arg0 isSupportedInCountry:(id)arg1 completion:(id)arg2 ;
+(void)taskIsSupportedInCurrentRegion:(NSInteger)arg0 completion:(id)arg1 ;
-(id)startTranslationSession;
-(void)cleanup;
-(void)log:(id)arg0 ;
-(void)preheatForRequest:(id)arg0 completion:(id)arg1 ;
-(void)preheatForRequestSync:(id)arg0 ;
-(void)translate:(id)arg0 ;


@end


#endif