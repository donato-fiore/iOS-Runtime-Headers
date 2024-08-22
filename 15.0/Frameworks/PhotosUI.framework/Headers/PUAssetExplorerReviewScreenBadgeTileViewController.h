// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUASSETEXPLORERREVIEWSCREENBADGETILEVIEWCONTROLLER_H
#define PUASSETEXPLORERREVIEWSCREENBADGETILEVIEWCONTROLLER_H

@class PXUIAssetBadgeView, NSString;
@protocol PXChangeObserver, PUBrowsingViewModelChangeObserver, PXUIAssetBadgeViewDelegate;


#import "PUTileViewController.h"
#import "PUAssetActionManager.h"
#import "PUAssetReference.h"
#import "PUBrowsingViewModel.h"

@interface PUAssetExplorerReviewScreenBadgeTileViewController : PUTileViewController <PXChangeObserver, PUBrowsingViewModelChangeObserver, PXUIAssetBadgeViewDelegate>



@property (readonly, nonatomic) PXUIAssetBadgeView *_badgeView; // ivar: __badgeView
@property (nonatomic, setter=_setOverContent:) BOOL _isOverContent; // ivar: __isOverContent
@property (nonatomic, setter=_setNeedsUpdateBadgeView:) BOOL _needsUpdateBadgeView; // ivar: __needsUpdateBadgeView
@property (nonatomic, getter=_isPerformingChanges, setter=_setPerformingChanges:) BOOL _performingChanges; // ivar: __performingChanges
@property (retain, nonatomic) PUAssetActionManager *actionManager; // ivar: _actionManager
@property (retain, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (retain, nonatomic) PUBrowsingViewModel *browsingViewModel; // ivar: _browsingViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGSize )badgeTileSize;
+(void)_configureBadgeView:(id)arg0 isOverContent:(BOOL)arg1 isLivePhotoDisabled:(BOOL)arg2 ;
-(BOOL)_needsUpdate;
-(id)_disableLivePhotosSelectionManager;
-(id)_reviewActionManager;
-(id)loadView;
-(void)_invalidateBadgeView;
-(void)_updateBadgeViewIfNeeded;
-(void)_updateIfNeeded;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)assetBadgeView:(id)arg0 userDidSelectBadges:(NSUInteger)arg1 ;
-(void)becomeReusable;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)prepareForReuse;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif