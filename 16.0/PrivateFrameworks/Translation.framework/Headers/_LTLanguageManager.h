// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTLANGUAGEMANAGER_H
#define _LTLANGUAGEMANAGER_H

@class NSMutableDictionary, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_LTOfflineAssetManager.h"

@interface _LTLanguageManager : NSObject {
    _LTOfflineAssetManager *_assetManager;
    NSMutableDictionary *_assetStatusDictionary;
    NSArray *_localeIdentifierList;
    id *_completionHandler;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _useCellular;
}




+(id)sharedInstance;
+(void)initialize;
-(id)assetNamesForPairNames:(id)arg0 ;
-(id)assetWithName:(id)arg0 inAssets:(id)arg1 ;
-(id)assetsNamesForLocale:(id)arg0 ;
-(id)description;
-(id)identifiersInIdentifiers:(id)arg0 forAssetName:(id)arg1 ;
-(id)identifiersInIdentifiers:(id)arg0 forLanguageName:(id)arg1 ;
-(id)init;
-(id)installationStatusArray;
-(id)languageToStatusDictionary;
-(id)pairNamesForLocales:(id)arg0 ;
-(void)_setInstalledLocales:(id)arg0 ;
-(void)downloadAsset:(id)arg0 withStatus:(id)arg1 ;
-(void)installedLocales:(id)arg0 ;
-(void)setInstalledLocales:(id)arg0 useCellular:(BOOL)arg1 completion:(id)arg2 ;
-(void)updateProgress;


@end


#endif