// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXSTANDALONETEXTINFO_H
#define SXSTANDALONETEXTINFO_H

@class NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo;

#import <Foundation/Foundation.h>

#import "SXTextTangierStorage.h"

@interface SXStandaloneTextInfo : NSObject <TSDContainerInfo>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // ivar: anchoredToText
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText; // ivar: attachedToBodyText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // ivar: floatingAboveText
@property (copy, nonatomic) TSDInfoGeometry *geometry; // ivar: geometry
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // ivar: inlineWithText
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // ivar: owningAttachment
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // ivar: parentInfo
@property (readonly, nonatomic) SXTextTangierStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


-(BOOL)anchoredToText;
-(BOOL)attachedToBodyText;
-(BOOL)floatingAboveText;
-(BOOL)inlineWithText;
-(BOOL)isThemeContent;
-(Class)layoutClass;
-(Class)repClass;
-(id)childInfos;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;
-(void)dealloc;


@end


#endif