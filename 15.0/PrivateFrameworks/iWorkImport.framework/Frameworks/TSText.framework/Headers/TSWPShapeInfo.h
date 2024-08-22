// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPSHAPEINFO_H
#define TSWPSHAPEINFO_H

@class TSDShapeInfo, NSArray, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>, TSPObject<TSWPFlowInfo>;
@protocol TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor, TSWPTextBoxNesting, TSDInfo;


#import "TSWPStorage.h"
#import "TSWPColumns.h"
#import "TSWPDocumentRoot.h"
#import "TSWPPadding.h"
#import "TSWPShapeStyle.h"

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor, TSWPTextBoxNesting>

 {
    TSWPStorage *_containedStorage;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) int columnDirection;
@property (retain, nonatomic) TSWPColumns *columns;
@property (nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *defaultInstructionalText;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displaysInstructionalText;
@property (readonly, nonatomic) TSWPDocumentRoot *documentRoot;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly, nonatomic) BOOL hasVisibleContents;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL ignoresInteriorWrap; // ivar: _ignoresInteriorWrap
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) NSString *instructionalText;
@property (readonly, nonatomic) BOOL isAutoresizingTextBox;
@property (readonly, nonatomic) BOOL isCaptionOrContainedByCaption;
@property (readonly, nonatomic) BOOL isLinkable;
@property (readonly, nonatomic) BOOL isLinked;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL isRotatedOrFlipped;
@property (readonly, nonatomic) BOOL isTextBox; // ivar: _isTextBox
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) NSInteger nestedTextboxDepth;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (retain, nonatomic) TSWPPadding *padding;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly, nonatomic) BOOL preventsChangeTracking; // ivar: _preventsChangeTracking
@property (readonly, nonatomic) BOOL preventsComments; // ivar: _preventsComments
@property (readonly, nonatomic) BOOL shouldDisplayTextAsTypeName;
@property (readonly, nonatomic) BOOL shouldIgnoreWPContent;
@property (nonatomic) BOOL shrinkTextToFit;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (weak, nonatomic) TSPObject<TSWPFlowInfo> *textFlow; // ivar: _textFlow
@property (readonly, nonatomic) BOOL textIsLinked;
@property (nonatomic) BOOL textIsVertical;
@property (readonly, nonatomic) TSWPStorage *textStorage;
@property (readonly, nonatomic) BOOL textStorageAllowsCommentsDisregardingParent; // ivar: _textStorageAllowsCommentsDisregardingParent
@property (readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property (nonatomic) int verticalAlignment;


+(id)defaultPlaceholderTextForLocale:(id)arg0 ;
+(id)p_newEmptyStorageWithContext:(id)arg0 paragraphStyle:(id)arg1 ;
-(BOOL)allowsCaption;
-(BOOL)allowsTitle;
-(BOOL)canAnchor;
-(BOOL)isLocked;
-(BOOL)p_growsAutomatically;
-(BOOL)p_isEmptyList;
-(BOOL)p_isEmptyParagraphWithFillOrBorders;
-(BOOL)p_isNonTopicParagraphBreakAtParagraphIndex:(NSUInteger)arg0 ;
-(BOOL)supportsParentRotation;
-(BOOL)supportsShrinkTextToFit;
-(BOOL)supportsTextInset;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(CGFloat)pOffsetForParagraphAlignment:(struct CGSize )arg0 ;
-(CGFloat)pOffsetForVerticalAlignment:(struct CGSize )arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 byGlyphStyle:(int)arg1 animationFilter:(id)arg2 ;
-(NSUInteger)maxInlineNestingDepth;
-(NSUInteger)p_chunkCountForByBullet;
-(NSUInteger)p_chunkCountForByBulletGroup;
-(NSUInteger)p_nonTopicParagraphBreakCount;
-(id)childEnumerator;
-(id)childEnumeratorForUserSearch;
-(id)copyAcceptingTrackedChangesWithContext:(id)arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)defaultDescriptiveName;
-(id)displayableContainedText;
-(id)i_ownedTextStorage;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 wpStorage:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 wpStorage:(id)arg3 ;
-(id)presetKind;
-(id)propertyMapForNewPreset;
-(id)stylesForCopyStyle;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(id)typeName;
-(struct CGAffineTransform )autosizedTransformForInfoGeometry:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGPoint )autosizePositionOffset;
-(struct CGPoint )autosizePositionOffsetForGeometry:(id)arg0 dynamicallyDraggedLayout:(id)arg1 ;
-(struct CGPoint )autosizePositionOffsetForGeometry:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGPoint )transformableObjectAnchorPoint;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)fixPositionOfImportedAutosizedShape;
-(void)i_setOwnedTextStorage:(id)arg0 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_setOwnedTextStorage:(id)arg0 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)upgradeOwnedStorageWithFileFormatVersion:(NSUInteger)arg0 ;
-(void)upgradeWithNewOwnedStorage;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif