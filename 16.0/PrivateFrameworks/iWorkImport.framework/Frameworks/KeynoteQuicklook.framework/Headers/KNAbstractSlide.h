// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNABSTRACTSLIDE_H
#define KNABSTRACTSLIDE_H

@class TSPObject, NSOrderedSet, TSUPointerKeyDictionary, TSUMutablePointerSet, NSArray, TSDFill, NSSet, NSString, TSDInfoGeometry, NSMapTable, TSPObject<TSDOwningAttachment>, NSIndexSet, NSDictionary;
@protocol TSSPropertySource, TSKDocumentObject, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSKTransformableObject, TSSStyleClient, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDInfo;


#import "KNSlideBackgroundInfo.h"
#import "KNBodyPlaceholderInfo.h"
#import "KNMotionBackground.h"
#import "KNMotionBackgroundStyle.h"
#import "KNObjectPlaceholderInfo.h"
#import "KNSlideNode.h"
#import "KNSlideNumberPlaceholderInfo.h"
#import "KNSlideStyle.h"
#import "KNTitlePlaceholderInfo.h"
#import "KNTransition.h"

@interface KNAbstractSlide : TSPObject <TSSPropertySource, TSKDocumentObject, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSKTransformableObject, TSSStyleClient, TSDReplaceableMediaContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer>

 {
    KNSlideBackgroundInfo *_background;
    NSOrderedSet *_childInfos;
    BOOL _needsSlideNodeEventCountUpdate;
    TSUPointerKeyDictionary *_drawableToGhostInfosMap;
    TSUMutablePointerSet *_drawablesWithInvalidatedGhosts;
    BOOL _shouldConsiderAllChunksActive;
}


@property (readonly, nonatomic) NSArray *activeBuildChunks;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) KNSlideBackgroundInfo *background;
@property (readonly, nonatomic) TSDFill *backgroundFill;
@property (readonly, nonatomic) BOOL backgroundIsNoFillOrColorFillWithAlpha;
@property (retain, nonatomic) KNBodyPlaceholderInfo *bodyPlaceholder; // ivar: _bodyPlaceholder
@property (readonly, nonatomic, getter=isBodyVisible) BOOL bodyVisible;
@property (readonly, nonatomic) NSUInteger buildChunkCount;
@property (readonly, nonatomic) NSArray *buildChunks; // ivar: _buildChunks
@property (readonly, nonatomic) NSUInteger buildCount;
@property (copy, nonatomic) NSSet *builds; // ivar: _builds
@property (readonly, nonatomic) NSArray *buildsGroupedByDeliveryGroup;
@property (copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *containedModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUInteger deliveryGroupCount;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSUPointerKeyDictionary *drawableToGhostInfosMap;
@property (readonly, nonatomic) TSUMutablePointerSet *drawablesWithInvalidatedGhosts;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) BOOL hasFreeformTextPlaceholders;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inDocument; // ivar: _inDocument
@property (readonly, nonatomic) NSArray *infosToDisplay;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) NSMapTable *instructionalTextForInfos; // ivar: _instructionalTextForInfos
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isTemplateSlide;
@property (readonly, nonatomic) BOOL isTopmostContainerInfo;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) KNMotionBackground *motionBackground; // ivar: _motionBackground
@property (retain, nonatomic) KNMotionBackgroundStyle *motionBackgroundStyle;
@property (retain, nonatomic) KNObjectPlaceholderInfo *objectPlaceholder; // ivar: _objectPlaceholder
@property (readonly, nonatomic, getter=isObjectVisible) BOOL objectVisible;
@property (readonly, nonatomic) NSArray *ownedChildInfos;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic) NSIndexSet *paragraphIndexesOfTopLevelBullets;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (copy, nonatomic) NSDictionary *placeholdersForTags; // ivar: _placeholdersForTags
@property (readonly, nonatomic) NSSet *referencedStyles;
@property (readonly, weak, nonatomic) KNSlideNode *slideNode; // ivar: _slideNode
@property (retain, nonatomic) KNSlideNumberPlaceholderInfo *slideNumberPlaceholder; // ivar: _slideNumberPlaceholder
@property (readonly, nonatomic, getter=isSlideNumberVisible) BOOL slideNumberVisible;
@property (retain, nonatomic) KNSlideStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsBuilds;
@property (retain, nonatomic) KNTitlePlaceholderInfo *titlePlaceholder; // ivar: _titlePlaceholder
@property (readonly, nonatomic, getter=isTitleVisible) BOOL titleVisible;
@property (retain, nonatomic) KNTransition *transition; // ivar: _transition


+(BOOL)chunk:(id)arg0 isFirstInDeliveryGroupForChunks:(id)arg1 ;
+(BOOL)needsObjectUUID;
+(Class)classForUnarchiver:(id)arg0 ;
+(NSUInteger)deliveryGroupCountForBuildChunks:(id)arg0 ;
+(NSUInteger)deliveryGroupIndexForBuildChunk:(id)arg0 inBuildChunks:(id)arg1 ;
+(id)buildChunksInDeliveryGroupAtIndex:(NSUInteger)arg0 inBuildChunks:(id)arg1 ;
+(id)p_firstActiveChunkInChunks:(id)arg0 ;
+(id)parentSlideForInfo:(id)arg0 ;
-(BOOL)areBuildChunksInValidOrderIgnoringInactiveChunks:(id)arg0 ;
-(BOOL)canMoveDeliveryGroupFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)canMoveDrawables:(id)arg0 toIndexes:(id)arg1 ;
-(BOOL)canSetChunksToAutomaticWith:(id)arg0 ;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)hasComplementForBuildChunk:(id)arg0 ;
-(BOOL)hasComplementForBuildChunk:(id)arg0 inBuildChunks:(id)arg1 ;
-(BOOL)hasTagForInfo:(id)arg0 ;
-(BOOL)infoExistsForTag:(id)arg0 ;
-(BOOL)infoIsPlaceholder:(id)arg0 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)p_activeChunks:(id)arg0 areInOrderForBuild:(id)arg1 ;
-(BOOL)p_activeChunks:(id)arg0 interleaveChunksForComplementOfBuild:(id)arg1 ;
-(BOOL)p_areActiveBuildChunksInValidOrder:(id)arg0 ;
-(BOOL)p_canMoveDeliveryGroupBuildChunks:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)p_canMoveDeliveryGroupBuildChunksFromIndex:(NSUInteger)arg0 toIndex:(NSUInteger)arg1 ;
-(BOOL)p_isChildPlaceholderInfo:(id)arg0 ;
-(BOOL)p_isValidToMoveChunk:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(CGFloat)highestScaleFactorForRenderingDrawableInfo:(id)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)canMoveBuildChunk:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(NSInteger)validateMoveActiveBuildChunks:(id)arg0 toActiveIndex:(NSUInteger)arg1 ;
-(NSUInteger)deliveryGroupIndexForBuildChunk:(id)arg0 ;
-(NSUInteger)p_keynoteVersionFromUnarchiver:(id)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)activeChunksForDrawable:(id)arg0 ;
-(id)activeChunksForDrawable:(id)arg0 animationType:(NSInteger)arg1 ;
-(id)availableEventTriggersForBuildChunks:(id)arg0 ;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)buildChunksForActiveBuildChunkIndexes:(id)arg0 ;
-(id)buildChunksInDeliveryGroupAtIndex:(NSUInteger)arg0 ;
-(id)buildsForDrawable:(id)arg0 ;
-(id)buildsForDrawable:(id)arg0 type:(NSInteger)arg1 ;
-(id)buildsForDrawables:(id)arg0 ;
-(id)childEnumerator;
-(id)chunksForDrawable:(id)arg0 animationType:(NSInteger)arg1 ;
-(id)chunksWhichPlayWithChunk:(id)arg0 ;
-(id)contentBuildForDrawable:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)defaultBodyPlaceholder;
-(id)defaultBodyPlaceholderWithContext:(id)arg0 ;
-(id)defaultSlideNumberPlaceholder;
-(id)defaultSlideNumberPlaceholderWithContext:(id)arg0 ;
-(id)defaultTitlePlaceholder;
-(id)defaultTitlePlaceholderWithContext:(id)arg0 ;
-(id)deliveryGroupIndexesForBuilds:(id)arg0 ;
-(id)imageUsingDocumentRoot:(id)arg0 ;
-(id)inBuildForDrawable:(id)arg0 ;
-(id)infoCorrespondingToInfo:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)infoForTag:(id)arg0 ;
-(id)initWithSlideNode:(id)arg0 context:(id)arg1 ;
-(id)instructionalTextForInfo:(id)arg0 ;
-(id)objectForProperty:(int)arg0 ;
-(id)objectUUIDPath;
-(id)outBuildForDrawable:(id)arg0 ;
-(id)p_ChunksForDrawable:(id)arg0 animationType:(NSInteger)arg1 onlyActiveChunks:(BOOL)arg2 ;
-(id)p_calculateActiveBuildChunks;
-(id)p_chunksWhichWillPlayWithChunksToSetToWith:(id)arg0 ;
-(id)p_complementForBuild:(id)arg0 ;
-(id)p_firstActiveChunkInChunksForBuild:(id)arg0 ;
-(id)p_invalidBuildsOnDrawable:(id)arg0 ;
-(id)p_lastActiveChunkInChunksForBuild:(id)arg0 ;
-(id)pdfDataUsingDocumentRoot:(id)arg0 ;
-(id)placeholderOfClass:(Class)arg0 withGeometry:(id)arg1 stylesheet:(id)arg2 shapePresetIndex:(NSInteger)arg3 textPresetIndex:(NSInteger)arg4 layoutPropertyMap:(id)arg5 paragraphPropertyMap:(id)arg6 listPropertyMap:(id)arg7 context:(id)arg8 ;
-(id)placeholderWithPlaceholder:(id)arg0 context:(id)arg1 ;
-(id)placeholderWithPlaceholder:(id)arg0 context:(id)arg1 placeholderClass:(Class)arg2 ;
-(id)tagForInfo:(id)arg0 ;
-(int)intValueForProperty:(int)arg0 ;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(struct _NSRange )p_activeChunkRangeForBuild:(id)arg0 inActiveChunks:(id)arg1 ;
-(void)addBuild:(id)arg0 ;
-(void)addChildInfo:(id)arg0 ;
-(void)addDrawable:(id)arg0 dolcContext:(id)arg1 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)didInitFromSOS;
-(void)i_invalidateActiveChunkCache;
-(void)i_primitiveAddBuild:(id)arg0 ;
-(void)i_primitiveInsertBuildChunk:(id)arg0 afterChunk:(id)arg1 generateIdentifier:(BOOL)arg2 ;
-(void)i_primitiveSetBuildChunks:(id)arg0 ;
-(void)i_primitiveSetBuilds:(id)arg0 ;
-(void)insertBuildChunk:(id)arg0 afterChunk:(id)arg1 generateIdentifier:(BOOL)arg2 ;
-(void)insertChildInfo:(id)arg0 above:(id)arg1 ;
-(void)insertChildInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildInfo:(id)arg0 below:(id)arg1 ;
-(void)insertContainedModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertDrawable:(id)arg0 atIndex:(NSUInteger)arg1 dolcContext:(id)arg2 ;
-(void)insertDrawables:(id)arg0 atIndex:(NSUInteger)arg1 dolcContext:(id)arg2 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)moveChildren:(id)arg0 toIndexes:(id)arg1 ;
-(void)moveModel:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)p_assertChunksInSequenceForBuild:(id)arg0 ;
-(void)p_checkChildInfosForDuplicates:(id)arg0 ;
-(void)p_insertChildInfos:(id)arg0 atIndex:(NSUInteger)arg1 dolcContext:(id)arg2 ;
-(void)p_invalidateAllChunkAndBuildCaches;
-(void)p_invalidateCachesForBuildUpdate:(id)arg0 isForRemoval:(BOOL)arg1 ;
-(void)p_invalidateCachesForChunkUpdate:(id)arg0 isForRemoval:(BOOL)arg1 ;
-(void)p_invalidateSlideNodeBuildEventCountCaches;
-(void)p_updateBuildEffects:(BOOL)arg0 version:(NSUInteger)arg1 ;
-(void)p_updateBuildsReplacingPlaceholder:(id)arg0 withPlaceholder:(id)arg1 ;
-(void)p_updateChartBuildChunksImmediatelyWithoutUndoHistory;
-(void)p_updateChunkCount;
-(void)p_updateOverlappingBuildEventTriggers;
-(void)p_updateStartAndEndOffsetsIfNecessaryForFileVersion:(NSUInteger)arg0 ;
-(void)performBlockOnInfos:(id)arg0 ;
-(void)referencedStyleWasUpdated:(id)arg0 ;
-(void)removeBuild:(id)arg0 ;
-(void)removeBuildChunk:(id)arg0 rollbackGeneratedIdentifier:(BOOL)arg1 ;
-(void)removeChildInfo:(id)arg0 ;
-(void)removeContainedModel:(id)arg0 ;
-(void)removeDrawable:(id)arg0 ;
-(void)removeInvalidBuildsOnDrawable:(id)arg0 usingParentCommand:(id)arg1 ;
-(void)removeTagForDrawable:(id)arg0 ;
-(void)replaceChildInfo:(id)arg0 with:(id)arg1 ;
-(void)replaceReferencedStylesUsingBlock:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setInfo:(id)arg0 forSageTag:(id)arg1 ;
-(void)setInstructionalText:(id)arg0 forInfo:(id)arg1 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)updateMotionBackground;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif