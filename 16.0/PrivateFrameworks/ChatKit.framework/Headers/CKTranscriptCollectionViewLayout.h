// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKTRANSCRIPTCOLLECTIONVIEWLAYOUT_H
#define CKTRANSCRIPTCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, CADisplayLink, NSArray, NSString, IMScheduledUpdater, NSMutableDictionary, NSIndexSet, NSMutableIndexSet, NSDate;
@protocol CKTranscriptLayoutCompatibility;



@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout <CKTranscriptLayoutCompatibility>

 {
    BOOL _isResting;
    BOOL _easingUp;
    BOOL _useFastQuanta;
    CADisplayLink *_displayLink;
    CGFloat _prevTimestamp;
    CGSize _contentSize;
    CGRect _visibleBounds;
}


@property (nonatomic) CGFloat anchorYPosition; // ivar: _anchorYPosition
@property (copy, nonatomic) NSArray *associatedLayoutAttributes; // ivar: _associatedLayoutAttributes
@property (nonatomic) unsigned char chatStyle; // ivar: _chatStyle
@property (nonatomic) BOOL coalesceInvalidations; // ivar: _coalesceInvalidations
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSArray *decorationLayoutAttributes; // ivar: _decorationLayoutAttributes
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableDynamicsWhileScrolling; // ivar: _disableDynamicsWhileScrolling
@property (retain, nonatomic) IMScheduledUpdater *dynamicsUpdater; // ivar: _dynamicsUpdater
@property (retain, nonatomic) NSMutableDictionary *finalParentVerticalOffsets; // ivar: _finalParentVerticalOffsets
@property (nonatomic) BOOL hasLoadMore; // ivar: _hasLoadMore
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHoldingBoundsInvalidation) BOOL holdingBoundsInvalidation; // ivar: _holdingBoundsInvalidation
@property (retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeInsertedWithoutFading; // ivar: _indicesOfChatItemsToBeInsertedWithoutFading
@property (retain, nonatomic) NSIndexSet *indicesOfChatItemsToBeRemovedWithoutFading; // ivar: _indicesOfChatItemsToBeRemovedWithoutFading
@property (retain, nonatomic) NSIndexSet *indicesOfReplyChatItemsToBeInserted; // ivar: _indicesOfReplyChatItemsToBeInserted
@property (retain, nonatomic) NSMutableDictionary *initialParentLayoutAttributes; // ivar: _initialParentLayoutAttributes
@property (nonatomic, getter=isInlineAnimatingOut) BOOL inlineAnimatingOut; // ivar: _inlineAnimatingOut
@property (retain, nonatomic) NSMutableIndexSet *insertedAssociatedLayoutAttributes; // ivar: _insertedAssociatedLayoutAttributes
@property (readonly, nonatomic) BOOL isResting;
@property (retain, nonatomic) NSDate *lastTouchTime; // ivar: _lastTouchTime
@property (copy, nonatomic) NSArray *layoutAttributes; // ivar: _layoutAttributes
@property (copy, nonatomic) NSArray *oldAssociatedLayoutAttributes; // ivar: _oldAssociatedLayoutAttributes
@property (nonatomic) BOOL sizeCategoryIsAccessibilitySizeCategory; // ivar: _sizeCategoryIsAccessibilitySizeCategory
@property (nonatomic) CGSize sizeForRotation; // ivar: _sizeForRotation
@property (readonly) Class superclass;
@property (nonatomic) CGPoint targetContentOffset; // ivar: _targetContentOffset
@property (nonatomic, getter=isUsingInitialLayoutAttributesForRotation) BOOL useInitialLayoutAttributesForRotation; // ivar: _useInitialLayoutAttributesForRotation
@property (nonatomic, getter=isUsingOverlayLayout) BOOL useOverlayLayout; // ivar: _useOverlayLayout


+(CGFloat)bottomTranscriptSpaceWithLastChatItem:(id)arg0 ;
+(NSInteger)translateLayoutIndexToEffectIndex:(NSInteger)arg0 ;
-(BOOL)_getEasingUpForTesting;
-(BOOL)needsAdditionalBracketPaddingForChatItem:(id)arg0 prevChatItem:(id)arg1 ;
-(BOOL)nextItemIsOriginatorWithRepliesForIndex:(NSUInteger)arg0 ;
-(BOOL)nextMessageIsReplyForIndex:(NSUInteger)arg0 ;
-(BOOL)previousReplyCount:(NSUInteger)arg0 isOccludedForAssociatedFrame:(struct CGRect )arg1 outMaxY:(*CGFloat)arg2 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)bezierPointForPercentage:(CGFloat)arg0 anchor1:(CGFloat)arg1 anchor2:(CGFloat)arg2 control1:(CGFloat)arg3 control2:(CGFloat)arg4 ;
-(CGFloat)handleInvalidCaseForChatItem:(id)arg0 withPrevChatItem:(id)arg1 ;
-(NSInteger)effectIndexForDecorationViewAtIndex:(NSInteger)arg0 ;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGRect )_convertScreenFrameToLocalFrame:(struct CGRect )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(struct UIEdgeInsets )_visibleRectInsectsForMaxYAnchorLayoutAttribute:(id)arg0 forVisibleBounds:(struct CGRect )arg1 ;
-(void)_applyAttributeUpdatesWithTargetMap:(id)arg0 layoutAttributes:(id)arg1 updateBlock:(id)arg2 ;
-(void)_applyCurrentFrameOffsetsForLayoutAttributesIfNeeded:(id)arg0 ;
-(void)_applyTargetFrameOffsetsForLayoutAttributesIfNeeded:(id)arg0 ;
-(void)_configureThreadGroupsForAttributes:(id)arg0 outMaxYAnchorAttribute:(*id)arg1 forVisibleBounds:(struct CGRect )arg2 ;
-(void)_dealloc;
-(void)_kickDynamicsIfNeeded;
-(void)_setDisplayLinkForTesting:(id)arg0 ;
-(void)_setEasingUpForTesting:(BOOL)arg0 ;
-(void)_setVisibleBoundsForTesting:(struct CGRect )arg0 ;
-(void)beginHoldingDynamicsUpdatesForKey:(id)arg0 ;
-(void)clearParentInitialIndexesAndFinalOffsets;
-(void)dealloc;
-(void)displayLinkFired:(id)arg0 ;
-(void)endHoldingDynamicsUpdatesForKey:(id)arg0 ;
-(void)invalidateDisplayLink;
-(void)invalidateLayoutWithContext:(id)arg0 ;
-(void)prepareLayout;
-(void)prepareLayoutForRotisserieScrolling;
-(void)reduceMotionSettingChanged:(id)arg0 ;
-(void)reloadData;
-(void)reloadLayout;
-(void)setInitialIndex:(NSUInteger)arg0 forParentOfAssociatedItemInsertedAtIndex:(NSUInteger)arg1 ;
-(void)setNeedsDynamicsUpdate;
-(void)setVerticalOffset:(CGFloat)arg0 forParentOfAssociatedItemDeletedAtIndex:(NSUInteger)arg1 ;
-(void)sizeCategoryDidChange:(id)arg0 ;
-(void)updateAssociatedLayoutAttributesIfNecessary;
-(void)updateAttributesForAnchorYChangeWithAttributes:(id)arg0 ;
-(void)updateAttributesForTargetContentOffsetChangeWithAttributes:(id)arg0 ;
-(void)updateContentSize;
-(void)updateFrames;


@end


#endif