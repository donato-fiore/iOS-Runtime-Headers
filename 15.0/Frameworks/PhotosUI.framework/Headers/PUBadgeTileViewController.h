// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUBADGETILEVIEWCONTROLLER_H
#define PUBADGETILEVIEWCONTROLLER_H

@class PXUIAssetBadgeView, NSString;
@protocol PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate, PXChangeObserver, PUBadgeTileViewControllerDelegate;


#import "PUTileViewController.h"
#import "PUBadgeInfoProvider.h"
#import "PUAssetViewModel.h"

@interface PUBadgeTileViewController : PUTileViewController <PUAssetViewModelChangeObserver, PXUIAssetBadgeViewDelegate, PXChangeObserver>

 {
    ? _delegateRespondsTo;
}


@property (nonatomic, setter=_setBadgeInfo:) PXAssetBadgeInfo _badgeInfo; // ivar: __badgeInfo
@property (retain, nonatomic) PUBadgeInfoProvider *_badgeInfoProvider; // ivar: __badgeInfoProvider
@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // ivar: __badgeView
@property (nonatomic, setter=_setContentWidth:) CGFloat _contentWidth; // ivar: __contentWidth
@property (nonatomic, setter=_setOverContent:) BOOL _isOverContent; // ivar: __isOverContent
@property (nonatomic, setter=_setNeedsUpdateBadgeInfo:) BOOL _needsUpdateBadgeInfo; // ivar: __needsUpdateBadgeInfo
@property (nonatomic, setter=_setNeedsUpdateBadgeProvider:) BOOL _needsUpdateBadgeProvider; // ivar: __needsUpdateBadgeProvider
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView; // ivar: __needsUpdateBadgeView
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUBadgeTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBadgeVisible;
@property (readonly) Class superclass;


+(id)badgeSizeCacheKeyValueFromBadgeInfo:(struct PXAssetBadgeInfo )arg0 contentWidth:(CGFloat)arg1 ;
+(struct CGSize )_badgeTileSizeForBadgeInfo:(struct PXAssetBadgeInfo )arg0 contentWidth:(CGFloat)arg1 ;
+(struct CGSize )badgeTileSizeForAssetViewModel:(id)arg0 contentWidth:(CGFloat)arg1 ;
+(void)_configureBadgeView:(id)arg0 withBadgeInfo:(struct PXAssetBadgeInfo )arg1 isOverContent:(BOOL)arg2 contentWidth:(CGFloat)arg3 animated:(BOOL)arg4 ;
+(void)applyLivePhotoEffect:(NSInteger)arg0 toAsset:(id)arg1 ;
+(void)logAppliedLivePhotoEffect:(NSInteger)arg0 toAsset:(id)arg1 ;
-(BOOL)_needsUpdate;
-(id)assetBadgeView:(id)arg0 menuForBadges:(NSUInteger)arg1 ;
-(id)loadView;
-(void)_invalidateBadgeInfo;
-(void)_invalidateBadgeProvider;
-(void)_invalidateBadgeView;
-(void)_setNeedsUpdate;
-(void)_updateBadgeInfoIfNeeded;
-(void)_updateBadgeProviderIfNeeded;
-(void)_updateBadgeViewIfNeeded;
-(void)_updateIfNeeded;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)assetBadgeView:(id)arg0 dismissAnyPresentedViewControllerWithCompletion:(id)arg1 ;
-(void)becomeReusable;
-(void)didChangeActive;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForReuse;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif