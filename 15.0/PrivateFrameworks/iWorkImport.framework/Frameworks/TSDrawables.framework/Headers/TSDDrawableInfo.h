// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDRAWABLEINFO_H
#define TSDDRAWABLEINFO_H

@class TSPObject, TSPLazyReference, TSSPropertySetChangeDetails, NSArray, NSString, NSSet, NSUUID, NSURL, NSData, TSPObject<TSDOwningAttachment>, TSDDrawableInfo<TSDTitlePlacementProviding>;
@protocol TSDChangeableInfo, TSDLockableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable, TSDScrollingAwareChangeSource, TSDInfo;


#import "TSDInfoGeometry.h"
#import "TSDExteriorTextWrap.h"
#import "TSDDefaultPartitioner.h"
#import "TSDDrawableComment.h"
#import "TSDStandinCaptionInfo.h"
#import "TSDDrawableInfo.h"
#import "TSDGroupInfo.h"

@interface TSDDrawableInfo : TSPObject <TSDChangeableInfo, TSDLockableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable, TSDScrollingAwareChangeSource>

 {
    TSDInfoGeometry *mGeometry;
    NSObject<TSDInfo> *mParentInfo;
    TSPLazyReference *mParentInfoReference;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSDDefaultPartitioner *mDefaultPartitioner;
    TSDDrawableComment *mComment;
    NSArray *mPencilAnnotations;
    TSDStandinCaptionInfo *mCaptionStandin;
    TSDStandinCaptionInfo *mTitleStandin;
}


@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: mAccessibilityDescription
@property (readonly, nonatomic, getter=isAllowedInFreehandDrawings) BOOL allowedInFreehandDrawings;
@property (readonly, nonatomic, getter=isAllowedInGroups) BOOL allowedInGroups;
@property (readonly, nonatomic) BOOL allowsCaption;
@property (readonly, nonatomic) BOOL allowsParentGroupToBeResizedWithoutAspectRatioLock;
@property (readonly, nonatomic) BOOL allowsTitle;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic) NSSet *animationFilters;
@property (nonatomic) BOOL aspectRatioLocked; // ivar: mAspectRatioLocked
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL canAddCaption;
@property (readonly, nonatomic) BOOL canAddTitle;
@property (readonly, nonatomic) BOOL canAnchor;
@property (readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property (readonly, nonatomic) BOOL canChangeWrapType;
@property (readonly, nonatomic) BOOL canCommentInCaptionOrTitle;
@property (readonly, nonatomic) BOOL canCopyData;
@property (readonly, nonatomic) BOOL canRemoveCaption;
@property (readonly, nonatomic) BOOL canRemoveTitle;
@property (readonly, nonatomic) BOOL canSizeBeChangedIncrementally;
@property (retain, nonatomic) TSDDrawableInfo *caption; // ivar: mCaption
@property (nonatomic) BOOL captionHidden; // ivar: mCaptionHidden
@property (retain, nonatomic) TSDStandinCaptionInfo *captionStandin;
@property (copy, nonatomic) NSUUID *captionUUID;
@property (retain, nonatomic) TSDDrawableComment *comment;
@property (readonly, nonatomic) TSDGroupInfo *containingGroup;
@property (readonly, nonatomic) BOOL contentsAreRightToLeft;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) NSString *defaultDescriptiveName;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *displayableContainedText;
@property (readonly) NSString *displayableDescriptiveName;
@property (copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (readonly, nonatomic) CGAffineTransform fullTransformInRoot;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) BOOL hasPDFDataForCopy;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *hyperlinkURL; // ivar: mHyperlinkURL
@property (readonly, nonatomic) NSObject<TSDInfo> *infoForAlignAndDistribute;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isLockedForSpecificInfo;
@property (readonly, nonatomic, getter=isLockable) BOOL lockable;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: mLocked
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) NSData *originalPDFDataForCopy;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // ivar: mOwningAttachment
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (retain, nonatomic) NSArray *pencilAnnotations;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly, nonatomic) BOOL requiresStagesBuildingInReverse;
@property (readonly, nonatomic) BOOL shouldBeIgnoredWhenCopying;
@property (readonly, nonatomic) BOOL shouldShowInPrint;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL suppliesFinalTextures;
@property (readonly, nonatomic) BOOL supportsAttachedComments;
@property (readonly, nonatomic) BOOL supportsHyperlinks;
@property (readonly, nonatomic) BOOL supportsParentRotation;
@property (retain, nonatomic) TSDDrawableInfo<TSDTitlePlacementProviding> *title; // ivar: mTitle
@property (nonatomic) BOOL titleHidden; // ivar: mTitleHidden
@property (retain, nonatomic) TSDStandinCaptionInfo *titleStandin;
@property (copy, nonatomic) NSUUID *titleUUID;
@property (readonly, nonatomic) CGAffineTransform transformInRoot;
@property (readonly, nonatomic) CGPoint transformableObjectAnchorPoint;
@property (readonly) NSString *typeName;
@property (readonly) NSString *userDescription;
@property (readonly, nonatomic) BOOL wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
@property (readonly, nonatomic) BOOL wantsPositionFixedWhenCopying;
@property (readonly, nonatomic) BOOL wantsStandardTypesInAdditionToTypesToPromiseWhenCopyingSingleDrawable;
@property (readonly, nonatomic) BOOL wantsStandardTypesInAdditionToTypesToPromiseWhenDraggingSingleDrawable;
@property (readonly, nonatomic) BOOL willRenderContentViaImager;


