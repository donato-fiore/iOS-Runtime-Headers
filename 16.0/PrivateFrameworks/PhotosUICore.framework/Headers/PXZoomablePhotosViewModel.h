// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXZOOMABLEPHOTOSVIEWMODEL_H
#define PXZOOMABLEPHOTOSVIEWMODEL_H

@class NSArray, NSString, NSSet;
@protocol PXChangeObserver, PXMutableZoomablePhotosViewModel, PXAssetsDataSourceManagerObserver, PXPhotosPreferredAssetCropDelegate, PXZoomablePhotosUserDefaults;


#import "PXObservable.h"
#import "PXZoomablePhotosAlphaAnimator.h"
#import "PXNumberAnimator.h"
#import "PXAssetReference.h"
#import "PXAssetsDataSourceManager.h"
#import "PXZoomableInlineHeadersDataSourceManager.h"
#import "PXLoadingStatusManager.h"
#import "PXMediaProvider.h"
#import "PXSectionedSelectionManager.h"
#import "PXSelectionSnapshot.h"
#import "PXZoomablePhotosLayoutSpecManager.h"
#import "PXUpdater.h"

@interface PXZoomablePhotosViewModel : PXObservable <PXChangeObserver, PXMutableZoomablePhotosViewModel, PXAssetsDataSourceManagerObserver>

 {
    BOOL _isUpdatingZoomState;
    PXZoomablePhotosAlphaAnimator *_alphaAnimator;
    NSInteger _pendingZoomColumnIndex;
    BOOL _animatePendingZoom;
    PXNumberAnimator *_columnWidthAnimator;
    CGFloat _normalizedColumnWidthWhenPinchStarted;
    CGFloat _pinchLogValue;
    CGFloat _pinchLogVelocity;
    CGFloat _pinchLastDate;
    BOOL _wasPinching;
    BOOL _wasInteractiveZooming;
    NSUInteger _supportLevel;
    id *_pauseToken;
}


@property (readonly, nonatomic) BOOL allowDenseLevels;
@property (readonly, nonatomic) NSArray *allowedColumnWidths; // ivar: _allowedColumnWidths
@property (retain, nonatomic) NSArray *allowedColumns; // ivar: _allowedColumns
@property (readonly, nonatomic) BOOL allowsCaptionsInSquare; // ivar: _allowsCaptionsInSquare
@property (readonly, nonatomic) BOOL alwaysShowTopBadges; // ivar: _alwaysShowTopBadges
@property (readonly, nonatomic) PXAssetReference *anchorAssetReference; // ivar: _anchorAssetReference
@property (readonly, nonatomic) BOOL aspectFit; // ivar: _aspectFit
@property (readonly, nonatomic) PXAssetsDataSourceManager *assetsDataSourceManager; // ivar: _assetsDataSourceManager
@property (readonly, nonatomic) id *badgesModifier; // ivar: _badgesModifier
@property (readonly, nonatomic) BOOL captionsVisible; // ivar: _captionsVisible
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *draggedAssetReferences; // ivar: _draggedAssetReferences
@property (readonly, nonatomic) PXAssetReference *dropTargetAssetReference; // ivar: _dropTargetAssetReference
@property (readonly, nonatomic) id *effectProvider; // ivar: _effectProvider
@property (nonatomic) BOOL hasInlineHeadersContent; // ivar: _hasInlineHeadersContent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXZoomableInlineHeadersDataSourceManager *inlineHeadersDataSourceManager; // ivar: _inlineHeadersDataSourceManager
@property (readonly, nonatomic) CGFloat interactiveZoomColumnIndex; // ivar: _interactiveZoomColumnIndex
@property (readonly, nonatomic) BOOL isDisplayingIndividualItems;
@property (readonly, nonatomic) BOOL isInSelectMode; // ivar: _isInSelectMode
@property (readonly, nonatomic) BOOL isInteractiveZooming; // ivar: _isInteractiveZooming
@property (readonly, nonatomic) BOOL isPerformingInitialChanges; // ivar: _isPerformingInitialChanges
@property (readonly, nonatomic) BOOL isPinching; // ivar: _isPinching
@property (readonly, nonatomic) BOOL layoutExtendsContentBelowBounds; // ivar: _layoutExtendsContentBelowBounds
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (readonly, nonatomic) BOOL lowMemoryMode; // ivar: _lowMemoryMode
@property (readonly, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) ? pinchState; // ivar: _pinchState
@property (readonly, weak, nonatomic) NSObject<PXPhotosPreferredAssetCropDelegate> *preferredAssetCropDelegate; // ivar: _preferredAssetCropDelegate
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot;
@property (nonatomic) BOOL shouldHideSurroundingContent; // ivar: _shouldHideSurroundingContent
@property (readonly, nonatomic) PXZoomablePhotosLayoutSpecManager *specManager; // ivar: _specManager
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater
@property (readonly, nonatomic) NSObject<PXZoomablePhotosUserDefaults> *userDefaults;
@property (readonly, nonatomic) BOOL viewBasedDecorationsEnabled; // ivar: _viewBasedDecorationsEnabled
@property (readonly, nonatomic) BOOL wantsDimmedSelectionStyle; // ivar: _wantsDimmedSelectionStyle
@property (readonly, nonatomic) BOOL wantsFileSizeBadge; // ivar: _wantsFileSizeBadge
@property (readonly, nonatomic) BOOL wantsNumberedSelectionStyle; // ivar: _wantsNumberedSelectionStyle
@property (readonly, nonatomic) BOOL wantsOverBackgroundFloatingHeaderAppearance; // ivar: _wantsOverBackgroundFloatingHeaderAppearance
@property (nonatomic) ? zoomState; // ivar: _zoomState


