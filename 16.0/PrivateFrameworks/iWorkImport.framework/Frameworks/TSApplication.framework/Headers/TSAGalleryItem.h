// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAGALLERYITEM_H
#define TSAGALLERYITEM_H

@class TSPObject, TSWPStorage, TSDImageDataHelper, TSSPropertySetChangeDetails, NSString, TSPData, NSArray, TSDInfoGeometry, TSDImageAdjustments, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSWPStorageParent, TSDChangeableInfo, TSKDocumentObject, OS_dispatch_queue, TSDInfo;



@interface TSAGalleryItem : TSPObject <TSDContainerInfo, TSWPStorageParent, TSDChangeableInfo, TSKDocumentObject>

 {
    TSWPStorage *_captionStorage;
    CGFloat _scale;
    BOOL _definedOffset;
    BOOL _definedScale;
    BOOL _definedThumbnailImageData;
    BOOL _definedImageAdjustments;
    BOOL _definedAdjustedImageData;
    BOOL _definedThumbnailAdjustedImageData;
    BOOL _definedAccessibilityDescription;
    TSDImageDataHelper *_imageDataHelper;
    TSDImageDataHelper *_adjustedImageDataHelper;
    NSObject<OS_dispatch_queue> *_naturalSizeQueue;
    TSSPropertySetChangeDetails *_changes;
}


@property (copy, nonatomic) NSString *accessibilityDescription; // ivar: _accessibilityDescription
@property (retain, nonatomic) TSPData *adjustedImageData; // ivar: _adjustedImageData
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, nonatomic) BOOL canCopyData;
@property (readonly, nonatomic) TSWPStorage *captionStorage;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) TSDImageAdjustments *imageAdjustments; // ivar: _imageAdjustments
@property (retain, nonatomic) TSPData *imageData; // ivar: _imageData
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) NSUInteger itemIndex;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) BOOL needsDownload;
@property (nonatomic) CGPoint offset; // ivar: _offset
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo; // ivar: _parentInfo
@property (readonly, nonatomic) BOOL preventsChangeTracking;
@property (readonly, nonatomic) BOOL preventsComments;
@property (nonatomic) CGFloat scale;
@property (readonly, nonatomic) BOOL storageChangesInvalidateWrap;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDropCapsInChildStorages;
@property (readonly, nonatomic) BOOL supportsMultipleColumns;
@property (readonly, nonatomic) BOOL supportsVerticalTextLayoutInChildStorages;
@property (readonly, nonatomic) BOOL textIsLinked;
@property (retain, nonatomic) TSPData *thumbnailAdjustedImageData; // ivar: _thumbnailAdjustedImageData
@property (retain, nonatomic) TSPData *thumbnailImageData; // ivar: _thumbnailImageData


+(BOOL)needsObjectUUID;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)p_canCopy:(id)arg0 ;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)endCollectingChanges;
-(id)initWithContext:(id)arg0 imageData:(id)arg1 ;
-(id)initWithContext:(id)arg0 imageData:(id)arg1 thumbnailImageData:(id)arg2 ;
-(id)objectUUIDPath;
-(void)acceptVisitor:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)beginCollectingChanges;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)commonInit;
-(void)didInitFromSOS;
-(void)loadFromMessage:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)p_willModifyImageData;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveToMessage:(*void)arg0 archiver:(id)arg1 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willChangeProperty:(int)arg0 ;


@end


#endif