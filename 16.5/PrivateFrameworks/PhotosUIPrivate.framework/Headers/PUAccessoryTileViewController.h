// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUACCESSORYTILEVIEWCONTROLLER_H
#define PUACCESSORYTILEVIEWCONTROLLER_H

@class UIView, UIViewController<PUAccessoryContentViewController>, NSString;
@protocol PUAccessoryContentViewControllerDelegate, PUAccessoryTileViewControllerDelegate;


#import "PUTileViewController.h"
#import "PUAssetReference.h"
#import "PUAssetViewModel.h"

@interface PUAccessoryTileViewController : PUTileViewController <PUAccessoryContentViewControllerDelegate>

 {
    BOOL _isPerformingChanges;
    BOOL _isPerformingUpdates;
    BOOL _isUpdateScheduled;
    ? _delegateFlags;
    ? _needsUpdateFlags;
}


@property (nonatomic, setter=_setContentBounds:) CGRect _contentBounds; // ivar: __contentBounds
@property (nonatomic, setter=_setContentInsets:) UIEdgeInsets _contentInsets; // ivar: __contentInsets
@property (nonatomic, setter=_setContentInsetsChangeReason:) NSInteger _contentInsetsChangeReason; // ivar: __contentInsetsChangeReason
@property (retain, nonatomic, setter=_setContentView:) UIView *_contentView; // ivar: __contentView
@property (retain, nonatomic, setter=_setContentViewController:) UIViewController<PUAccessoryContentViewController> *_contentViewController; // ivar: __contentViewController
@property (nonatomic, setter=_setEditorHeightDelta:) CGFloat _editorHeightDelta; // ivar: __editorHeightDelta
@property (nonatomic, setter=_setKeyboardFrame:) CGRect _keyboardFrame; // ivar: __keyboardFrame
@property (retain, nonatomic, setter=_setLoadedContentViewController:) UIViewController<PUAccessoryContentViewController> *_loadedContentViewController; // ivar: __loadedContentViewController
@property (nonatomic, setter=_setMinimumVisibleHeight:) CGFloat _minimumVisibleHeight; // ivar: __minimumVisibleHeight
@property (nonatomic, setter=_setUntransformedMasterContentFrame:) CGRect _untransformedMasterContentFrame; // ivar: __untransformedMasterContentFrame
@property (nonatomic, setter=_setWasActiveOnLastMasterContentOffsetChange:) BOOL _wasActiveOnLastMasterContentOffsetChange; // ivar: __wasActiveOnLastMasterContentOffsetChange
@property (retain, nonatomic) PUAssetReference *assetReference; // ivar: _assetReference
@property (retain, nonatomic) PUAssetViewModel *assetViewModel; // ivar: _assetViewModel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUAccessoryTileViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isPhoneAndLandscape;
-(BOOL)_needsUpdate;
-(BOOL)isLocationFromProviderInContentArea:(id)arg0 ;
-(BOOL)wantsVisibleRectChanges;
-(id)accessoryContentViewControllerViewHostingGestureRecognizers:(id)arg0 ;
-(id)initWithReuseIdentifier:(id)arg0 ;
-(void)_handleScheduledUpdate;
-(void)_invalidateContentBounds;
-(void)_invalidateContentViewController;
-(void)_invalidateContentViewMetrics;
-(void)_invalidateLoadedContentViewController;
-(void)_invalidateMasterContentOffset;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_performChanges:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateAssetViewModelForAnimating;
-(void)_updateContentBoundsIfNeeded;
-(void)_updateContentViewControllerIfNeeded;
-(void)_updateContentViewMetricsIfNeeded;
-(void)_updateIfNeeded;
-(void)_updateLoadedContentViewControllerIfNeeded;
-(void)_updateMasterContentOffsetIfNeeded;
-(void)accessoryContentViewController:(id)arg0 editorHeightDidChange:(CGFloat)arg1 ;
-(void)accessoryContentViewControllerContentBoundsDidChange:(id)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)dealloc;
-(void)didChangeActive;
-(void)didChangeAnimating;
-(void)didChangeVisibleRect;
-(void)viewDidLoad;


@end


#endif