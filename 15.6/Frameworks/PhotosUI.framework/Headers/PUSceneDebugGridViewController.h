// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUSCENEDEBUGGRIDVIEWCONTROLLER_H
#define PUSCENEDEBUGGRIDVIEWCONTROLLER_H

@class NSDictionary, NSNumber;


#import "PUPhotosAlbumViewController.h"

@interface PUSceneDebugGridViewController : PUPhotosAlbumViewController

@property (copy, nonatomic) NSDictionary *assetsHighestConfidence; // ivar: _assetsHighestConfidence
@property (retain, nonatomic) NSNumber *sceneIdentifier; // ivar: _sceneIdentifier


+(id)assetResourceLargestToSmallestComparator:(SEL)arg0 ;
-(BOOL)_isJunkSceneIdentifer:(id)arg0 ;
-(BOOL)_writeDiagnosticsToURL:(id)arg0 incorrectAssets:(id)arg1 ;
-(BOOL)allowSlideshowButton;
-(BOOL)assetConfidenceIsAboveThreshold:(id)arg0 ;
-(BOOL)assetShouldBeSurpassedInNormalUI:(id)arg0 ;
-(CGFloat)_thresholdForSceneIdentifer:(id)arg0 ;
-(CGFloat)globalHeaderHeight;
-(id)_assetResourceForAsset:(id)arg0 ;
-(id)_assetResourcesForAssets:(id)arg0 ;
-(id)_cloneAsset:(id)arg0 toDirectory:(id)arg1 ;
-(id)_globalHeaderTitle;
-(id)_keywordForSceneIdentifier:(id)arg0 ;
-(id)_localFileURLForAssetResource:(id)arg0 error:(*id)arg1 ;
-(id)_newEditActionItemsWithWideSpacing:(BOOL)arg0 ;
-(id)assetResourceFromAcceptableAssetResources:(id)arg0 ;
-(id)preferredAssetResourcesForAnalyzingAsset:(id)arg0 ;
-(void)_fileRadarWithIncorrectAssets:(id)arg0 ;
-(void)_tappedFileRadarButton:(id)arg0 ;
-(void)configureDecorationsForCell:(id)arg0 withAsset:(id)arg1 assetCollection:(id)arg2 thumbnailIsPlaceholder:(BOOL)arg3 assetMayHaveChanged:(BOOL)arg4 ;
-(void)configureGlobalHeaderView:(id)arg0 ;
-(void)getEmptyPlaceholderViewTitle:(*id)arg0 message:(*id)arg1 buttonTitle:(*id)arg2 buttonAction:(*id)arg3 ;


@end


#endif