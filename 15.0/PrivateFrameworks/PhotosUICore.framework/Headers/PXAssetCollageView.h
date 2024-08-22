// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXASSETCOLLAGEVIEW_H
#define PXASSETCOLLAGEVIEW_H

@class UIView, NSMutableDictionary, UIColor, NSMutableIndexSet;


#import "PXLayoutPerformerOutput.h"
#import "PXUIMediaProvider.h"
#import "PXRoundedCornerOverlayView.h"

@interface PXAssetCollageView : UIView

@property (nonatomic) BOOL allowAnimatedImagePlayback; // ivar: _allowAnimatedImagePlayback
@property (nonatomic) BOOL allowLoopPlayback; // ivar: _allowLoopPlayback
@property (nonatomic) BOOL allowVideoPlayback; // ivar: _allowVideoPlayback
@property (readonly, nonatomic) NSMutableDictionary *assetViews; // ivar: _assetViews
@property (readonly, nonatomic) NSMutableDictionary *assets; // ivar: _assets
@property (retain, nonatomic) UIColor *cornerBackgroundColor; // ivar: _cornerBackgroundColor
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) NSMutableIndexSet *hiddenItemIndexes; // ivar: _hiddenItemIndexes
@property (readonly, nonatomic) PXLayoutPerformerOutput *layoutOutput; // ivar: _layoutOutput
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) NSInteger numberOfItems;
@property (readonly, nonatomic) BOOL portraitBias;
@property (readonly, nonatomic) PXRoundedCornerOverlayView *roundedCornerOverlayView; // ivar: _roundedCornerOverlayView
@property (nonatomic) CGFloat spacing; // ivar: _spacing


+(NSInteger)maximumNumberOfItems;
-(CGFloat)_firstAssetAspectRatio;
-(id)_checkoutAndConfigureAssetViewForAsset:(id)arg0 withIndex:(NSInteger)arg1 ;
-(id)_displayAssetViewWithIndex:(NSInteger)arg0 ;
-(id)_displayAssetViews;
-(id)displayAssetViewAtPoint:(struct CGPoint )arg0 ;
-(id)displayAssetViewWithAsset:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 mediaProvider:(id)arg1 ;
-(void)_removeAllAssetViews;
-(void)_removeAssetView:(id)arg0 ;
-(void)_updateAssetViewsAnimatedContentEnabled;
-(void)_updateHiddenViews;
-(void)_updateRoundedCornerOverlayView;
-(void)layoutSubviews;
-(void)resetViewState;
-(void)setAsset:(id)arg0 forItemAtIndex:(NSInteger)arg1 ;
-(void)setHidden:(BOOL)arg0 forItemAtIndex:(NSInteger)arg1 ;


@end


#endif