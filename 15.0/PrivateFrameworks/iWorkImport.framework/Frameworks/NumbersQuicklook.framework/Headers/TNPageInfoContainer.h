// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TNPAGEINFOCONTAINER_H
#define TNPAGEINFOCONTAINER_H

@class NSArray, NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, TSDInfo;

#import <Foundation/Foundation.h>

#import "TNPageController.h"

@interface TNPageInfoContainer : NSObject <TSDContainerInfo>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy, nonatomic) NSArray *childInfos;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (readonly, nonatomic) BOOL isMaster;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (readonly, weak, nonatomic) TNPageController *pageController; // ivar: _pageController
@property (readonly, nonatomic) NSUInteger pageIndex; // ivar: _pageIndex
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly) Class superclass;


-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyWithContext:(id)arg0 ;
-(id)infoForSelectionPath:(id)arg0 ;
-(id)initWithPageIndex:(NSUInteger)arg0 pageController:(id)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;


@end


#endif