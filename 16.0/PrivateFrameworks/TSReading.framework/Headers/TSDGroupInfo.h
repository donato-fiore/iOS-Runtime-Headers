// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGROUPINFO_H
#define TSDGROUPINFO_H

@class NSMutableArray, NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor, TSDContainerInfo;


#import "TSDDrawableInfo.h"
#import "TSDInfoGeometry.h"

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor>

 {
    NSMutableArray *mChildInfos;
    BOOL mIsInDocument;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (readonly) Class superclass;


+(id)drawablesToInsertForGroup:(id)arg0 filteredWithTarget:(id)arg1 action:(SEL)arg2 ;
+(id)groupGeometryFromChildrenInfos:(id)arg0 ;
+(id)p_drawablesToInsertForGroup:(id)arg0 filteredWithTarget:(id)arg1 action:(SEL)arg2 didUngroup:(*BOOL)arg3 ;
-(BOOL)aspectRatioLocked;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)allNestedChildrenInfos;
-(id)allNestedChildrenInfosIncludingGroups;
-(id)childEnumerator;
-(id)childInfos;
-(id)copyWithContext:(id)arg0 ;
-(id)groupedGeometryForChildInfo:(id)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)onlyChild;
-(id)ungroupedGeometryForChildInfo:(id)arg0 ;
-(void)acceptVisitor:(id)arg0 ;
-(void)addChildInfo:(id)arg0 ;
-(void)adoptStylesheet:(id)arg0 withMapper:(id)arg1 ;
-(void)dealloc;
-(void)didCopy;
-(void)ensureGeometryFitsChildren;
-(void)insertChildInfo:(id)arg0 above:(id)arg1 ;
-(void)insertChildInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildInfo:(id)arg0 below:(id)arg1 ;
-(void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
-(void)moveChildren:(id)arg0 toIndexes:(id)arg1 ;
-(void)processSelectedStoragesWithStatisticsController:(id)arg0 ;
-(void)removeAllChildrenInDocument:(BOOL)arg0 ;
-(void)removeChildInfo:(id)arg0 ;
-(void)replaceChildInfo:(id)arg0 with:(id)arg1 ;
-(void)setChildInfos:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willCopyWithOtherDrawables:(id)arg0 ;


@end


#endif