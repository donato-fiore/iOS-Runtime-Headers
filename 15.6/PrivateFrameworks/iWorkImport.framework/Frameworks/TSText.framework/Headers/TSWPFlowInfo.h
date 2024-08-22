// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPFLOWINFO_H
#define TSWPFLOWINFO_H

@class TSPObject, NSArray, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>, TSUColor;
@protocol TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor, TSDInfo;


#import "TSWPStorage.h"

@interface TSWPFlowInfo : TSPObject <TSWPFlowInfo, TSDContainerInfo, TSDLockableInfo, TSWPStorageParent, TSDSelectionStatisticsContributor>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL autoListRecognition;
@property (readonly, nonatomic) BOOL autoListTermination;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) BOOL containsRotatedOrFlippedTextBox;
@property (readonly, nonatomic) NSInteger contentWritingDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic, getter=isLocked) BOOL locked;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) NSInteger nestedTextboxDepth;
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
@property (readonly, nonatomic) NSUInteger textOrientation;
@property (retain, nonatomic) TSWPStorage *textStorage; // ivar: _textStorage
@property (retain, nonatomic) NSArray *textboxes; // ivar: _textboxes
@property (readonly, nonatomic) TSUColor *userInterfaceFillColor;
@property (nonatomic) NSUInteger userInterfaceIdentifier; // ivar: _userInterfaceIdentifier
@property (readonly, nonatomic) TSUColor *userInterfaceStrokeColor;


+(BOOL)needsObjectUUID;
+(id)fillColorForUserInterfaceIdentifier:(NSUInteger)arg0 ;
+(id)p_colorForIndex:(NSUInteger)arg0 ;
+(id)p_darkColorForColor:(id)arg0 ;
+(id)p_darkColorForIndex:(NSUInteger)arg0 ;
+(id)strokeColorForUserInterfaceIdentifier:(NSUInteger)arg0 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(BOOL)textIsVerticalAtCharIndex:(NSUInteger)arg0 ;
-(Class)layoutClass;
-(Class)repClass;
-(NSUInteger)indexOfTextBox:(id)arg0 ;
-(id)childEnumerator;
-(id)copyWithContext:(id)arg0 ;
-(id)displayNameOfMaxLength:(NSUInteger)arg0 usesEllipsis:(BOOL)arg1 ;
-(id)extractTextStorage;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithStorage:(id)arg0 context:(id)arg1 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)i_uncheckedSetTextboxes:(id)arg0 ;
-(void)loadFromFlowInfoArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)pSaveToFlowInfoArchive:(*void)arg0 archiver:(id)arg1 textBoxes:(id)arg2 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg0 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)saveWithOnlyLinkedTextBoxes:(id)arg0 archiver:(id)arg1 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif