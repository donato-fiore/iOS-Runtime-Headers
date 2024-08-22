// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXGLAYOUT_H
#define PXGLAYOUT_H

@class NSMutableArray, NSIndexSet, NSMutableSet, NSArray, NSString;
@protocol PXGDataSourceDrivenLayout, PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, PXGSpriteIndexReferencing, PXGDiagnosticsProvider, PXGLayoutContentSource, UICoordinateSpace, PXGDisplayAssetSource, OS_dispatch_queue, PXGLayoutScrollDelegate, PXGLayoutUpdateDelegate, PXGLayoutViewDelegate, PXGLayoutVisibleRectDelegate;

#import <Foundation/Foundation.h>

#import "PXGBasicAXGroup.h"
#import "PXGAnchor.h"
#import "PXGDataSourceChange.h"
#import "PXGDecoratingLayout.h"
#import "PXGEntityManager.h"
#import "PXGItemsLayout.h"
#import "PXMediaProvider.h"
#import "PXGLayout.h"
#import "PXGSpriteDataStore.h"
#import "PXGSpriteMetadataStore.h"
#import "PXGSublayoutDataStore.h"
#import "PXGViewEnvironment.h"

@interface PXGLayout : NSObject <PXGDataSourceDrivenLayout, PXGAXGroupSource, PXGAXInfoSource, PXGAXResponder, PXGSpriteIndexReferencing, PXGDiagnosticsProvider>

 {
    ? _updateFlags;
    NSMutableArray *_changeDetails;
    NSMutableArray *_animations;
    NSMutableArray *_transitions;
    NSMutableArray *_fences;
    NSMutableArray *_spriteReferencesForHiddenSprites;
    NSIndexSet *_localHiddenSpriteIndexes;
    NSIndexSet *_spriteIndexesWithInvalidatedStyle;
    BOOL _isRequestingVisibleRect;
    BOOL _isUpdating;
    BOOL _isUpdatingSpriteStyling;
    BOOL _isUpdatingAnchoring;
    BOOL _isPropagatingAdjustedReferencedHiddenSpriteIndexes;
    BOOL _isLastVisibleAreaAnchoringInformationInvalidated;
    BOOL _isPerformingWithLocalUpdate;
    PXGBasicAXGroup *_reusableAXGroup;
    NSInteger _nestedAnchorVisibleRectChanges;
    NSMutableSet *_sublayoutsExpectedToBeUpdatedInUpdatePass;
    NSInteger _numberOfRepeatedSublayoutUpdatesInUpdatePass;
    NSUInteger _childrenTotalUpdateDuration;
}


@property (readonly, nonatomic) PXGAnchor *activeAnchor; // ivar: _activeAnchor
@property (readonly, nonatomic) BOOL allowsDanglingUpdatesAssertions;
@property (readonly, nonatomic) BOOL allowsObjectReferenceSpriteIndexLookup;
@property (readonly, nonatomic) BOOL allowsSublayoutUpdateCycleAssertions;
@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (readonly, nonatomic) NSUInteger anchoredContentEdges;
@property (readonly, nonatomic) NSInteger anchoredSublayoutIndex;
@property (readonly, copy, nonatomic) NSArray *animations;
@property (nonatomic) NSUInteger appearState; // ivar: _appearState
@property (readonly, nonatomic) BOOL appliesAlphaToSublayouts; // ivar: _appliesAlphaToSublayouts
@property (readonly, nonatomic) CGRect axFrame;
@property (readonly, nonatomic) PXGBasicAXGroup *axGroup;
@property (readonly, nonatomic) NSString *axLocalizedLabel;
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder;
@property (weak, nonatomic) NSObject<PXGAXResponder> *axNextResponder; // ivar: _axNextResponder
@property (readonly, nonatomic) NSIndexSet *axSelectedSpriteIndexes;
@property (readonly, nonatomic) BOOL axShouldBeConsideredAsSubgroup;
@property (readonly, nonatomic) BOOL axShouldSearchLeafsInSubgroups;
@property (readonly, nonatomic) NSIndexSet *axSpriteIndexes;
@property (readonly, nonatomic) CGRect axVisibleRect;
@property (readonly, nonatomic) NSIndexSet *axVisibleSpriteIndexes;
@property (nonatomic) PXGCameraConfiguration cameraConfiguration; // ivar: _cameraConfiguration
@property (readonly, nonatomic) BOOL canHandleVisibleRectRejection;
@property (readonly, nonatomic) NSMutableArray *changeDetails;
@property (readonly, nonatomic) unsigned int childrenNumberOfSprites;
@property (readonly, nonatomic) NSUInteger contentChangeTrend;
@property (nonatomic) CGSize contentSize; // ivar: _contentSize
@property (weak, nonatomic) NSObject<PXGLayoutContentSource> *contentSource; // ivar: _contentSource
@property (readonly, nonatomic) NSObject<UICoordinateSpace> *coordinateSpace;
@property (readonly, nonatomic) PXGDataSourceChange *currentDataSourceChange;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PXGDecoratingLayout *decoratingLayout;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *diagnosticDescription;
@property (readonly, weak, nonatomic) NSObject<PXGDisplayAssetSource> *displayAssetSource; // ivar: _displayAssetSource
@property (readonly, nonatomic) ? displayAssetSourceRespondsTo; // ivar: _displayAssetSourceRespondsTo
@property (retain, nonatomic) PXGEntityManager *entityManager; // ivar: _entityManager
@property (nonatomic) CGSize estimatedContentSize; // ivar: _estimatedContentSize
@property (readonly, copy, nonatomic) NSArray *fences;
@property (readonly, nonatomic) UIEdgeInsets flexibleRegionInsets;
@property (nonatomic, getter=isFloating) BOOL floating; // ivar: _floating
@property (nonatomic) CGFloat floatingOffset; // ivar: _floatingOffset
@property (readonly, nonatomic) CGRect frame;
@property (readonly, nonatomic) NSUInteger fullyVisibleEdgesWithDefaultTolerance;
@property (readonly, nonatomic) BOOL hasSublayoutsRemainingToBeUpdated;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSIndexSet *hiddenSpriteIndexes;
@property (readonly, copy, nonatomic) NSArray *interactions;
@property (copy, nonatomic) NSArray *interactions; // ivar: _interactions
@property (retain, nonatomic) PXGDataSourceChange *internalCurrentDataSourceChange; // ivar: _internalCurrentDataSourceChange
@property (readonly, nonatomic) NSInteger intrinsicScrollRegime; // ivar: _intrinsicScrollRegime
@property (readonly, nonatomic) BOOL isAnimating;
@property (readonly, nonatomic) BOOL isUpdatingSpriteStyling;
@property (readonly, nonatomic) PXGItemsLayout *itemsLayout;
@property (nonatomic) CGFloat lastBaseline; // ivar: _lastBaseline
@property (nonatomic) CGPoint lastScrollDirection; // ivar: _lastScrollDirection
@property (retain, nonatomic) PXGAnchor *lastVisibleAreaAnchor; // ivar: _lastVisibleAreaAnchor
@property (readonly, nonatomic) PXGItemsLayout *layoutForItemChanges;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *layoutQueue; // ivar: _layoutQueue
@property (readonly, nonatomic) unsigned int localNumberOfSprites;
@property (retain, nonatomic) PXMediaProvider *mediaProvider; // ivar: _mediaProvider
@property (readonly, nonatomic) BOOL needsUpdate; // ivar: _needsUpdate
@property (readonly, nonatomic) NSInteger numberOfDescendantAnchors; // ivar: _numberOfDescendantAnchors
@property (readonly, nonatomic) unsigned int numberOfSprites; // ivar: _numberOfSprites
@property (readonly, nonatomic) NSInteger numberOfSublayouts;
@property (readonly, nonatomic) ? orientedContentTransform;
@property (readonly, nonatomic) NSArray *pendingAnimations;
@property (readonly, nonatomic) NSArray *pendingFences;
@property (readonly, nonatomic) NSString *recursiveDescription;
@property (nonatomic) CGFloat referenceDepth; // ivar: _referenceDepth
@property (nonatomic) unsigned short referenceOptions; // ivar: _referenceOptions
@property (nonatomic) CGSize referenceSize; // ivar: _referenceSize
@property (readonly, nonatomic) PXGLayout *rootLayout;
@property (nonatomic) UIEdgeInsets safeAreaInsets; // ivar: _safeAreaInsets
@property (nonatomic) CGFloat screenScale; // ivar: _screenScale
@property (weak, nonatomic) NSObject<PXGLayoutScrollDelegate> *scrollDelegate; // ivar: _scrollDelegate
@property (nonatomic) NSInteger scrollSpeedRegime; // ivar: _scrollSpeedRegime
@property (readonly, nonatomic) NSInteger scrollableAxis;
@property (readonly, nonatomic) BOOL shouldDecorateUndefinedMediaKind;
@property (readonly, nonatomic) BOOL shouldFaultInContentAtAnchoredContentEdges;
@property (readonly, nonatomic) BOOL shouldInvalidateDecorationForModifiedSprites;
@property (readonly, nonatomic) BOOL shouldUpdateDecorationMediaTargetSizes;
@property (readonly, nonatomic) PXGSpriteDataStore *spriteDataStore; // ivar: _spriteDataStore
@property (readonly, nonatomic) PXGSpriteMetadataStore *spriteMetadataStore; // ivar: _spriteMetadataStore
@property (readonly, nonatomic) ? stringSourceRespondsTo; // ivar: _stringSourceRespondsTo
@property (readonly, nonatomic) PXGSublayoutDataStore *sublayoutDataStore; // ivar: _sublayoutDataStore
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (weak, nonatomic) PXGLayout *superlayout; // ivar: _superlayout
@property (readonly, copy, nonatomic) NSArray *transitions;
@property (readonly, nonatomic) NSInteger updateCount; // ivar: _updateCount
@property (weak, nonatomic) NSObject<PXGLayoutUpdateDelegate> *updateDelegate; // ivar: _updateDelegate
@property (retain, nonatomic) id *userData; // ivar: _userData
@property (nonatomic) NSUInteger userInterfaceDirection; // ivar: _userInterfaceDirection
@property (readonly, nonatomic) NSInteger version; // ivar: _version
@property (weak, nonatomic) NSObject<PXGLayoutViewDelegate> *viewDelegate; // ivar: _viewDelegate
@property (retain, nonatomic) PXGViewEnvironment *viewEnvironment; // ivar: _viewEnvironment
@property (nonatomic) CGRect visibleRect; // ivar: _visibleRect
@property (weak, nonatomic) NSObject<PXGLayoutVisibleRectDelegate> *visibleRectDelegate; // ivar: _visibleRectDelegate


-(BOOL)axCanFocusOnSpriteAtIndex:(unsigned int)arg0 ;
-(BOOL)axGroup:(id)arg0 didRequestToPerformAction:(NSInteger)arg1 userInfo:(id)arg2 ;
-(BOOL)changeVisibleRectToProposedVisibleRect:(struct CGRect )arg0 ;
-(BOOL)isDescendantOfLayout:(id)arg0 ;
-(BOOL)isSpriteIndex:(unsigned int)arg0 decoratingSpriteWithIndex:(*unsigned int)arg1 ;
-(NSInteger)addSublayout:(id)arg0 ;
-(NSInteger)indexOfSublayout:(id)arg0 ;
-(NSInteger)sublayoutIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(NSInteger)sublayoutIndexForSpriteIndex:(unsigned int)arg0 ;
-(NSInteger)sublayoutIndexForSpriteReference:(id)arg0 options:(NSUInteger)arg1 ;
-(NSUInteger)fullyVisibleEdgesWithEdgeTolerances:(struct UIEdgeInsets )arg0 ;
-(id)_createAnchorForContentEdges:(NSUInteger)arg0 priority:(NSInteger)arg1 ;
-(id)_createAnchorWithAnchor:(id)arg0 resetPriority:(BOOL)arg1 ;
-(id)_createAnchorWithPriority:(NSInteger)arg0 constraints:(id)arg1 ;
-(id)_paddingForLevel:(NSInteger)arg0 ;
-(id)axContainingScrollViewForAXGroup:(id)arg0 ;
-(id)axContainingViewForAXGroup:(id)arg0 ;
-(id)axContentInfoAtSpriteIndex:(unsigned int)arg0 ;
-(id)axLeafForObjectReference:(id)arg0 ;
-(id)axSpriteIndexesInRect:(struct CGRect )arg0 ;
-(id)axSpriteIndexesInRectDefaultImplementation:(struct CGRect )arg0 ;
-(id)commonAncestorWithLayout:(id)arg0 ;
-(id)convertChangeDetails:(id)arg0 fromSublayout:(id)arg1 ;
-(id)convertSpriteIndexes:(id)arg0 fromDescendantLayout:(id)arg1 ;
-(id)createAnchorForContentEdges:(NSUInteger)arg0 ;
-(id)createAnchorForScrollingAnimationTowardsContentEdges:(NSUInteger)arg0 ;
-(id)createAnchorForScrollingSpriteAtIndex:(unsigned int)arg0 toScrollPosition:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 ;
-(id)createAnchorForScrollingSpriteForObjectReference:(id)arg0 toScrollPosition:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 ;
-(id)createAnchorForScrollingSpriteForSpriteReference:(id)arg0 normalizedAnchorPoint:(struct CGPoint )arg1 toVisibleLocation:(struct CGPoint )arg2 ;
-(id)createAnchorForScrollingSpriteForSpriteReference:(id)arg0 toScrollPosition:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 ;
-(id)createAnchorForScrollingSpriteForSpriteReference:(id)arg0 toScrollPosition:(NSUInteger)arg1 padding:(struct UIEdgeInsets )arg2 customOffset:(id)arg3 ;
-(id)createAnchorForScrollingToContentEdges:(NSUInteger)arg0 padding:(struct UIEdgeInsets )arg1 ;
-(id)createAnchorForSpriteAtIndex:(unsigned int)arg0 ;
-(id)createAnchorForSpriteReferences:(id)arg0 ;
-(id)createAnchorForVisibleArea;
-(id)createAnchorForVisibleAreaIgnoringEdges:(NSUInteger)arg0 ;
-(id)createAnchorFromSuperlayoutWithSublayoutIndex:(NSInteger)arg0 sublayoutPositionEdges:(NSUInteger)arg1 ignoringScrollingAnimationAnchors:(BOOL)arg2 ;
-(id)createAnchorWithAnchor:(id)arg0 ;
-(id)createAnchorWithConstraints:(id)arg0 ;
-(id)createAnimation;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(NSInteger)arg0 ;
-(id)createCuratedLibraryLayoutAnimationIfNeededWithContext:(NSInteger)arg0 userData:(id)arg1 ;
-(id)createCuratedLibraryLayoutSkimmingSlideshowAnimationFromSectionIndexPath:(struct PXSimpleIndexPath )arg0 toSectionIndexPath:(struct PXSimpleIndexPath )arg1 ;
-(id)createCuratedLibraryLayoutTransitionIfNeededWithContext:(NSInteger)arg0 ;
-(id)createCuratedLibraryLayoutZoomLevelChangeAnimationFromZoomLevel:(NSInteger)arg0 toZoomLevel:(NSInteger)arg1 withContext:(NSInteger)arg2 ;
-(id)createDefaultAnimationForCurrentContext;
-(id)createFenceWithType:(NSUInteger)arg0 ;
-(id)createTransitionWithAnimations:(id)arg0 ;
-(id)diagnosticsItemProvidersInRect:(struct CGRect )arg0 ;
-(id)dropTargetObjectReferenceForLocation:(struct CGPoint )arg0 ;
-(id)dynamicSpriteReferenceForObjectReference:(id)arg0 ;
-(id)hitTestResultForSpriteIndex:(unsigned int)arg0 ;
-(id)init;
-(id)leafSublayoutForSpriteIndex:(unsigned int)arg0 ;
-(id)objectReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)spriteReferenceForObjectReference:(id)arg0 ;
-(id)spriteReferenceForSpriteIndex:(unsigned int)arg0 ;
-(id)spriteReferenceForSpriteIndex:(unsigned int)arg0 objectReference:(id)arg1 ;
-(id)spriteReferenceForSpriteReference:(id)arg0 ;
-(id)sublayoutAtIndex:(NSInteger)arg0 loadIfNeeded:(BOOL)arg1 ;
-(id)sublayoutForSpriteIndex:(unsigned int)arg0 ;
-(id)viewForSpriteIndex:(unsigned int)arg0 ;
-(struct ? )entityForSpriteAtIndex:(unsigned int)arg0 ;
-(struct ? )geometryForSpriteAtIndex:(unsigned int)arg0 ;
-(struct ? )styleForSpriteAtIndex:(unsigned int)arg0 ;
-(struct CGPoint )_offsetToDescendantLayout:(id)arg0 ;
-(struct CGPoint )axConvertPoint:(struct CGPoint )arg0 fromDescendantGroup:(id)arg1 ;
-(struct CGPoint )axConvertPoint:(struct CGPoint )arg0 toDescendantGroup:(id)arg1 ;
-(struct CGPoint )convertPoint:(struct CGPoint )arg0 fromLayout:(id)arg1 ;
-(struct CGRect )anchoringRectForSpriteAtIndex:(unsigned int)arg0 ;
-(struct CGRect )axConvertRect:(struct CGRect )arg0 fromDescendantGroup:(id)arg1 ;
-(struct CGRect )axConvertRect:(struct CGRect )arg0 toDescendantGroup:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromDescendantLayout:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 fromLayout:(id)arg1 ;
-(struct CGRect )convertRect:(struct CGRect )arg0 toDescendantLayout:(id)arg1 ;
-(struct CGRect )sublayout:(id)arg0 visibleRectForRequestedVisibleRect:(struct CGRect )arg1 ;
-(struct CGSize )minPlayableSizeForSpriteAtIndex:(unsigned int)arg0 ;
-(struct _PXGSpriteIndexRange )addSpriteCount:(unsigned int)arg0 withInitialState:(id)arg1 ;
-(struct _PXGSpriteIndexRange )convertRange:(struct _PXGSpriteIndexRange )arg0 fromSublayout:(id)arg1 ;
-(struct _PXGSpriteIndexRange )convertSpriteIndexRange:(struct _PXGSpriteIndexRange )arg0 fromDescendantLayout:(id)arg1 ;
-(struct _PXGSpriteIndexRange )spriteIndexRangeCoveringRect:(struct CGRect )arg0 ;
-(unsigned int)addSpriteWithInitialState:(id)arg0 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndex:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(unsigned int)axSpriteIndexClosestToSpriteIndexDefaultImplementation:(unsigned int)arg0 inDirection:(NSUInteger)arg1 ;
-(unsigned int)convertSpriteIndex:(unsigned int)arg0 fromDescendantLayout:(id)arg1 ;
-(unsigned int)convertSpriteIndex:(unsigned int)arg0 fromLayout:(id)arg1 ;
-(unsigned int)convertSpriteIndex:(unsigned int)arg0 toDescendantLayout:(id)arg1 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 ;
-(unsigned int)spriteIndexForObjectReference:(id)arg0 options:(NSUInteger)arg1 updatedObjectReference:(*id)arg2 ;
-(unsigned int)spriteIndexForSpriteReference:(id)arg0 ;
-(unsigned int)spriteIndexForSpriteReference:(id)arg0 options:(NSUInteger)arg1 ;
-(unsigned short)addResizableCapInsets:(struct ? )arg0 ;
-(void)_addAnimations:(id)arg0 ;
-(void)_addFences:(id)arg0 ;
-(void)_addHiddenSpriteIndexes:(id)arg0 ;
-(void)_appendDescription:(id)arg0 atLevel:(NSInteger)arg1 ;
-(void)_childDidUpdateWithDuration:(NSUInteger)arg0 ;
-(void)_ensureSpriteDataStore;
-(void)_ensureSublayoutDataStore;
-(void)_enumerateSpritesInRange:(struct _PXGSpriteIndexRange )arg0 transform:(struct ? )arg1 spriteOffset:(unsigned int)arg2 stop:(*BOOL)arg3 usingBlock:(id)arg4 ;
-(void)_enumerateSpritesInRect:(struct CGRect )arg0 transform:(struct ? )arg1 usingBlock:(id)arg2 ;
-(void)_incrementNumberOfSprites:(NSInteger)arg0 ;
-(void)_invalidateDecorationForSpriteRange:(struct _PXGSpriteIndexRange )arg0 inLayout:(id)arg1 ;
-(void)_invalidateStyleOfSpritesWithIndexes:(id)arg0 ;
-(void)_propagateHiddenSpriteIndexes:(id)arg0 ;
-(void)_recycleSpriteDataStore;
-(void)_updateAnchoring;
-(void)_updateVersion;
-(void)_willAddSublayout:(id)arg0 ;
-(void)addAnchor:(id)arg0 ;
-(void)addAnimation:(id)arg0 ;
-(void)addFence:(id)arg0 ;
-(void)addInteraction:(id)arg0 ;
-(void)addSpritesAtIndexes:(id)arg0 initialState:(id)arg1 ;
-(void)addSpritesInRange:(struct _PXGSpriteIndexRange )arg0 initialState:(id)arg1 ;
-(void)addTransition:(id)arg0 ;
-(void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg0 appliedToLayout:(id)arg1 ;
-(void)animationDidComplete:(id)arg0 ;
-(void)applySectionedChangeDetails:(id)arg0 dataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2 sublayoutProvider:(id)arg3 outChangedSections:(*id)arg4 outSectionsWithItemChanges:(*id)arg5 changeMediaVersionHandler:(id)arg6 ;
-(void)applySectionedChangeDetailsForSingleSection:(id)arg0 dataSourceBeforeChanges:(id)arg1 dataSourceAfterChanges:(id)arg2 changeMediaVersionHandler:(id)arg3 ;
// -(void)applySpriteChangeDetails:(id)arg0 countAfterChanges:(unsigned int)arg1 initialState:(id)arg2 modifyFullState:(unk)arg3  ;
// -(void)applySpriteChangeDetails:(id)arg0 countAfterChanges:(unsigned int)arg1 initialState:(id)arg2 modifyState:(unk)arg3  ;
-(void)applySublayoutChangeDetails:(id)arg0 countAfterChanges:(NSInteger)arg1 sublayoutProvider:(id)arg2 ;
-(void)assumeWillUpdateSublayoutInUpdatePass:(id)arg0 ;
-(void)axAddSubgroupForSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)axGroup:(id)arg0 didChange:(NSUInteger)arg1 userInfo:(id)arg2 ;
-(void)axRemoveSubgroupForSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)clearLastVisibleAreaAnchoringInformation;
-(void)containingScrollViewDidScroll:(struct CGPoint )arg0 ;
-(void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 applySpriteTransforms:(BOOL)arg1 entities:(struct ? *)arg2 geometries:(struct ? *)arg3 styles:(struct ? *)arg4 infos:(struct ? *)arg5 ;
-(void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 applySpriteTransforms:(BOOL)arg1 parentTransform:(struct ? )arg2 parentAlpha:(float)arg3 parentSublayoutOrigin:(struct ? )arg4 entities:(struct ? *)arg5 geometries:(struct ? *)arg6 styles:(struct ? *)arg7 infos:(struct ? *)arg8 ;
-(void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 entities:(struct ? *)arg1 geometries:(struct ? *)arg2 styles:(struct ? *)arg3 infos:(struct ? *)arg4 ;
-(void)copyLayoutForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 toSpriteDataStore:(id)arg1 ;
-(void)copySpritesToDataStore:(id)arg0 ;
-(void)dealloc;
-(void)didAddSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)didApplySpriteChangeDetails:(id)arg0 ;
-(void)didApplySublayoutChangeDetails:(id)arg0 axAdjustedSubgroupChangeDetails:(id)arg1 countAfterChanges:(NSInteger)arg2 ;
-(void)didChangeSublayoutOrigins;
-(void)didFaultInSublayout:(id)arg0 atIndex:(NSInteger)arg1 fromEstimatedContentSize:(struct CGSize )arg2 ;
-(void)didRender;
-(void)didUpdate;
-(void)didUpdateSublayout:(id)arg0 ;
-(void)enumerateDescendantsLayoutsBreadthFirstReverseUsingBlock:(id)arg0 ;
-(void)enumerateDescendantsLayoutsUsingBlock:(id)arg0 ;
-(void)enumerateLayoutsForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateLocalSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange )arg0 options:(NSUInteger)arg1 usingBlock:(id)arg2 ;
-(void)enumerateSpritesInRange:(struct _PXGSpriteIndexRange )arg0 usingBlock:(id)arg1 ;
-(void)enumerateSpritesInRect:(struct CGRect )arg0 usingBlock:(id)arg1 ;
-(void)enumerateSublayoutsForDetailedPlacement:(id)arg0 ofItemWithReference:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateVisibleAnchoringLayoutsUsingBlock:(id)arg0 ;
-(void)enumerateVisibleAnchoringSpriteIndexesUsingBlock:(id)arg0 ;
-(void)floatingDidChange;
-(void)getDetailedPresentedPlacement:(id)arg0 forItemReference:(id)arg1 ;
-(void)hideSpritesForObjectReferences:(id)arg0 ;
-(void)insertSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)insertSublayoutProvider:(id)arg0 atIndexes:(id)arg1 ;
-(void)insertSublayoutProvider:(id)arg0 inRange:(struct _NSRange )arg1 ;
-(void)installLayoutCompletionBlock:(id)arg0 ;
-(void)invalidateDecoration;
-(void)invalidateDecorationForSpritesInRange:(struct _PXGSpriteIndexRange )arg0 ;
-(void)invalidateLastVisibleAreaAnchoringInformation;
-(void)invalidateVersion;
-(void)markLastVisibleAreaAnchoringInformationForInvalidation;
-(void)modifySpritesAtIndexes:(id)arg0 fullState:(id)arg1 ;
-(void)modifySpritesAtIndexes:(id)arg0 state:(id)arg1 ;
-(void)modifySpritesInRange:(struct _PXGSpriteIndexRange )arg0 fullState:(id)arg1 ;
-(void)modifySpritesInRange:(struct _PXGSpriteIndexRange )arg0 state:(id)arg1 ;
-(void)modifySpritesInRect:(struct CGRect )arg0 state:(id)arg1 ;
-(void)moveSpritesInRange:(struct _PXGSpriteIndexRange )arg0 toRange:(struct _PXGSpriteIndexRange )arg1 ;
-(void)performChangesWithLocalUpdate:(id)arg0 ;
-(void)performRepeatedSublayoutsUpdate:(id)arg0 ;
-(void)performSpriteStylingUpdate:(id)arg0 ;
-(void)removeAllAnimations;
-(void)removeAllFences;
-(void)removeAllTransitions;
-(void)removeAnchor:(id)arg0 ;
-(void)removeAnimation:(id)arg0 ;
-(void)removeFromSuperlayout;
-(void)removeInteraction:(id)arg0 ;
-(void)removeSpritesAtIndexes:(id)arg0 ;
-(void)removeSpritesInRange:(struct _PXGSpriteIndexRange )arg0 ;
-(void)removeSublayoutAtIndex:(NSInteger)arg0 ;
-(void)removeSublayoutsAtIndexes:(id)arg0 ;
-(void)removeSublayoutsInRange:(struct _NSRange )arg0 ;
-(void)setDetailedPlacementOverride:(id)arg0 forItemReference:(id)arg1 ;
-(void)sublayout:(id)arg0 didAddAnchor:(id)arg1 ;
-(void)sublayout:(id)arg0 didApplySpriteChangeDetails:(id)arg1 fromDescendentSublayout:(id)arg2 ;
-(void)sublayout:(id)arg0 didRemoveAnchor:(id)arg1 ;
-(void)sublayoutDidChangeContentSize:(id)arg0 ;
-(void)sublayoutDidChangeLastBaseline:(id)arg0 ;
-(void)sublayoutNeedsUpdate:(id)arg0 ;
-(void)update;
-(void)updateAsRootIfNeeded;
-(void)updateIfNeeded;
-(void)updateStylingForSpritesAtIndexes:(id)arg0 ;
-(void)willFaultOutSublayout:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)willRemoveSublayout:(id)arg0 atIndex:(NSInteger)arg1 flags:(NSUInteger)arg2 ;
-(void)willUpdate;


@end


#endif