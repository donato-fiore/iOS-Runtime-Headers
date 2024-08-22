// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCASSETMANAGER_H
#define PCASSETMANAGER_H

@class NSMutableDictionary, SFDeviceAssetManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCAssetManager : NSObject {
    NSMutableDictionary *_bundles;
    NSMutableDictionary *_alternateBundles;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFDeviceAssetManager *_sfAssetManager;
    *LogCategory _ucat;
}




+(id)sharedInstance;
-(id)alternateAssetQueryForAssetType:(NSInteger)arg0 ;
-(id)alternateBundleForAssetType:(NSInteger)arg0 ;
-(id)assetQueryForAssetType:(NSInteger)arg0 ;
-(id)assetQueryForAssetType:(NSInteger)arg0 alternate:(BOOL)arg1 ;
-(id)assetRequestConfiguration:(NSInteger)arg0 alternate:(BOOL)arg1 ;
-(id)bundleForAssetType:(NSInteger)arg0 ;
-(id)imageForAssetType:(NSInteger)arg0 ;
-(id)imageNameForAssetType:(NSInteger)arg0 ;
-(id)init;
-(unsigned char)colorCodeForAssetType:(NSInteger)arg0 ;
-(unsigned int)productVersionForAssetType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleDownloadCompletion:(id)arg0 assetType:(NSInteger)arg1 error:(id)arg2 ;
-(void)handleQueryResult:(id)arg0 assetType:(NSInteger)arg1 productType:(id)arg2 isFallback:(BOOL)arg3 error:(id)arg4 isAlternateBundle:(BOOL)arg5 ;
-(void)initiateQuery:(id)arg0 config:(id)arg1 ;
-(void)prewarmAlternateBundleForAssetType:(NSInteger)arg0 ;
-(void)prewarmBundleForAssetType:(NSInteger)arg0 ;
-(void)prewarmBundleForAssetType:(NSInteger)arg0 alternate:(BOOL)arg1 ;
-(void)sfAssetManagerEnsureStarted;


@end


#endif