// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNNOTEINFO_H
#define KNNOTEINFO_H

@class TSPObject, NSArray, TSWPStorage, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSWPStorageParent, TSWPStorageContainer, TSKDocumentObject, TSKTransformableObject, TSDInfo;



@interface KNNoteInfo : TSPObject <TSDContainerInfo, TSWPStorageParent, TSWPStorageContainer, TSKDocumentObject, TSKTransformableObject>

 {
    NSObject<TSDContainerInfo> *_parentInfo;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (retain, nonatomic) TSWPStorage *containedStorage; // ivar: _containedStorage
@property (readonly, nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (nonatomic) CGRect frameForPrinting; // ivar: _frameForPrinting
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger initialCharacterIndexForExporting; // ivar: _initialCharacterIndexForExporting
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo; // ivar: parentInfo
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (nonatomic) BOOL shrinkTextForPrinting; // ivar: _shrinkTextForPrinting
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (readonly, nonatomic) TSWPStorage *textStorage;
@property (readonly, nonatomic) int verticalAlignment;


+(BOOL)needsObjectUUID;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)shouldHideEmptyBullets;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 containedStorage:(id)arg1 ;
-(id)objectUUIDPath;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif