// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PURENDERINDICATORTILEVIEWCONTROLLER_H
#define PURENDERINDICATORTILEVIEWCONTROLLER_H

@class NSString, PXOperationStatus, UIButton, PLRoundProgressView, UILabel, UIView, NSUndoManager;
@protocol PUAssetSharedViewModelChangeObserver, PXLoadingStatusManagerObserver;


#import "PUTileViewController.h"
#import "PUAssetSharedViewModel.h"
#import "PUOperationStatus.h"

@interface PURenderIndicatorTileViewController : PUTileViewController <PUAssetSharedViewModelChangeObserver, PXLoadingStatusManagerObserver>



@property (retain, nonatomic) PUAssetSharedViewModel *assetSharedViewModel; // ivar: _assetSharedViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXOperationStatus *editActionStatus; // ivar: _editActionStatus
@property (retain, nonatomic) UIButton *errorButton; // ivar: _errorButton
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isProgressViewVisible; // ivar: _isProgressViewVisible
@property (nonatomic) BOOL needsUpdateSizeClass; // ivar: _needsUpdateSizeClass
@property (nonatomic) BOOL needsUpdateStatus; // ivar: _needsUpdateStatus
@property (nonatomic) BOOL needsUpdateStatusViews; // ivar: _needsUpdateStatusViews
@property (nonatomic) CGSize progressIndicatorSize; // ivar: _progressIndicatorSize
@property (retain, nonatomic) PLRoundProgressView *progressView; // ivar: _progressView
@property (nonatomic) CGFloat renderLabelTextWidth; // ivar: _renderLabelTextWidth
@property (retain, nonatomic) UILabel *renderingLabel; // ivar: _renderingLabel
@property (retain, nonatomic) UIView *roundedBackgroundView; // ivar: _roundedBackgroundView
@property (nonatomic) NSInteger sizeClass; // ivar: _sizeClass
@property (copy, nonatomic) PUOperationStatus *status; // ivar: _status
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUndoManager *undoManager; // ivar: _undoManager
@property (nonatomic) BOOL willShowProgressAfterDelay; // ivar: _willShowProgressAfterDelay


+(BOOL)wantsRenderViewForTypeOfProcessingNeeded:(unsigned short)arg0 ;
+(id)_loadErrorIconForSizeClass:(NSInteger)arg0 ;
+(struct CGSize )progressIndicatorTileSizeForSizeClass:(NSInteger)arg0 ;
+(struct CGSize )renderIndicatorTileSizeForSizeClass:(NSInteger)arg0 ;
-(BOOL)_needsUpdate;
-(struct CGRect )_expandedBackgroundViewFrame;
-(void)_handleAssetSharedViewModel:(id)arg0 didChange:(id)arg1 ;
-(void)_invalidateSizeClass;
-(void)_invalidateStatus;
-(void)_invalidateStatusViews;
-(void)_setNeedsUpdate;
-(void)_updateIfNeeded;
-(void)_updateSizeClassIfNeeded;
-(void)_updateStatusIfNeeded;
-(void)_updateStatusViewsIfNeeded;
-(void)_updateSubviewOrdering;
-(void)_updateViewFramesForCollapseState:(BOOL)arg0 ;
-(void)applyLayoutInfo:(id)arg0 ;
-(void)becomeReusable;
-(void)loadingStatusManager:(id)arg0 didUpdateLoadingStatus:(id)arg1 forItem:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewModel:(id)arg0 didChange:(id)arg1 ;


@end


#endif