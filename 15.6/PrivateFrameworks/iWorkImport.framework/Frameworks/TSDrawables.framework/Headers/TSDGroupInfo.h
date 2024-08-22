// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGROUPINFO_H
#define TSDGROUPINFO_H

@class NSMutableArray, NSArray, NSString, NSSet, TSPObject<TSDOwningAttachment>;
@protocol TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDModelContainer, TSDAttachmentAwareContainerInfo, TSDInfo;


#import "TSDDrawableInfo.h"
#import "TSDInfoGeometry.h"

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDModelContainer, TSDAttachmentAwareContainerInfo>

 {
    NSMutableArray *mChildInfos;
    BOOL mIsInDocument;
}


@property (readonly, nonatomic) NSArray *allNestedChildrenInfos;
@property (readonly, nonatomic) NSArray *allNestedChildrenInfosForWrap;
@property (readonly, nonatomic) NSArray *allNestedChildrenInfosIncludingGroups;
@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) BOOL canAspectRatioLockBeChangedByUser;
@property (copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *containedModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *infosToObserveForAttachedInfo;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isEffectivelyEmpty;
@property (readonly, nonatomic) BOOL isFreehandDrawing;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly) Class superclass;


+(Class)classForUnarchiver:(id)arg0 ;
+(id)drawablesToInsertForGroup:(id)arg0 filteredWithBlock:(id)arg1 ;
+(id)groupGeometryFromChildrenInfos:(id)arg0 ;
+(id)groupGeometryFromChildrenInfos:(id)arg0 currentlyLaidOutWithLayoutController:(id)arg1 ;
+(id)p_drawablesToInsertForGroup:(id)arg0 outDidUngroup:(*BOOL)arg1 filteredWithBlock:(id)arg2 ;
-(BOOL)allowsCaption;
-(BOOL)allowsParentGroupToBeResizedWithoutAspectRatioLock;
-(BOOL)allowsTitle;
-(BOOL)canAnchor;
-(BOOL)canCopyData;
-(BOOL)isNonGroupedChild:(id)arg0 ;
-(BOOL)needsDownload;
-(BOOL)shouldBeIgnoredWhenCopying;
-(BOOL)shouldShowInPrint;
-(BOOL)supportsParentRotation;
-(BOOL)wantsCounterRotationWhenNotSupportingParentRotationInRotatedParent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)childEnumerator;
-(id)childEnumeratorForUserSearch;
-(id)copyWithContext:(id)arg0 ;
-(id)groupedGeometryForChildInfo:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)p_ungroupedGeometryForInfo:(id)arg0 ;
-(id)typeName;
-(id)ungroupedGeometryForChildInfo:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)addChildInfo:(id)arg0 ;
-(void)adjustModelInPreparationForBecomingInline;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)didCopy;
-(void)ensureGeometryFitsChildren;
-(void)insertChildInfo:(id)arg0 above:(id)arg1 ;
-(void)insertChildInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildInfo:(id)arg0 below:(id)arg1 ;
-(void)insertContainedModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 upgradeDOLC:(BOOL)arg2 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
-(void)moveChildren:(id)arg0 toIndexes:(id)arg1 ;
-(void)moveModel:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)p_didUpdateChildInfos;
-(void)removeAllChildrenInDocument:(BOOL)arg0 ;
-(void)removeChildInfo:(id)arg0 ;
-(void)removeContainedModel:(id)arg0 ;
-(void)replaceChildInfo:(id)arg0 with:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif