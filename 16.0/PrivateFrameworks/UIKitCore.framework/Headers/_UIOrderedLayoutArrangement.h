// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIORDEREDLAYOUTARRANGEMENT_H
#define _UIORDEREDLAYOUTARRANGEMENT_H

@class UILayoutArrangement, NSMapTable, NSSet, NSString;
@protocol _UIOLAPropertySource;



@interface _UIOrderedLayoutArrangement : UILayoutArrangement <_UIOLAPropertySource>

 {
    NSMapTable *_spacingOrCenteringGuides;
    NSMapTable *_edgeToEdgeConstraintsForVisibleItems;
    NSMapTable *_edgeToEdgeConstraintsForHiddenItems;
    NSMapTable *_relatedDimensionConstraints;
    NSMapTable *_hidingDimensionConstraints;
    NSMapTable *_multilineTextWidthDisambiguationConstraints;
    CGFloat _proportionalFillDenominator;
}


@property (nonatomic, setter=_setItemFittingSizeChanged:) BOOL _itemFittingSizeChanged; // ivar: _itemFittingSizeChanged
@property (nonatomic, setter=_setItemOrderingChanged:) BOOL _itemOrderingChanged; // ivar: _itemOrderingChanged
@property (readonly, nonatomic) NSSet *_newlyHiddenItems;
@property (readonly, nonatomic) NSSet *_newlyUnhiddenItems;
@property (nonatomic) NSInteger axis;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement; // ivar: _baselineRelativeArrangement
@property (readonly, nonatomic) NSMapTable *customSpacings; // ivar: _customSpacings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger distribution; // ivar: _distribution
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *invalidBaselineConstraints;
@property (nonatomic) BOOL layoutFillsCanvas;
@property (nonatomic) BOOL layoutUsesCanvasMarginsWhenFilling;
@property (nonatomic) CGFloat spacing; // ivar: _spacing
@property (readonly) Class superclass;


+(Class)_configurationHistoryClass;
-(BOOL)_canvasConnectionConstraintsNeedUpdatePass;
-(BOOL)_configurationRequiresCanvasConnectionFittingConstraint;
-(BOOL)_customSpacingChanged;
-(BOOL)_hasStaleConfiguration;
-(BOOL)_hasStaleSpacing;
-(BOOL)_itemCountChanged;
-(BOOL)_monitorsSystemLayoutFittingSizeForItem:(id)arg0 ;
-(BOOL)_wantsProportionalDistribution;
-(CGFloat)_calculatedIntrinsicHeight;
-(CGFloat)_constantForMultilineTextWidthDisambiguationConstraintWithNumberOfRelevantItems:(NSUInteger)arg0 ;
-(CGFloat)_expectedEdgeToEdgeSpacingForPrecedingItem:(id)arg0 followingItem:(id)arg1 isPrecededByVisibleItem:(BOOL)arg2 isFollowedByVisibleItem:(BOOL)arg3 ;
-(CGFloat)customSpacingAfterItem:(id)arg0 ;
-(NSInteger)_maxAttributeForGapConstraintRespectingBaselineRelative:(BOOL)arg0 ;
-(NSInteger)_minAttributeForGapConstraint;
-(NSInteger)_minAttributeForGapConstraintRespectingBaselineRelative:(BOOL)arg0 ;
-(NSInteger)_precedingLocationAttributeForGuideConstraint;
-(NSUInteger)_indexOfItemForLocationAttribute:(NSInteger)arg0 ;
-(id)_baselineViewVendTallest:(BOOL)arg0 forFirstBaseline:(BOOL)arg1 ;
-(id)_dimensionRefItemFromConstraint:(id)arg0 ;
-(id)_edgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg0 followingItem:(id)arg1 isPrecededByVisibleItem:(BOOL)arg2 isFollowedByVisibleItem:(BOOL)arg3 ;
-(id)_firstVisibleItem;
-(id)_identifierForSpanningLayoutGuide;
-(id)_lastVisibleItem;
-(id)_orderedConfigurationHistory;
-(id)_orderedPropertySource;
-(id)_preparedFaultyCompatibleMultilineTextWidthDisambiguationConstraintForItem:(id)arg0 ;
-(id)_preparedImprovedMultilineTextWidthDisambiguationConstraintForItem:(id)arg0 numberOfVisibleMultilineItems:(NSUInteger)arg1 ;
-(id)_setUpSpacingOrCenteringGuideForGapIndex:(NSUInteger)arg0 ;
-(id)_tallestItem;
-(id)_visibleItemAtEndWithEnumerationOptions:(NSUInteger)arg0 ;
-(void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenPrecedingItem:(id)arg0 followingItem:(id)arg1 isPrecededByVisibleItem:(BOOL)arg2 isFollowedByVisibleItem:(BOOL)arg3 isHidden:(BOOL)arg4 ;
-(void)_activateAndInsertEdgeToEdgeConstraintForGapBetweenSpanningLayoutGuide:(id)arg0 hiddenItem:(id)arg1 ;
-(void)_adjustConstraintConstantsIfPossible;
-(void)_cleanUpEdgeToEdgeConstraintsForHiddenItemsForItem:(id)arg0 atIndex:(NSUInteger)arg1 processAdjacentHiddenItems:(BOOL)arg2 ;
-(void)_cleanUpEdgeToEdgeConstraintsForVisibleItemsForItem:(id)arg0 atIndex:(NSUInteger)arg1 processPrecedingVisibleItem:(BOOL)arg2 ;
-(void)_cleanUpGuideAtGapFollowingItem:(id)arg0 ;
-(void)_cleanUpGuides;
-(void)_cleanUpWithoutResettingKeepAliveWorkaround;
-(void)_clearAllConstraintsArrays;
-(void)_didEvaluateMultilineHeightForView:(id)arg0 ;
-(void)_insertIndividualGuidesAndConstraintsAsNecessary;
-(void)_intrinsicContentSizeInvalidatedForItem:(id)arg0 ;
-(void)_notifyCanvasesBaselineParametersDidChange;
-(void)_removeGuideAndConstraintGroupsAsNecessary;
-(void)_removeIndividualGuidesAndConstraintsAsNecessary;
-(void)_setUpDimensionConstraintForItem:(id)arg0 referenceItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(void)_setUpHidingDimensionConstraintForItem:(id)arg0 ;
-(void)_setUpMultilineTextWidthDisambiguationConstraintForItem:(id)arg0 numberOfVisibleMultilineItems:(NSUInteger)arg1 ;
-(void)_systemLayoutFittingSizeDidChangeForItem:(id)arg0 ;
-(void)_trackChangesAffectingExternalBaselineConstraints:(id)arg0 ;
-(void)_updateArrangementConstraints;
-(void)_updateConfigurationHistory;
-(void)_visibilityParameterChangedForItem:(id)arg0 ;
-(void)dealloc;
-(void)insertItem:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeItem:(id)arg0 ;
-(void)setCustomSpacing:(CGFloat)arg0 afterItem:(id)arg1 ;


@end


#endif