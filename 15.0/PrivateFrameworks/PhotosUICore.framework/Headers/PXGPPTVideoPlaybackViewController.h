// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGPPTVIDEOPLAYBACKVIEWCONTROLLER_H
#define PXGPPTVIDEOPLAYBACKVIEWCONTROLLER_H

@class UIColor, NSMapTable, NSString;
@protocol PXGDisplayAssetSource, PXGSolidColorSource, PXGSublayoutProvider, PXGDisplayAssetPixelBufferSourcesProvider, OS_dispatch_queue;


#import "PXGPPTViewController.h"
#import "PXAssetsDataSource.h"

@interface PXGPPTVideoPlaybackViewController : PXGPPTViewController <PXGDisplayAssetSource, PXGSolidColorSource, PXGSublayoutProvider, PXGDisplayAssetPixelBufferSourcesProvider>

 {
    UIColor *_spriteColor;
    NSInteger _numberOfColumns;
    PXAssetsDataSource *_dataSource;
    NSObject<OS_dispatch_queue> *_pixelBufferSources_queue;
    NSMapTable *_pixelBufferSourcesByDisplayAsset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldDisplayPreviousNonnullPixelBufferForPixelBufferSource:(id)arg0 ;
-(NSUInteger)desiredPlaceholderStyleInLayout:(id)arg0 ;
-(NSUInteger)supportedDisplayAssetPresentationStylesInLayout:(id)arg0 ;
-(id)colorAtIndex:(unsigned int)arg0 inLayout:(id)arg1 ;
-(id)displayAssetFetchResultForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(id)initWithAssetsDataSource:(id)arg0 ;
-(id)initWithLayout:(id)arg0 ;
-(id)layout:(id)arg0 createSublayoutAtIndex:(NSInteger)arg1 ;
-(id)pixelBufferSourceForDisplayAsset:(id)arg0 mediaProvider:(id)arg1 spriteReference:(id)arg2 ;
-(struct CGSize )layout:(id)arg0 estimatedContentSizeForSublayoutAtIndex:(NSInteger)arg1 referenceSize:(struct CGSize )arg2 ;
-(void)recyclePixelBufferSourceForDisplayAssets:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif