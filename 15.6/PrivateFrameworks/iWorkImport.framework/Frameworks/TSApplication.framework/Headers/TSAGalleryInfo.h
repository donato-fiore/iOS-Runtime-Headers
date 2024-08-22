// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSAGALLERYINFO_H
#define TSAGALLERYINFO_H

@class TSDDrawableInfo, TSWPStorage, TSDMediaStyle, NSArray, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSWPStorageParent, TSDContainerInfo, TSDModelContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDSelectableHintMediaContainer, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding, TSDInfo;



@interface TSAGalleryInfo : TSDDrawableInfo <TSWPStorageParent, TSDContainerInfo, TSDModelContainer, TSDReducibleImageContainer, TSDCompatibilityAwareMediaContainer, TSDSelectableHintMediaContainer, TSDMixing, TSDDrawableInfoCustomUnarchivingSubclassProviding>

 {
    NSInteger _captionMode;
    TSWPStorage *_captionStorage;
    BOOL _isInDocument;
    TSDMediaStyle *_archivedImageStyle;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (nonatomic) NSInteger captionMode;
@property (readonly, nonatomic) TSWPStorage *captionStorage;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *containedModels;
@property (readonly, nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (copy, nonatomic) NSArray *items; // ivar: _items
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL textIsLinked;


+(BOOL)p_stylesAreEqualForOutgoingStorage:(id)arg0 incomingStorage:(id)arg1 ;
+(Class)drawableInfoSubclassForClass:(Class)arg0 unarchiver:(id)arg1 ;
+(id)defaultGalleryCaptionParagraphStyleInStylesheet:(id)arg0 ;
+(id)i_newCaptionStorageWithContext:(id)arg0 ;
+(id)p_overrideCaptionParagraphStyleIdentifier;
+(id)p_paragraphStyleWithLocalizedNameKey:(id)arg0 inStylesheet:(id)arg1 ;
+(void)i_configureCaptionStorage:(id)arg0 ;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)canCopyData;
-(BOOL)isSelectable;
-(BOOL)needsDownload;
-(BOOL)supportsHyperlinks;
-(BOOL)supportsParentRotation;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 animationFilter:(id)arg1 ;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 byGlyphStyle:(int)arg1 animationFilter:(id)arg2 ;
-(id)animationFilters;
-(id)childEnumerator;
-(id)childEnumeratorForUserSearch;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 captionStorage:(id)arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)typeName;
-(struct CGSize )targetSizeForImageData:(id)arg0 associatedHint:(id)arg1 ;
-(unsigned int)elementKind;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)insertContainedModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveModel:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeContainedModel:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif