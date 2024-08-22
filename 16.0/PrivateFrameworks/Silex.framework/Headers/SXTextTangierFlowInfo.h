// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTTANGIERFLOWINFO_H
#define SXTEXTTANGIERFLOWINFO_H

@class NSString, TSDInfoGeometry, TSPObject<TSDOwningAttachment>;
@protocol TSDContainerInfo, SXTangierRepDirectLayerHostingInfo, TSDRepDirectLayerHosting;

#import <Foundation/Foundation.h>

#import "SXTextTangierFlowStorage.h"

@interface SXTextTangierFlowInfo : NSObject <TSDContainerInfo, SXTangierRepDirectLayerHostingInfo>



@property (readonly, nonatomic, getter=isAnchoredToText) BOOL anchoredToText; // ivar: anchoredToText
@property (readonly, nonatomic, getter=isAttachedToBodyText) BOOL attachedToBodyText; // ivar: attachedToBodyText
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<TSDRepDirectLayerHosting> *directLayerHost; // ivar: _directLayerHost
@property (readonly, nonatomic, getter=isFloatingAboveText) BOOL floatingAboveText; // ivar: floatingAboveText
@property (copy, nonatomic) TSDInfoGeometry *geometry; // ivar: geometry
@property (readonly, nonatomic) BOOL hasSpeakableContent;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInlineWithText) BOOL inlineWithText; // ivar: inlineWithText
@property (nonatomic) BOOL matchesObjectPlaceholderGeometry;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // ivar: owningAttachment
@property (readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo; // ivar: parentInfo
@property (readonly, nonatomic) _NSRange range; // ivar: _range
@property (readonly, nonatomic) SXTextTangierFlowStorage *storage; // ivar: _storage
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
-(id)initWithStorage:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg0 ;


@end


#endif