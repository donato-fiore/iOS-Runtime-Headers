// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATASSETMANAGER_H
#define ATASSETMANAGER_H

@class NSDictionary, NSMutableSet, NSMutableDictionary, NSHashTable, NSMutableArray, NSString;
@protocol ATAssetLinkControllerObserver, ATMessageLinkRequestHandler, OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface ATAssetManager : NSObject <ATAssetLinkControllerObserver, ATMessageLinkRequestHandler>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSDictionary *_assetClients;
    NSDictionary *_legacyAssetClients;
    NSMutableSet *_allAssets;
    NSMutableDictionary *_remainingAssetsByDataClass;
    NSMutableDictionary *_totalAssetCountByDataClass;
    NSHashTable *_observers;
    NSMutableArray *_assets;
    NSMutableDictionary *_assetsByDataclass;
    NSMutableDictionary *_assetsByStoreID;
    NSMutableArray *_completedStoreAssets;
    NSUInteger _completedAssets;
    NSUInteger _totalAssetCount;
    NSObject<OS_dispatch_source> *_signalSource;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)dataclassIsEmpty:(id)arg0 ;
-(BOOL)isEmpty;
-(NSUInteger)awaitingStoreCompletion;
-(NSUInteger)completedAssetCountForDataClasses:(id)arg0 ;
-(NSUInteger)currentAsset;
-(NSUInteger)currentAssetForDataclass:(id)arg0 ;
-(NSUInteger)remainingRestoreAssetCountForDataClasses:(id)arg0 ;
-(NSUInteger)remainingSyncAssetCountForDataClasses:(id)arg0 ;
-(NSUInteger)totalAssetCount;
-(NSUInteger)totalAssetCountForDataClasses:(id)arg0 ;
-(NSUInteger)totalAssetCountForDataclass:(id)arg0 ;
-(id)_assetForDataclass:(id)arg0 withIdentifier:(id)arg1 ;
-(id)allDataclasses;
-(id)assetForDataclass:(id)arg0 identifier:(id)arg1 ;
-(id)assetForStoreID:(NSInteger)arg0 ;
-(id)assetProgressForAllDataclasses;
-(id)assets;
-(id)assetsForDataclasses:(id)arg0 ;
-(id)bypassedRestoresForDataclass:(id)arg0 ;
-(id)completedStoreAssets;
-(id)init;
-(id)legacyAssetsForDataClass:(id)arg0 ;
-(id)restoreAssetsForDataclass:(id)arg0 ;
-(id)restoreAssetsForDataclasses:(id)arg0 ;
-(id)storeAssetsForDataclass:(id)arg0 ;
-(void)_addAssets:(id)arg0 forDataClass:(id)arg1 ;
-(void)_dumpStatusInformation;
-(void)_finishAsset:(id)arg0 forDataClass:(id)arg1 ;
-(void)_finishDataClassIfDone:(id)arg0 ;
-(void)_loadAssetClients;
-(void)_updateAsset:(id)arg0 withProgress:(float)arg1 ;
-(void)addObserver:(id)arg0 ;
-(void)assetLinkController:(id)arg0 didFinishAsset:(id)arg1 ;
-(void)assetLinkController:(id)arg0 didUpdateAsset:(id)arg1 ;
-(void)cancelAssetForDataClass:(id)arg0 withIdentifier:(id)arg1 ;
-(void)dealloc;
-(void)enqueueLegacyAssetsForDataClass:(id)arg0 ;
-(void)mapStoreIDToAsset:(id)arg0 ;
-(void)messageLink:(id)arg0 didReceiveRequest:(id)arg1 ;
-(void)prioritizeAssetForDataClass:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)reset;


@end


#endif