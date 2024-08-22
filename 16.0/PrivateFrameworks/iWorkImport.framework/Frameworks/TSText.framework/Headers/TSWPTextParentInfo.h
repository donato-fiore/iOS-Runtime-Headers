// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPTEXTPARENTINFO_H
#define TSWPTEXTPARENTINFO_H

@class NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDInfo;

#import <Foundation/Foundation.h>


@interface TSWPTextParentInfo : NSObject <TSDInfo>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText;
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText;
@property (readonly, nonatomic, getter=isInlineWithTextWithWrap) BOOL inlineWithTextWithWrap;
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDInfo> *parentInfo;
@property (readonly) Class superclass;


-(BOOL)isSelectable;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(id)copyWithContext:(id)arg0 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)setPrimitiveGeometry:(id)arg0 ;


@end


#endif