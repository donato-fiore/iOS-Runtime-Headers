// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSREMOTEASSETMANAGER_H
#define CSREMOTEASSETMANAGER_H

@class NSString, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSRemoteAssetManager : NSObject {
    NSString *_currentLanguageCode;
    NSString *_resourcePath;
    NSString *_configVersion;
    NSString *_assetHash;
    NSObject<OS_dispatch_queue> *_queue;
    NSHashTable *_observers;
}




+(id)sharedManager;
-(BOOL)_loadFromJsonFile:(id)arg0 ;
-(BOOL)_loadPreinstalledAssetMetaIfNeeded;
-(BOOL)_writeToJsonFile:(id)arg0 ;
-(id)_loadJsonDataFromFile:(id)arg0 ;
-(id)_remoteAssetMetaPath;
-(id)assetConfigVersionForAssetType:(NSUInteger)arg0 ;
-(id)assetForCurrentLanguageOfType:(NSUInteger)arg0 ;
-(id)assetHashForAssetType:(NSUInteger)arg0 ;
-(id)init;
-(id)languageCode;
-(id)resourcePathForAssetType:(NSUInteger)arg0 ;
-(void)_setAssetsInfoFromMetaData:(id)arg0 ;
-(void)addObserver:(id)arg0 forAssetType:(NSUInteger)arg1 ;
-(void)removeObserver:(id)arg0 forAssetType:(NSUInteger)arg1 ;
-(void)setLanguageCode:(id)arg0 resourcePath:(id)arg1 configVersion:(id)arg2 assetHash:(id)arg3 assetType:(NSUInteger)arg4 ;


@end


#endif