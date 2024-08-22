// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPPAGEINFO_H
#define TPPAGEINFO_H

@class NSArray, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSDInfo;

#import <Foundation/Foundation.h>

#import "TPBodyInfo.h"
#import "TPDocumentRoot.h"
#import "TPPageController.h"

@interface TPPageInfo : NSObject <TSDContainerInfo>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, nonatomic) TPBodyInfo *bodyInfo; // ivar: _bodyInfo
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TPDocumentRoot *documentRoot; // ivar: _documentRoot
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, weak, nonatomic) TPPageController *pageController;
@property (readonly, nonatomic) CGRect pageFrame; // ivar: _pageFrame
@property (readonly, nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly) Class superclass;


+(BOOL)hasBodyInfo;
+(BOOL)isAlternativePageIndex:(NSUInteger)arg0 documentRoot:(id)arg1 ;
+(BOOL)isDocSetupPageIndex:(NSUInteger)arg0 ;
+(BOOL)isPageTemplatePageIndex:(NSUInteger)arg0 documentRoot:(id)arg1 ;
+(NSUInteger)documentSetupLeftSidePageIndex;
+(NSUInteger)documentSetupPageIndex;
+(NSUInteger)documentSetupRightSidePageIndex;
+(NSUInteger)pageIndexFromPageTemplateIndex:(NSUInteger)arg0 ;
+(NSUInteger)pageTemplateIndexFromPageIndex:(NSUInteger)arg0 documentRoot:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithPageIndex:(NSUInteger)arg0 documentRoot:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)dealloc;
-(void)setPrimitiveGeometry:(id)arg0 ;


@end


#endif