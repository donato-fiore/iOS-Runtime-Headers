// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PCASSETMANAGER_H
#define PCASSETMANAGER_H

@class NSMutableDictionary, SFDeviceAssetManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PCAssetManager : NSObject {
    NSMutableDictionary *_bundles;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SFDeviceAssetManager *_sfAssetManager;
    *LogCategory _ucat;
}




+(id)sharedInstance;
-(id)assetQueryForAssetType:(NSInteger)arg0 ;
-(id)assetRequestConfiguration:(NSInteger)arg0 ;
-(id)bundleForAssetType:(NSInteger)arg0 ;
-(id)imageForAssetType:(NSInteger)arg0 ;
-(id)imageNameForAssetType:(NSInteger)arg0 ;
-(id)init;
-(unsigned char)colorCodeForAssetType:(NSInteger)arg0 ;
-(void)dealloc;
-(void)handleDownloadCompletion:(id)arg0 assetType:(NSInteger)arg1 error:(id)arg2 ;
-(void)handleQueryResult:(id)arg0 assetType:(NSInteger)arg1 productType:(id)arg2 isFallback:(BOOL)arg3 error:(id)arg4 ;
-(void)initiateQuery:(id)arg0 config:(id)arg1 ;
-(void)prewarmBundleForAssetType:(NSInteger)arg0 ;
-(void)sfAssetManagerEnsureStarted;


@end


#endif