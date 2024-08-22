// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXDISPLAYASSETVIEW_H
#define PXDISPLAYASSETVIEW_H

@class UIView, UIImage, NSString, NSArray;
@protocol PXChangeObserver, PXDisplayAsset;


#import "PXDisplayAssetContentView.h"
#import "PXUIMediaProvider.h"
#import "PXDisplayAssetCombinedOverlayView.h"
#import "PXUpdater.h"
#import "PXDisplayAssetViewModel.h"

@interface PXDisplayAssetView : UIView <PXChangeObserver>

 {
    BOOL _isPerformingLayout;
}


@property (nonatomic) BOOL allowsTextSelection; // ivar: _allowsTextSelection
@property (retain, nonatomic) NSObject<PXDisplayAsset> *asset; // ivar: _asset
@property (retain, nonatomic) PXDisplayAssetContentView *contentView; // ivar: _contentView
@property (readonly, nonatomic) UIImage *currentImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect imageFrame;
@property (retain, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) PXDisplayAssetCombinedOverlayView *overlayView; // ivar: _overlayView
@property (copy, nonatomic) NSArray *stringsToHighlight; // ivar: _stringsToHighlight
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) PXDisplayAssetViewModel *viewModel; // ivar: _viewModel
@property (nonatomic) CGSize viewportSize; // ivar: _viewportSize


+(id)currentLocaleForTesting;
+(id)localizedTitleForAsset:(id)arg0 ;
+(void)setCurrentLocaleForTesting:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonPXDisplayAssetViewInit;
-(void)_invalidateContentView;
-(void)_invalidateContentViewLayout;
-(void)_invalidateContentViewProperties;
-(void)_invalidateViewModelProperties;
-(void)_setNeedsUpdate;
-(void)_updateContentView;
-(void)_updateContentViewLayout;
-(void)_updateContentViewProperties;
-(void)_updateViewModelProperties;
-(void)dealloc;
-(void)layoutSubviews;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)setContentMode:(NSInteger)arg0 ;


@end


#endif