-(BOOL)hasContentToZoom;
-(CGFloat)_columnIndexForItemWidth:(CGFloat)arg0 ;
-(CGFloat)_columnWidthForDesiredColumnIndex:(CGFloat)arg0 ;
-(NSInteger)_clampColumnIndexToValidIndex:(NSInteger)arg0 ;
-(NSInteger)_closestColumnIndexForAnimatedValue:(CGFloat)arg0 ;
-(NSInteger)_closestColumnIndexForColumnWidth:(CGFloat)arg0 ;
-(NSInteger)_maxColumnsForIndividualItems;
-(NSInteger)_nextColumnIndexForInitialColumnWidth:(CGFloat)arg0 currentColumnWidth:(CGFloat)arg1 velocity:(CGFloat)arg2 ;
-(NSInteger)bestColumnIndexForPreferredNumberOfColumns:(NSInteger)arg0 ;
-(NSInteger)denseZoomLevelForZoomState:(struct ? )arg0 ;
-(id)init;
// -(id)initWithDataSourceManager:(id)arg0 selectionManager:(id)arg1 mediaProvider:(id)arg2 specManager:(id)arg3 loadingStatusManager:(id)arg4 badgesModifier:(id)arg5 preferredAssetCropDelegate:(unk)arg6  ;
-(id)mutableChangeObject;
-(void)_handleSpecChange;
-(void)_invalidateAllowedColumns;
-(void)_invalidateAlphaAnimator;
-(void)_invalidatePinchVelocity;
-(void)_invalidateShouldHideSurroundingContent;
-(void)_invalidateZoomState;
-(void)_setNeedsUpdate;
-(void)_updateAllowedColumns;
-(void)_updateAlphaAnimator;
-(void)_updatePinchVelocity;
-(void)_updateShouldHideSurroundingContent;
-(void)_updateZoomState;
-(void)dealloc;
-(void)didPerformChanges;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)performChanges:(id)arg0 ;
-(void)performInitialChanges:(id)arg0 ;
-(void)resetColumns;
-(void)zoomInToIndividualItemsWithAnchorAssetReference:(id)arg0 animated:(BOOL)arg1 ;
-(void)zoomInToLastRememberedWithAnchorAssetReference:(id)arg0 animated:(BOOL)arg1 ;
-(void)zoomToColumnIndex:(NSInteger)arg0 withAnchorAssetReference:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif