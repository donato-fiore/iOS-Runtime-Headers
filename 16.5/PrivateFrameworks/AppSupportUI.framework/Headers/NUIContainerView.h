// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUICONTAINERVIEW_H
#define NUICONTAINERVIEW_H

@class UIView, NSMutableArray, NSArray;
@protocol NUIContainerViewDelegate;



@interface NUIContainerView : UIView {
    BOOL _isRTL;
    id<NUIContainerViewDelegate> *_delegate;
    map<UIView *, _NUIContainerViewArrangedSubview, std::less<UIView *>, std::allocator<std::pair<UIView *const, _NUIContainerViewArrangedSubview>>> _arrangedSubviewInfo;
    NSMutableArray *_arrangedSubviews;
    NSArray *_visibleArrangedSubviews;
    UIEdgeInsets _effectiveLayoutMargins;
    UIView *_firstBaselineView;
    UIView *_lastBaselineView;
    vector<CALayer *, std::allocator<CALayer *>> _debugBoundingBoxLayers;
    ? _containerFlags;
}


@property (nonatomic) NSInteger arrangedSubviewAdditionPolicy;
@property (nonatomic) NSInteger arrangedSubviewRemovalPolicy;
@property (copy, nonatomic) NSArray *arrangedSubviews;
@property (nonatomic, getter=isBaselineRelativeArrangement) BOOL baselineRelativeArrangement;
@property (nonatomic, getter=hasBaselineRelativeLayoutMarginsForArrangement) BOOL baselineRelativeLayoutMarginsForArrangement;
@property (nonatomic, getter=isDebugBoundingBoxesEnabled) BOOL debugBoundingBoxesEnabled;
@property (weak, nonatomic) NSObject<NUIContainerViewDelegate> *delegate;
@property (nonatomic, getter=isLayoutMarginsRelativeArrangement) BOOL layoutMarginsRelativeArrangement;
@property (readonly, nonatomic) NSArray *visibleArrangedSubviews;


+(BOOL)enableAPIMisuseAssertions;
+(BOOL)requiresConstraintBasedLayout;
+(Class)layerClass;
+(id)debugVersion;
+(void)initialize;
+(void)setEnableAPIMisuseAssertions:(BOOL)arg0 ;
-(BOOL)_isContainerView;
-(BOOL)_layoutHeightDependsOnWidth;
-(BOOL)canCancelMeasurementForCompression;
-(BOOL)isInBatchUpdate;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(BOOL)mustRestartMeasurement;
-(BOOL)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)arg0 ;
-(BOOL)setNeedsInvalidation:(NSInteger)arg0 ;
-(BOOL)shouldCancelMeasurementForCompressionInAxis:(NSInteger)arg0 ;
-(NSInteger)alignmentForView:(id)arg0 inAxis:(NSInteger)arg1 ;
-(NSUInteger)_axesForDerivingIntrinsicContentSizeFromLayoutSize;
-(NSUInteger)indexOfArrangedSubview:(id)arg0 ;
-(id)arrangedDebugDescription;
-(id)calculateViewForFirstBaselineLayout;
-(id)calculateViewForLastBaselineLayout;
-(id)debugDescription;
-(id)debugDictionary;
-(id)debugDictionaryForVisibleArrangedSubview:(id)arg0 ;
-(id)debugSetDelegateRespondsToSelectors;
-(id)debugSetEnabledFlags;
-(id)description;
-(id)initWithArrangedSubviews:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)viewForFirstBaselineLayout;
-(id)viewForLastBaselineLayout;
-(struct ? )_baselineOffsetsAtSize:(struct CGSize )arg0 ;
-(struct CGPoint )positionAdjustmentOffsetForView:(id)arg0 ;
-(struct CGRect )effectiveLayoutBounds;
-(struct CGRect )layoutFrameForArrangedSubview:(id)arg0 withProposedContentFrame:(struct CGRect )arg1 ;
-(struct CGSize )_layoutSizeThatFits:(struct CGSize )arg0 fixedAxes:(NSUInteger)arg1 ;
-(struct CGSize )calculateArrangedSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )contentLayoutSizeFittingSize:(struct CGSize )arg0 forArrangedSubview:(id)arg1 ;
-(struct CGSize )effectiveLayoutSizeFittingSize:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(struct NSDirectionalEdgeInsets )minimumSpacingAdjacentToView:(id)arg0 ;
-(struct UIEdgeInsets )effectiveLayoutMargins;
-(void)_intrinsicContentSizeInvalidatedForChildView:(id)arg0 ;
-(void)addArrangedSubview:(id)arg0 ;
-(void)assertNotInLayoutPass:(BOOL)arg0 ;
-(void)dealloc;
-(void)didInsertArrangedSubview:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)didRemoveArrangedSubview:(id)arg0 atIndex:(NSInteger)arg1 ;
-(void)ensureArrangedSubviewsAreValid;
-(void)insertArrangedSubview:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)intrinsicContentSizeDidInvalidateForArrangedSubview:(id)arg0 ;
-(void)invalidateInternalStateForInvalidation:(NSInteger)arg0 ;
-(void)invalidateIntrinsicContentSize;
-(void)layoutArrangedSubviewsInBounds:(struct CGRect )arg0 ;
-(void)layoutMarginsDidChange;
-(void)layoutSubviews;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performBatchUpdates:(id)arg0 ;
-(void)removeArrangedSubview:(id)arg0 ;
-(void)replaceArrangedSubview:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)replaceArrangedSubviewAtIndex:(NSUInteger)arg0 withView:(id)arg1 ;
-(void)setAlignment:(NSInteger)arg0 forView:(id)arg1 inAxis:(NSInteger)arg2 ;
-(void)setMinimumSpacing:(struct NSDirectionalEdgeInsets )arg0 adjacentToView:(id)arg1 ;
-(void)setNeedsLayout;
-(void)setPositionAdjustmentOffset:(struct CGPoint )arg0 forView:(id)arg1 ;
-(void)visibilityDidChangeForArrangedSubview:(id)arg0 ;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif