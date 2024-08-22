// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDCONTAINERINFO_H
#define TSDCONTAINERINFO_H

@class TSPObject, NSMutableArray, TSSPropertySetChangeDetails, NSArray, NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDMutableContainerInfo, TSKDocumentObject, TSDModelContainer, TSDChangeableInfo, TSDInfo;


#import "TSDInfoGeometry.h"

@interface TSDContainerInfo : TSPObject <TSDMutableContainerInfo, TSKDocumentObject, TSDModelContainer, TSDChangeableInfo>

 {
    NSMutableArray *_childInfos;
    TSSPropertySetChangeDetails *_changes;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, nonatomic) NSArray *containedModels;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // ivar: _geometry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo; // ivar: _parentInfo
@property (readonly) Class superclass;


-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)copyWithContext:(id)arg0 ;
-(id)endCollectingChanges;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)addChildInfo:(id)arg0 ;
-(void)beginCollectingChanges;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)insertChildInfo:(id)arg0 above:(id)arg1 ;
-(void)insertChildInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildInfo:(id)arg0 below:(id)arg1 ;
-(void)insertContainedModel:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)loadFromArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg0 ;
-(void)moveChildren:(id)arg0 toIndexes:(id)arg1 ;
-(void)moveModel:(id)arg0 toIndex:(NSUInteger)arg1 ;
-(void)removeChildInfo:(id)arg0 ;
-(void)removeContainedModel:(id)arg0 ;
-(void)replaceChildInfo:(id)arg0 with:(id)arg1 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 dolcContext:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;
-(void)willChangeProperties:(id)arg0 ;
-(void)willChangeProperty:(int)arg0 ;


@end


#endif