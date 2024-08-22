// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDRAWABLEINFO_H
#define TSDDRAWABLEINFO_H

@class NSString, NSMutableDictionary, NSURL, TSPObject<TSDOwningAttachment>;
@protocol TSSPropertySource, TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable, TSDAnnotationHosting, TSDContainerInfo;


#import "TSPObject.h"
#import "TSDInfoGeometry.h"
#import "TSPLazyReference.h"
#import "TSSPropertySetChangeDetails.h"
#import "TSDExteriorTextWrap.h"
#import "TSDDefaultPartitioner.h"

@interface TSDDrawableInfo : TSPObject <TSSPropertySource, TSDChangeableInfo, TSKDocumentObject, TSKTransformableObject, TSKSearchable>

 {
    TSDInfoGeometry *mGeometry;
    TSPLazyReference *mParentInfoReference;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSDDefaultPartitioner *mDefaultPartitioner;
    id<TSDAnnotationHosting> *mComment;
}


@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: mAccessibilityDescription
@property (retain, nonatomic) NSMutableDictionary *accessibilityDescriptions; // ivar: mAccessibilityDescriptions
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (nonatomic) BOOL aspectRatioLocked; // ivar: mAspectRatioLocked
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL canSizeBeChangedIncrementally;
@property (copy, nonatomic) NSObject<TSDAnnotationHosting> *comment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) Class editorClass;
@property (copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSURL *hyperlinkURL; // ivar: mHyperlinkURL
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic) BOOL isUserModifiable;
@property (readonly, nonatomic, getter=isLockable) BOOL lockable;
@property (nonatomic, getter=isLocked) BOOL locked; // ivar: mLocked
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // ivar: mOwningAttachment
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // ivar: mParentInfo
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsAttachedComments;
@property (readonly, nonatomic) BOOL supportsHyperlinks;


+(BOOL)canPartition;
+(void)setShouldPartitionByDefault:(BOOL)arg0 ;
-(BOOL)canAnchor;
-(BOOL)canChangeWrapType;
-(BOOL)containsProperty:(int)arg0 ;
-(BOOL)isThemeContent;
-(BOOL)reverseChunkingIsSupported;
-(CGFloat)CGFloatValueForProperty:(int)arg0 ;
-(CGFloat)doubleValueForProperty:(int)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 animationFilter:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 byGlyphStyle:(int)arg1 animationFilter:(id)arg2 ;
-(NSUInteger)textureDeliveryStyleFromDeliveryString:(id)arg0 ;
-(float)floatValueForProperty:(int)arg0 ;
-(id)animationFilters;
-(id)boxedObjectForProperty:(int)arg0 ;
-(id)containingGroup;
-(id)copyWithContext:(id)arg0 ;
-(id)descriptionForPasteboardWithSource:(id)arg0 ;
-(id)endCollectingChanges;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)objectForProperty:(int)arg0 ;
-(id)partitioner;
-(id)presetKind;
-(id)searchForAnnotationsWithHitBlock:(id)arg0 ;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(id)transformedGeometryWithTransform:(struct CGAffineTransform )arg0 inBounds:(struct CGRect )arg1 ;
-(int)elementKind;
-(int)intValueForProperty:(int)arg0 ;
-(struct CGAffineTransform )computeFullTransform;
-(struct CGAffineTransform )computeLayoutFullTransform;
-(struct CGAffineTransform )fullTransformInRoot;
-(struct CGAffineTransform )transformInRoot;
-(struct CGPoint )transformableObjectAnchorPoint;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)beginCollectingChanges;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)coalesceChanges:(id)arg0 ;
-(void)dealloc;
-(void)didCopy;
-(void)performBlockWithTemporaryLayout:(id)arg0 ;
-(void)setInsertionCenterPosition:(struct CGPoint )arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willChangeProperties:(id)arg0 ;
-(void)willChangeProperty:(int)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif