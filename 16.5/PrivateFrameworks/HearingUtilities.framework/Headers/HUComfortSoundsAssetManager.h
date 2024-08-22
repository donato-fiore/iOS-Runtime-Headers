// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUCOMFORTSOUNDSASSETMANAGER_H
#define HUCOMFORTSOUNDSASSETMANAGER_H

@class AXAssetController, NSDictionary, NSArray, NSString;
@protocol AXAssetControllerObserver, HUComfortSoundsAssetManagerDelegate;

#import <Foundation/Foundation.h>


@interface HUComfortSoundsAssetManager : NSObject <AXAssetControllerObserver>



@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (copy, nonatomic) NSDictionary *assetDownloadProgress; // ivar: _assetDownloadProgress
@property (retain, nonatomic) NSArray *availableAssets; // ivar: _availableAssets
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUComfortSoundsAssetManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)assetWithId:(id)arg0 ;
-(id)init;
-(void)assetController:(id)arg0 asset:(id)arg1 downloadProgressTotalWritten:(NSInteger)arg2 totalExpected:(NSInteger)arg3 isStalled:(BOOL)arg4 expectedTimeRemaining:(CGFloat)arg5 ;
-(void)assetController:(id)arg0 didFinishDownloadingAsset:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 hasRemainingDownloads:(BOOL)arg4 ;
-(void)assetController:(id)arg0 didFinishPurgingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)assetController:(id)arg0 didFinishRefreshingAssets:(id)arg1 wasSuccessful:(BOOL)arg2 error:(id)arg3 ;
-(void)downloadAssetWithId:(id)arg0 ;
-(void)refreshAssets;
-(void)removeAssetWithId:(id)arg0 ;


@end


#endif