// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPSHAPEINFO_H
#define TSWPSHAPEINFO_H

@class NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor;


#import "TSDShapeInfo.h"
#import "TSWPColumns.h"
#import "TSWPStorage.h"
#import "TSDInfoGeometry.h"
#import "TSWPLineHintCollection.h"
#import "TSWPPadding.h"
#import "TSWPShapeStyle.h"

@interface TSWPShapeInfo : TSDShapeInfo <TSDContainerInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>

 {
    BOOL _textUserEditable;
}


@property (nonatomic) BOOL allowsLastLineTruncation;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (retain, nonatomic) TSWPColumns *columns;
@property (retain, nonatomic) TSWPStorage *containedStorage; // ivar: _containedStorage
@property (nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL displaysInstructionalText;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic) NSString *instructionalText;
@property (retain, nonatomic) TSWPLineHintCollection *lineHints; // ivar: mLineHints
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) unsigned int maxLineCount;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (retain, nonatomic) TSWPPadding *padding;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) BOOL shrinkTextToFit;
@property (readonly) Class superclass;
@property (nonatomic) BOOL textIsVertical;
@property (nonatomic, getter=isTextUserEditable) BOOL textUserEditable;
@property (readonly, nonatomic) TSWPShapeStyle *tswpShapeStyle;
@property (nonatomic) unsigned int verticalAlignment;


+(void)setDefaultInstructionalText:(id)arg0 ;
-(BOOL)autoListRecognition;
-(BOOL)autoListTermination;
-(BOOL)p_hasContentForRange:(struct _NSRange )arg0 ;
-(BOOL)p_hasListLabelOrContentForParagraphIndex:(NSUInteger)arg0 ;
-(BOOL)supportsShrinkTextToFit;
-(BOOL)supportsTextInset;
-(CGFloat)pOffsetForParagraphAlignment:(struct CGSize )arg0 ;
-(CGFloat)pOffsetForVerticalAlignment:(struct CGSize )arg0 ;
-(Class)editorClass;
-(Class)layoutClass;
-(Class)repClass;
-(Class)styleClass;
-(NSUInteger)chunkCountForTextureDeliveryStyle:(NSUInteger)arg0 byGlyphStyle:(int)arg1 animationFilter:(id)arg2 ;
-(NSUInteger)p_chunkCountForByBullet;
-(NSUInteger)p_chunkCountForByBulletGroup;
-(id)childEnumerator;
-(id)childInfos;
-(id)commandForPasteStyleWithContext:(id)arg0 pasteboardStyles:(id)arg1 ;
-(id)commandForTransformingByTransform:(struct CGAffineTransform )arg0 context:(id)arg1 transformedObjects:(id)arg2 inBounds:(struct CGRect )arg3 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 pathSource:(id)arg3 wpStorage:(id)arg4 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 style:(id)arg2 wpStorage:(id)arg3 ;
-(id)presetKind;
-(id)propertyMapForNewPreset;
-(id)styleIdentifierTemplateForNewPreset;
-(id)stylesForCopyStyle;
-(id)textureDeliveryStylesLocalized:(BOOL)arg0 animationFilter:(id)arg1 ;
-(struct CGAffineTransform )autosizedTransformForInfoGeometry:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGPoint )autosizePositionOffset;
-(struct CGPoint )autosizePositionOffsetForGeometry:(id)arg0 size:(struct CGSize )arg1 ;
-(struct CGPoint )transformableObjectAnchorPoint;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)fixPositionOfImportedAutosizedShape;
-(void)processSelectedStoragesWithStatisticsController:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif