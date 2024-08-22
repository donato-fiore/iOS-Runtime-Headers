// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AIAUDIOGRAMASSETMANAGER_H
#define AIAUDIOGRAMASSETMANAGER_H

@class AXAssetController, NSString, AXAsset;
@protocol AXAssetControllerObserver, AIAudiogramAssetManagerDelegate;

#import <Foundation/Foundation.h>


@interface AIAudiogramAssetManager : NSObject <AXAssetControllerObserver>



@property (retain, nonatomic) AXAssetController *assetController; // ivar: _assetController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AIAudiogramAssetManagerDelegate> *delegate; // ivar: _delegate
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