// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUAUDIOGRAMINGESTIONASSETMANAGER_H
#define HUAUDIOGRAMINGESTIONASSETMANAGER_H

@class AXAssetController, NSString, AXAsset;
@protocol AXAssetControllerObserver, HUAudiogramIngestionAssetManagerDelegate;

#import <Foundation/Foundation.h>


@interface HUAudiogramIngestionAssetManager : NSObject <AXAssetControllerObserver>



@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAudiogramIngestionAssetManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXAsset *latestDownloadedAsset; // ivar: _latestDownloadedAsset
@property (readonly) Class superclass;


-(id)initWithDelegate:(id)arg0 ;
-(void)assetController:(id)arg0 asset:(id)arg1 downloadProgressTotalWritten:(NSInteger)arg2 totalExpected:(NSInteger)arg3 isStalled:(BOOL)arg4 expectedTimeRemaining:(CGFloat)arg5 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetDidUpdateWithError:(id)arg0 ;
-(void)refreshAssets;


@end


#endif