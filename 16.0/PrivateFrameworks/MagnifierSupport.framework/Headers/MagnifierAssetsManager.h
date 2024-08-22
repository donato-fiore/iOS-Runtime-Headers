// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MAGNIFIERASSETSMANAGER_H
#define MAGNIFIERASSETSMANAGER_H

@class AXAssetController, AXMagnifierAssetPolicy, NSArray, NSDictionary, NSString, NSURL;
@protocol AXAssetControllerObserver, MagnifierAssetsManagerDelegate;

#import <Foundation/Foundation.h>


@interface MagnifierAssetsManager : NSObject <AXAssetControllerObserver>

 {
    os_unfair_lock_s _lock;
    BOOL _didTryWaitingForAssetLookup;
    AXAssetController *_assetController;
    AXMagnifierAssetPolicy *_assetPolicy;
    NSArray *_cachedAssets;
    NSArray *_cachedDownloadableAssets;
    NSArray *_assetsNeedingDownload;
    NSDictionary *_expectedDownloadSizes;
    NSDictionary *_totalInstalledSizes;
    NSDictionary *_assetDownloadPercent;
    BOOL _assetDownloadFailed;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MagnifierAssetsManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *doorAttributesAssetProperties; // ivar: _doorAttributesAssetProperties
@property (copy, nonatomic) NSURL *doorAttributesBaseURL; // ivar: _doorAttributesBaseURL
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *signDetectorAssetProperties; // ivar: _signDetectorAssetProperties
@property (copy, nonatomic) NSURL *signDetectorBaseURL; // ivar: _signDetectorBaseURL
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)assetDownloadFailed;
-(CGFloat)totalDownloadedWithName:(id)arg0 ;
-(NSInteger)totalSizeExpectedWithName:(id)arg0 ;
-(NSInteger)totalSizeOccupiedWithName:(id)arg0 ;
-(id)_modelURLForType:(NSUInteger)arg0 baseURL:(id)arg1 ;
-(id)assetPropertiesForModelType:(NSUInteger)arg0 ;
-(id)baseURLForType:(NSUInteger)arg0 ;
-(id)downloadAssetsWithName:(id)arg0 ;
-(id)init;
-(id)modelURLForType:(NSUInteger)arg0 timeout:(CGFloat)arg1 ;
-(void)_performWithLock:(id)arg0 ;
-(void)_updateAsset:(id)arg0 ;
-(void)_updateDownloadedValuesForAsset:(id)arg0 ;
-(void)assetController:(id)arg0 asset:(id)arg1 downloadProgressTotalWritten:(NSInteger)arg2 totalExpected:(NSInteger)arg3 isStalled:(BOOL)arg4 expectedTimeRemaining:(CGFloat)arg5 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishPurgingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)refreshAssets;


@end


#endif