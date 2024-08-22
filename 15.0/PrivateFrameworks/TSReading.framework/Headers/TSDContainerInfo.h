// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCONTAINERINFO_H
#define TSDCONTAINERINFO_H

@class NSMutableArray, NSString, TSPObject<TSDOwningAttachment>;
@protocol TSDMutableContainerInfo, TSKDocumentObject, TSDContainerInfo;


#import "TSPObject.h"
#import "TSDInfoGeometry.h"

@interface TSDContainerInfo : TSPObject <TSDMutableContainerInfo, TSKDocumentObject>

 {
    NSMutableArray *mChildInfos;
}


@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry; // ivar: mGeometry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // ivar: mParentInfo
@property (readonly) Class superclass;


-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)childInfos;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 geometry:(id)arg1 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(void)addChildInfo:(id)arg0 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)insertChildInfo:(id)arg0 above:(id)arg1 ;
-(void)insertChildInfo:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)insertChildInfo:(id)arg0 below:(id)arg1 ;
-(void)moveChildren:(id)arg0 toIndexes:(id)arg1 ;
-(void)removeChildInfo:(id)arg0 ;
-(void)replaceChildInfo:(id)arg0 with:(id)arg1 ;
-(void)setChildInfos:(id)arg0 ;
-(void)wasAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg0 ;
-(void)willBeAddedToDocumentRoot:(id)arg0 context:(id)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg0 ;


@end


#endif