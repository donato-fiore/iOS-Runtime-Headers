// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXULTRONMODELASSETMANAGER_H
#define AXULTRONMODELASSETMANAGER_H

@class NSMutableArray, AXAssetController, NSMutableDictionary, NSString;
@protocol AXAssetControllerObserver;

#import <Foundation/Foundation.h>


@interface AXUltronModelAssetManager : NSObject <AXAssetControllerObserver>

 {
    NSMutableArray *_observers;
    AXAssetController *_assetController;
    NSMutableDictionary *_assetsTotalBytesWritten;
    NSMutableDictionary *_assetsTotalTimeExpected;
    NSMutableDictionary *_assetDownloadStalled;
    NSMutableDictionary *_assetsDownloading;
    NSMutableDictionary *_cachedAssets;
}


@property (retain, nonatomic) NSMutableArray *cachedAXAssets; // ivar: _cachedAXAssets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger expectedDownloadSize; // ivar: _expectedDownloadSize
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger previousReportedSize; // ivar: _previousReportedSize
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)hasInProgressDownloads;
-(BOOL)isAssetCatalogInstalled;
-(BOOL)isAssetDownloadStalled;
-(BOOL)isKShotAsset:(id)arg0 ;
-(BOOL)isKShotUsingSoundPrint;
-(NSInteger)_expectedCurrentlyDownloadingSize;
-(NSInteger)_totalBytesOfAllAssetsWritten;
-(NSInteger)_totalExpectedTimeOfAllAssets;
-(NSInteger)assetStatus;
-(NSInteger)totalSizeExpected;
-(NSInteger)totalSizeOccupied;
-(id)init;
-(id)localPathForKShotGeneralApplianceDetector;
-(id)localPathForKShotHallucinator;
-(id)localPathForKShotModelWeights;
-(id)localURLForDetector:(id)arg0 ;
-(void)_cacheAsset:(id)arg0 ;
-(void)_downloadAssets;
-(void)_resetDownloadTracking;
-(void)_updateDownloadingAsset:(id)arg0 totalBytesWritten:(NSInteger)arg1 isStalled:(BOOL)arg2 expectedTimeRemaining:(CGFloat)arg3 ;
-(void)addObserver:(id)arg0 ;
-(void)assetController:(id)arg0 asset:(id)arg1 downloadProgressTotalWritten:(NSInteger)arg2 totalExpected:(NSInteger)arg3 isStalled:(BOOL)arg4 expectedTimeRemaining:(CGFloat)arg5 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishPurgingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)downloadAssets:(id)arg0 ;
-(void)notifyAssetsNotReady;
-(void)notifyAssetsReady;
-(void)notifyAssetsState;
-(void)notifyDownloadProgress:(NSInteger)arg0 totalSizeExpected:(NSInteger)arg1 totalRemainingTime:(CGFloat)arg2 isStalled:(BOOL)arg3 ;
-(void)notifyRefreshAssets:(id)arg0 wasSuccessful:(BOOL)arg1 error:(id)arg2 ;
-(void)purgeAssets:(id)arg0 ;
-(void)refresh;
-(void)refreshAssetsUpdatingCatalogIfNeeded:(BOOL)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)stopDownloadingAssets;


@end


#endif