+(BOOL)canPartitionForPrinting;
+(BOOL)canPartitionInline;
+(BOOL)isCaption;
+(BOOL)needsObjectUUID;
+(BOOL)wantsTitleAndCaptionUUIDs;
+(Class)classForUnarchiver:(id)arg0 ;
+(Class)i_drawableInfoSubclassForClass:(Class)arg0 unarchiver:(id)arg1 ;
+(void)registerClassForUnarchiving:(Class)arg0 ;
+(void)setShouldPartitionForPrinting:(BOOL)arg0 ;
-(BOOL)isChildOfPossibleParentInfo:(id)arg0 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)p_allAncestorsAreUnrotatedAndUnflipped;
-(BOOL)shouldCancelScrollingToSelectionPath:(id)arg0 forChanges:(id)arg1 ;
-(BOOL)shouldPreventCopyOperationWithOtherInfos:(id)arg0 ;
-(BOOL)shouldShowOnCanvas:(id)arg0 ;
-(CGFloat)transformGeometryRatioForTransform:(struct CGAffineTransform )arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 animationFilter:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 byGlyphStyle:(int)arg1 animationFilter:(id)arg2 ;
-(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
-(id)childEnumerator;
-(id)childEnumeratorForUserSearch;
-(id)copyToInstantiateMasterPlaceholder;
-(id)copyWithContext:(id)arg0 ;
-(id)descriptionForPasteboardWithSource:(id)arg0 ;
-(id)endCollectingChanges;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectUUIDPath;
-(id)partitioner;
-(id)promisedDataForType:(id)arg0 ;
-(id)promisedTSPDataForType:(id)arg0 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(id)transformedGeometryWithTransform:(struct CGAffineTransform )arg0 inBounds:(struct CGRect )arg1 ;
-(id)typesToPromiseWhenCopyingSingleDrawable;
-(struct CGAffineTransform )computeFullTransform;
-(struct CGAffineTransform )computeLayoutFullTransform;
-(struct CGPoint )autosizePositionOffsetForGeometry:(id)arg0 dynamicallyDraggedLayout:(id)arg1 ;
-(void)adjustModelInPreparationForBecomingInline;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)beginCollectingChanges;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)coalesceChanges:(id)arg0 ;
-(void)didCopy;
-(void)finalizeDataOnDeepCopyBeforeSerializingForDragAndDrop;
-(void)i_removeCaptionStandin;
-(void)i_removeTitleStandin;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)performBlockWithTemporaryLayout:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)setInsertionCenterPosition:(struct CGPoint )arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willChangeProperties:(id)arg0 ;
-(void)willChangeProperty:(int)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif