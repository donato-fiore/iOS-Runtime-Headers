// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPBODYINFO_H
#define TPBODYINFO_H

@class TSWPStorage, NSArray, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSKModelRootIndexProvider, TSDHint, TSWPOffscreenColumn, TSWPTopicNumberHints, TSDInfo;

#import <Foundation/Foundation.h>

#import "TPPageHint.h"

@interface TPBodyInfo : NSObject <TSDContainerInfo, TSKModelRootIndexProvider>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) TSWPStorage *bodyStorage; // ivar: _bodyStorage
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (readonly, nonatomic) BOOL laysOutVertically;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (readonly, nonatomic) NSObject<TSDHint> *nextTargetFirstChildHint;
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *nextTargetFirstColumn;
@property (readonly, nonatomic) NSObject<TSWPTopicNumberHints> *nextTargetTopicNumberHints;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, nonatomic) TPPageHint *pageHint;
@property (weak, nonatomic) NSObject<TSDInfo> *parentInfo; // ivar: _parentInfo
@property (readonly, nonatomic) NSObject<TSWPOffscreenColumn> *previousTargetLastColumn;
@property (readonly, nonatomic) TSWPStorage *storage;
@property (readonly) Class superclass;


-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(NSInteger)modelRootIndex;
-(id)copyWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithBodyStorage:(id)arg0 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)inflateBodyLayout:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;


@end


#endif